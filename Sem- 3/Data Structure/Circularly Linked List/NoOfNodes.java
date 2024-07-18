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
	public Node last=null;
	public void add(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=last=newNode;
			last.link=first;
			System.out.println("Inserted Successfully");
			return;
		}
		newNode.link=first;
		last.link=newNode;
		first=newNode;
		System.out.println("Inserted Successfully");
	}
	public void display(){
		Node temp=first;
		if(temp==null){
			System.out.print("Empty");
			return;
		}
		do{
			System.out.print(temp.data+" ");
			temp=temp.link;
		}while(temp!=first);
	}
	public int count(){
		Node temp=first;
		int count=0;
		if(temp==null){
			return 0;
		}
		do{
			count++;
			temp=temp.link;
		}while(temp!=first);
		return count;
	}
}
public class NoOfNodes{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("No. of Nodes in Circularly Linked List");
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
		System.out.print("\nLinked List: ");
		l1.display();
		System.out.println("\nNo. of Nodes: "+l1.count());
	}
}