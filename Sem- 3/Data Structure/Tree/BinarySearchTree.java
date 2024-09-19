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
	// public NodeTree(int[] arr){
	// 	for(int i=0;i<arr.length;i++){
	// 		insert(root,arr[i]);
	// 	}
	// }
	// public void insert(Node temp,int n){
	// 	Node newNode=new Node(n);
	// 	if(root==null){
	// 		root=newNode;
	// 		return;
	// 	}
	// 	if(n>temp.info){
	// 		if(temp.right==null){
	// 			temp.right=newNode;
	// 		}
	// 		else{
	// 			insert(temp.right,n);
	// 		}
	// 	}
	// 	else if(n<temp.info){
	// 		if(temp.left==null){
	// 			temp.left=newNode;
	// 		}
	// 		else{
	// 			insert(temp.left,n);
	// 		}
	// 	}
	// }
	public void insert(int n){
		Node newNode=new Node(n);
		if(root==null){
			root=newNode;
			return;
		}
		Node current=root;
		Node prev=null;
		while(current!=null){
			if(n>current.info){
				prev=current;
				current=current.right;
			}
			else if(n<current.info){
				prev=current;
				current=current.left;
			}
		}
		if(n>prev.info){
			prev.right=newNode;
		}
		else if(n<prev.info){
			prev.left=newNode;
		}
	}
	public int findMin(){
		Node temp=root;
		while(temp.left!=null){
			temp=temp.left;
		}
		return temp.info;
	}
	public int findMax(){
		Node temp=root;
		while(temp.right!=null){
			temp=temp.right;
		}
		return temp.info;
	}
	public void search(int n){
		Node temp=searchNumber(root,n);
		if(temp==null){
			System.out.print("Not found");
			return;
		}
	}
	Node curr=root;
	Node prev=null;
	public Node searchNumber(Node temp,int n){
		if(temp==null){
			return null;
		}
		if(temp.info==n){
			return temp;
		}
		else if(n>temp.info){
			prev=temp;
			curr=temp.right;
			return searchNumber(curr,n);
		}
		else{
			prev=temp;
			curr=temp.left;
			return searchNumber(curr,n);
		}
	}
	public void delete(int n){
		Node curr=root;
        Node prev=null;
        while(curr!=null && curr.info!=n){
            prev=curr;
            if(n<curr.info){
                curr=curr.left;
            }
            else{
                curr=curr.right;
            }
        }
        if(curr==null){
            return;
        }
        if(curr.left==null || curr.right==null){
            Node newCurr;
            if(curr.left==null){
                newCurr=curr.right;
            }
            else{
                newCurr=curr.left;
            }
            if(prev==null)
                return;
            if(curr==prev.left){
                prev.left=newCurr;
            }
            else{
                prev.right=newCurr;
            }
        }
        else{
            Node p=null;
            Node temp=curr.right;
            while(temp.left!=null){
                p=temp;
                temp=temp.left;
            }
            if(p!=null){
                p.left=temp.right;
            }
            else{
                curr.right=temp.right;
            }
            curr.info=temp.info;
        }
        return;
	}
	public void inorder(Node temp){
		if(temp!=null){
			inorder(temp.left);
			System.out.print(temp.info+" ");
			inorder(temp.right);
		}
	}
	public void printIn(){
		System.out.print("InOrder: ");
		inorder(root);
		System.out.println();
	}
}
public class BinarySearchTree{
	public static void main(String[] args){
		System.out.println("Construct Tree");
		int[] arr={10,5,1,7,40,50,6,8,4,19,60};
		NodeTree n=new NodeTree();
		for(int i=0;i<arr.length;i++){
			n.insert(arr[i]);
		}
		n.printIn();
		// n.delete(10);
		// n.printIn();
		System.out.println("Minimum Element: "+n.findMin());
		System.out.println("Maximum Element: "+n.findMax());
	}
}