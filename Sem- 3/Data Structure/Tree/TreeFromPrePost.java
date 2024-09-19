class NodeTree{
    int info;
    NodeTree left;
    NodeTree right;
    public NodeTree(int n){
        info=n;
        left=null;
        right=null;
    }
}
public class TreeFromPrePost{
    int preIndex=0;
    int postIndex=0;
    public NodeTree constructTree(int[] pre,int[] post,int n){
        if(preIndex>=n || postIndex>=n){
            return null;
        }
        NodeTree root=new NodeTree(pre[preIndex++]);
        if(root.info==post[postIndex]){
            postIndex++;
            return root;
        }
        root.left=constructTree(pre,post,n);
        root.right=constructTree(pre,post,n);
        postIndex++;
        return root;
    }
    public void printIn(NodeTree node){
        if(node==null){
            return;
        }
        printIn(node.left);
        System.out.print(node.info + " ");
        printIn(node.right);
    }
    public static void main(String[] args) {
        TreeFromPrePost tree = new TreeFromPrePost();
        int[] pre={1,2,4,5,3,6,7};
        int[] post={4,5,2,6,7,3,1};
        int n=pre.length;
        NodeTree root=tree.constructTree(pre,post,n);
        System.out.println("Inorder:");
        tree.printIn(root);
    }
}
