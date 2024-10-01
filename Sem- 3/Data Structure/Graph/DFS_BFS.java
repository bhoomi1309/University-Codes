import java.util.*;
class Graph{
	public Map<Integer,List<Integer>> list;
	public Graph(){
		list=new HashMap<>();
	}	
	public void add(int x,int y){
		list.putIfAbsent(x,new ArrayList());
		list.get(x).add(y);
		// list.putIfAbsent(y,new ArrayList());
		// list.get(y).add(x);
	}
	public void dfs(int start){
		Set<Integer> visited=new HashSet<>();
		dfs_method(start,visited);
	}
	public void dfs_method(int start,Set<Integer> visited){
		visited.add(start);
		System.out.print(start+" ");
		for(int neighbour : list.getOrDefault(start,new ArrayList<>())){
			if(!visited.contains(neighbour)){
				dfs_method(neighbour,visited);
			}
		}
	}
	public void bfs(int start){
		Set<Integer> visited=new HashSet<>();
		Queue<Integer> queue=new LinkedList<>();
		visited.add(start);
		queue.add(start);
		while(!queue.isEmpty()){
			int curr=queue.poll();
			System.out.print(curr+" ");
			for(int neighbour : list.getOrDefault(curr,new ArrayList<>())){
				if(!visited.contains(neighbour)){
					visited.add(neighbour);
					queue.add(neighbour);
				}
			}
		}
	} 
}
public class DFS_BFS{
	public static void main(String[] args){
		System.out.println("Implementing Graph and DFS BFS");
		Graph graph=new Graph();
		graph.add(1,2);
		graph.add(1,3);
		graph.add(2,4);
		graph.add(2,5);
		graph.add(3,6);
		graph.add(3,7);
		graph.add(4,8);
		graph.add(5,8);
		graph.add(6,8);
		graph.add(7,8);
		System.out.print("DFS: ");
		graph.dfs(1);
		System.out.println();
		System.out.print("BFS: ");
		graph.bfs(1);
	}
}