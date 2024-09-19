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
	public static boolean isSame(Node t1,Node t2){
		if(t1==null && t2==null){
			return true;
		}
		if(t1==null || t2==null || t1.info!=t2.info){
			return false;
		}
		return isSame(t1.left,t2.left) && isSame(t1.right,t2.right); 
	}
}
public class SameTree{
	public static void main(String[] args){
		System.out.println("Construct Tree");
		int[] arr={1,2,3,4,5,6,7};
		NodeTree n=new NodeTree(arr);
		System.out.print("1st Tree: ");
		n.printIn();
		int[] arr2={1,2,8,4,5,6,7};
		NodeTree n2=new NodeTree(arr2);
		System.out.print("2nd Tree: ");
		n2.printIn();
		if(NodeTree.isSame(n.root,n2.root)){
			System.out.println("Both Trees are Same");
		}
		else{
			System.out.println("Both Trees are Not Same");
		}
	}
}