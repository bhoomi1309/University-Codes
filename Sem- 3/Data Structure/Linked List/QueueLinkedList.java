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
	public void insert(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=newNode;
			System.out.println("Inserted Successfully");
			return;
		}
		Node temp=first;
		while(temp.link!=null){
			temp=temp.link;
		}
		temp.link=newNode;
		System.out.println("Inserted Successfully");
	}
	public int remove(){
		if(first==null){
			return -1;
		}
		Node temp=first;
		first=first.link;
		return temp.data;
	}
	public void display(){
		Node temp=first;
		System.out.print("\nQueue: ");
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
public class QueueLinkedList{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Operations on singly linked list");
		LinkedList q=new LinkedList();
		do{
			System.out.println("Enter a number such that: ");
			System.out.println("1: Insert");
			System.out.println("2: Remove");
			System.out.println("3: Display");
			int num=sc.nextInt();
			if(num==1){
				int a;
				System.out.println("\nInsert");
				do{
					System.out.print("Enter a number to insert or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					q.insert(a);
				}while(a!=-1);
			}
			else if(num==2){
				int a;
				System.out.println("\nRemove");
				do{
					System.out.print("Enter 1 to remove or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					int popped=q.remove();
					if(popped==-1){
						System.out.println("Queue found Empty");
						break;
					}
					System.out.println("Element removed: "+popped);
				}while(a!=-1);
			}
			else if(num==3){
				int a;
				System.out.println("\nDisplay Queue");
				q.display();
			}
			else if(num!=1&&num!=2&&num!=3){
				System.out.println("Invalid Input");
				return;
			}
			System.out.print("\n\nDo you want to continue? (y/n) ");
			String s=sc.next();
			ch=s.charAt(0);
		}while(ch=='y' || ch=='Y');
	}
}