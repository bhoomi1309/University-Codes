import java.util.Scanner;
import java.util.Stack;
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
		if(temp==null){
			return;
		}
		Stack<Node> s=new Stack<>();
		s.push(root);
		while(s.empty()==false){
			Node newNode=s.peek();
			System.out.print(newNode.info+" ");
			s.pop();
			if(newNode.right!=null){
				s.push(newNode.right);
			}
			if(newNode.left!=null){
				s.push(newNode.left);
			}
		}
	}
	static Stack<Node> s1,s2; 
    static void postorder(Node root) { 
        s1=new Stack<>(); 
        s2=new Stack<>(); 
        if(root==null){ 
            return;
        }
        s1.push(root);
        while(!s1.isEmpty()){ 
            Node temp=s1.pop(); 
            s2.push(temp); 
            if(temp.left!=null){ 
                s1.push(temp.left); 
            }
            if(temp.right!=null){ 
                s1.push(temp.right);
            } 
        } 
        while(!s2.isEmpty()){ 
            Node temp=s2.pop(); 
            System.out.print(temp.info+" "); 
        } 
    } 
	public void printPre(){
		System.out.print("PreOrder: ");
		preorder(root);
	}
	public void inorder(){
		System.out.print("InOrder: ");
		if(root==null){
			return;
		}
		Stack<Node> s=new Stack<>();
		Node current=root;
		while(current!=null || s.size()>0){
			while(current!=null){
				s.push(current);
				current=current.left;
			}
			current=s.pop();
			System.out.print(current.info+" ");
			current=current.right;
		}
	}
	public void printPost(){
		System.out.print("PostOrder: ");
		postorder(root);
	}
}
public class TreeStack{
	public static void main(String[] args){
		System.out.println("Construct Tree");
		int[] arr={1,2,3,4,5,6,7};
		NodeTree n=new NodeTree(arr);
		n.printPre();
		System.out.println();
		n.inorder();
		System.out.println();
		n.printPost();
	}
}