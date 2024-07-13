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
	public void sort(){
		Node temp=first;
		while(temp!=null){
			Node temp2=temp.link;
			while(temp2!=null){
				if(temp.data>temp2.data){
					int a=temp.data;
					temp.data=temp2.data;
					temp2.data=a;
				}
				temp2=temp2.link;
			}
			temp=temp.link;
		}
	}
	public LinkedList duplicate(){
		if(first==null){
			return this;
		}
		if(first.link==null){
			return this;
		}
		Node temp=first;
		while(temp!=null){
			Node temp2=temp;
			while(temp2!=null && temp2.data==temp.data){
				temp2=temp2.link;
			}
			temp.link=temp2;
			temp=temp.link;
		}
		return this;
	}
}
public class Duplicate{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Remove Duplicates from Linked List");
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
		l1.sort();
		LinkedList l2=l1.duplicate();
		System.out.print("\nLinked List without duplicates: ");
		l2.display();
	}
}