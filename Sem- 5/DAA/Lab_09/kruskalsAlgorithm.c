#include <stdio.h>

struct Edge
{
    int source;
    int dest;
    int weight;
};

void sortEdges(struct Edge edges[], int E)
{
    for (int i = 1; i < E; i++)
    {
        int j = i - 1;
        struct Edge key = edges[i];

        while (j >= 0 && key.weight < edges[j].weight)
        {
            edges[j + 1] = edges[j];
            j--;
        }

        edges[j + 1] = key;
    }
}

int find(int parent[], int i)
{
    if (i != parent[i])
    {
        parent[i] = find(parent, parent[i]);
    }
    return parent[i];
}

void unionSet(int parent[], int ucomp, int vcomp, int rank[])
{
    // if (size[ucomp] < size[vcomp]) {
    //     parent[ucomp] = vcomp;
    //     size[vcomp] += size[ucomp];
    // } else {
    //     parent[vcomp] = ucomp;
    //     size[ucomp] += size[vcomp];
    // }
    if (ucomp == vcomp)
        return;
    if (rank[ucomp] < rank[vcomp])
        parent[ucomp] = vcomp;
    else if (rank[ucomp] > rank[vcomp])
        parent[vcomp] = ucomp;
    else{   
        parent[vcomp] = ucomp;
        rank[ucomp]++;   
    }
}

void kruskals(int v, int e, struct Edge E[])
{
    int parent[v], rank[v];
    int edges = 0;

    struct Edge mst[v - 1];

    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }

    sortEdges(E, e);

    for (int i = 0; i < e; i++)
    {
        int u = E[i].source;
        int v = E[i].dest;

        int ucomp = find(parent, u);
        int vcomp = find(parent, v);

        if (ucomp != vcomp)
        {
            mst[edges] = E[i];
            unionSet(parent, ucomp, vcomp, rank);
            edges += 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < edges; i++)
    {
        printf("%d %d %d\n", mst[i].source, mst[i].dest, mst[i].weight);
        sum += mst[i].weight;
    }

    printf("Sum: %d ", sum);
}

int main()
{
    struct Edge E[] = {
        {0, 1, 4},
        {0, 6, 10},
        {0, 2, 9},
        {1, 2, 8},
        {2, 3, 5},
        {2, 4, 2},
        {2, 6, 7},
        {3, 4, 3},
        {3, 5, 7},
        {4, 6, 6},
        {5, 6, 11}};

    kruskals(7, 11, E);

    return 1;
}