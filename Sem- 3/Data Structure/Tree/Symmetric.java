import java.util.Scanner;
class NodeTree{
	class Node{
		int info;
		Node left;
		Node right;
		public Node(int x){
			this.info=x;
			this.left=null;
			this.right=null;
		}
	}
	Node root=null;
	NodeTree(int[] arr){
		if(arr.length>0){
			root=construct(arr,0);
		}
	}
	public Node construct(int[] arr,int i){
		if(i>=arr.length){
			return null;
		}
		Node temp=new Node(arr[i]);
		temp.left=construct(arr,2*i+1);
		temp.right=construct(arr,2*i+2);
		return temp;
	}
	public void inorder(Node temp){
		if(temp!=null){
			inorder(temp.left);
			System.out.print(temp.info+" ");
			inorder(temp.right);
		}
	}
	public void printIn(){
		inorder(root);
		System.out.println();
	}
	public boolean isSymmetric(Node t1,Node t2){
		if(t1==null && t2==null){
			return true;
		}
        if(t1==null || t2==null){
        	return false;
        }
        return (t1.info==t2.info) && isSymmetric(t1.left,t2.right) && isSymmetric(t1.right,t2.left);
	}
	public boolean isTreeSymmetric(){
        return root==null || isSymmetric(root.left,root.right);
    }
}
public class Symmetric{
	public static void main(String[] args){
		System.out.println("Construct Tree");
		int[] arr={8,5,5,3,6,6,3,4};
		NodeTree n=new NodeTree(arr);
		System.out.print("Tree: ");
		n.printIn();
		if(n.isTreeSymmetric()){
			System.out.println("Tree is Symmetric");
		}
		else{
			System.out.println("Tree is Not Symmetric");
		}
	}
}