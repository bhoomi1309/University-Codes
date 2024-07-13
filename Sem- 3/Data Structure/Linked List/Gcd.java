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
	public int gcd(int a,int b){
		if(a==0){
			return b;
		}
		if(b==0){
			return a;
		}
		int min=(a<=b)?a:b;
		int gcd=1;
		for(int i=1;i<=min;i++){
			if(a%i==0 && b%i==0){
				gcd=i;
			}
		}
		return gcd;
	}
	public LinkedList gcdAdd(){
		if(first==null){
			return this;
		}
		Node temp=first;
		Node prev=null;
		Node next=temp.link;
		while(temp.link!=null){
			int a=temp.data;
			int b=next.data;
			int data=gcd(a,b);
			Node newNode=new Node(data);
			prev=temp;
			temp=next;
			next=next.link;
			newNode.link=temp;
			prev.link=newNode;
		}
		return this;
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
}
public class Gcd{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Insert GCD in the middle");
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
		LinkedList l2=l1.gcdAdd();
		System.out.print("\nLinked List with GCD inserted: ");
		l2.display();	
	}
}