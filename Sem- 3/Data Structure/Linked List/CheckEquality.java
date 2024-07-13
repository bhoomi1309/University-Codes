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
			System.out.println("Inserted Successfully");
			return;
		}
		Node temp=first;
		first=newNode;
		first.link=temp;
		System.out.println("Inserted Successfully");
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
	public int check(LinkedList l2){
		Node temp=this.first;
		Node temp2=l2.first;
		while(temp!=null){
			if(temp.data!=temp2.data){
				return -1;
			}
			temp=temp.link;
			temp2=temp2.link;
		}
		return 1;
	}
}
public class CheckEquality{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Check Equality of 2 Singly Linked List");
		int count1=0,count2=0;
		System.out.println("\nLinked List 1");
		LinkedList l1=new LinkedList();
		int n;
		do{
			System.out.print("Enter a number to insert or -1 to exit: ");
			n=sc.nextInt();
			if(n==-1){
				break;
			}
			count1++;
			l1.add(n);
		}while(n!=-1);
		System.out.println("\nLinked List 2");
		LinkedList l2=new LinkedList();
		int m;
		do{
			System.out.print("Enter a number to insert or -1 to exit: ");
			m=sc.nextInt();
			if(m==-1){
				break;
			}
			count2++;
			l2.add(m);
		}while(m!=-1);
		System.out.print("\nLinked List 1: ");
		l1.display();
		System.out.print("\nLinked List 2: ");
		l2.display();
		System.out.println();
		if(count1!=count2){
			System.out.println("Not Equal");
			return;
		}
		if(l1.check(l2)==-1){
			System.out.println("Not Equal");
			return;
		}
		System.out.println("Equal");
	}
}