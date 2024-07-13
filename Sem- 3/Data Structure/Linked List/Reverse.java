import java.util.Scanner;
class LinkedList{
	class Node{
		int data;
		Node link;
		public Node(int data){
			this.data=data;
			this.link=null;
		}
	}
	public Node first=null;
	public void add(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=newNode;
			return;
		}
		Node temp=first;
		first=newNode;
		first.link=temp;
	}
	public void display(){
		Node temp=first;
		if(temp==null){
			System.out.print("Empty");
			return;
		}
		while(temp!=null){
			System.out.print(temp.data+" ");
			temp=temp.link;
		}
	}
	public LinkedList reverse(){
		Node prev=null;
		Node temp=this.first;
		Node next=null;
		while(temp!=null){
			next=temp.link;
			temp.link=prev;
			prev=temp;
			temp=next;
		}
		first=prev;
		return this;
	}
}
public class Reverse{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Reverse Linked List");
		LinkedList l1=new LinkedList();
		int n;
		do{
			System.out.print("Enter a number to insert or -1 to exit: ");
			n=sc.nextInt();
			if(n==-1){
				break;
			}
			l1.add(n);
		}while(n!=-1);
		System.out.print("Linked List: ");
		l1.display();
		LinkedList l2=l1.reverse();
		System.out.print("\nReversed Linked List: ");
		l2.display();
	}
}