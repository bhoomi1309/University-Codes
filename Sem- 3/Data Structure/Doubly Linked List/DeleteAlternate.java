import java.util.Scanner;
class Doubly{
	class Node{
		int data;
		Node lptr;
		Node rptr;
		public Node(int data){
			this.data=data;
			this.lptr=null;
			this.rptr=null;
		}
	}
	public Node first=null;
	public Node last=null;
	public void insertFirst(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=last=newNode;
			System.out.println("Inserted Successfully");
			return;
		}
		newNode.rptr=first;
		first.lptr=newNode;
		first=newNode;
		System.out.println("Inserted Successfully");
	}
	public void deleteAlternate(int count){
		if(count<2){
			System.out.print("Linked List with alternates deleted: ");
			display();
			return;
		}
		Node temp=first;
		for(int i=1;i<count;i++){
			if(i%2==0){
				(temp.lptr).rptr=temp.rptr;
				(temp.rptr).lptr=temp.lptr;
			}
			temp=temp.rptr;
		}
		if(count%2==0){
			(last.lptr).rptr=null;
		 	last=last.lptr;
		}
		System.out.print("Linked List with alternates deleted: ");
		display();
	}
	public void display(){
		Node temp=first;
		if(temp==null){
			System.out.print("Empty\n");
			return;
		}
		do{
			System.out.print(temp.data+" ");
			temp=temp.rptr;
		}while(temp!=null);
		System.out.println();
	}
}
public class DeleteAlternate{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Delete Alternate Nodes in Doubly Linked List");
		Doubly n=new Doubly();
		int a,count=0;
		do{
			System.out.print("Enter a number to insert and -1 to exit: ");
			a=sc.nextInt();
			if(a==-1){
				break;
			}
			count++;
			n.insertFirst(a);
		}while(a!=-1);
		System.out.print("Linked List: ");
		n.display();
		n.deleteAlternate(count);
	}
}