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
	public void preorder(Node temp){
		if(temp!=null){
			System.out.print(temp.info+" ");
			preorder(temp.left);
			preorder(temp.right);
		}
	}
	public void inorder(Node temp){
		if(temp!=null){
			inorder(temp.left);
			System.out.print(temp.info+" ");
			inorder(temp.right);
		}
	}
	public void postorder(Node temp){
		if(temp!=null){
			postorder(temp.left);
			postorder(temp.right);
			System.out.print(temp.info+" ");
		}
	}
	public void printPre(){
		System.out.print("PreOrder: ");
		preorder(root);
		System.out.println();
	}
	public void printIn(){
		System.out.print("InOrder: ");
		inorder(root);
		System.out.println();
	}
	public void printPost(){
		System.out.print("PostOrder: ");
		postorder(root);
		System.out.println();
	}
}
public class ConstructTree{
	public static void main(String[] args){
		System.out.println("Construct Tree");
		int[] arr={1,2,3,4,5,6,7};
		NodeTree n=new NodeTree(arr);
		n.printPre();
		n.printIn();
		n.printPost();
	}
}