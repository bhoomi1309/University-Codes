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
	public void push(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=newNode;
			System.out.println("Pushed Successfully");
			return;
		}
		Node temp=first;
		first=newNode;
		first.link=temp;
		System.out.println("Pushed Successfully");
	}
	public int pop(){
		if(first==null){
			return -1;
		}
		Node temp=first;
		first=first.link;
		return temp.data;
	}
	public void display(){
		Node temp=first;
		System.out.print("\nStack: ");
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
public class StackLinkedList{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Implementing Stack using Singly Linked Linear List");
		LinkedList s=new LinkedList();
		do{
			System.out.println("Enter a number such that: ");
			System.out.println("1: Push");
			System.out.println("2: Pop");
			System.out.println("3: Display");
			int num=sc.nextInt();
			if(num==1){
				int a;
				System.out.println("\nPush");
				do{
					System.out.print("Enter a number to push or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					s.push(a);
				}while(a!=-1);
			}
			if(num==2){
				int a;
				System.out.println("\nPop");
				do{
					System.out.print("Enter 1 to pop or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					int popped=s.pop();
					if(popped==-1){
						System.out.println("Stack Underflow");
						break;
					}
					System.out.println("Element popped: "+popped);
				}while(a!=-1);
			}
			if(num==3){
				int a;
				System.out.println("\nDisplay Stack");
				s.display();
			}
			if(num!=1&&num!=2&&num!=3){
				System.out.println("Invalid Input");
				return;
			}
			System.out.print("\n\nDo you want to continue? (y/n) ");
			String s1=sc.next();
			ch=s1.charAt(0);
		}while(ch=='y' || ch=='Y');
	}
}