import java.util.Scanner;
class Circular{
	class Node{
		int data;
		Node link;
		public Node(){
			this.link=this;
		}
		public Node(int data){
			this.data=data;
			this.link=null;
		}
	}
	public Node head=new Node();
	// head.link=head;
	public Node first=null;
	public Node last=null;
	public void insertFirst(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=last=newNode;
			last.link=head;
			head.link=first;
			System.out.println("Inserted Successfully");
			return;
		}
		head.link=newNode;
		newNode.link=first;
		first=newNode;
		System.out.println("Inserted Successfully");
	}
	public void insertLast(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=last=newNode;
			last.link=head;
			head.link=first;
			System.out.println("Inserted Successfully");
			return;
		}
		last.link=newNode;
		newNode.link=head;
		last=newNode;
		System.out.println("Inserted Successfully");
	}
	public void insertOrder(int data){
		Node newNode=new Node(data);
		if(newNode.data<=first.data){
			insertFirst(data);
			return;
		}
		Node temp=first;
		while(temp.link!=head && temp.link.data<=data){
			temp=temp.link;
		}
		newNode.link=temp.link;
		temp.link=newNode;
		System.out.println("Inserted Successfully");
	}
	public boolean search(int p){
		Node temp=first;
		while(temp.link!=head){
			if(temp.data==p){
				return true;
			}
			temp=temp.link;
		}
		return false;
	}
	public void insertAfterP(int p,int data){
		Node newNode=new Node(data);
		Node temp=first;
		while(temp.link!=head){
			if(temp.data==p){
				newNode.link=temp.link;
				temp.link=newNode;
			}
			temp=temp.link;
		}
	}
	public void delete(int data){
		if(first.data==data){
			head.link=first.link;
			first=first.link;
			System.out.println("Deleted Successfully");
			return;
		}
		Node temp=first;
		while(temp.link!=head){
			if(temp.link.data==data){
				temp.link=(temp.link).link;
				System.out.println("Deleted Successfully");
				return;
			}
			temp=temp.link;
		}
		System.out.println("Data Not Found");
		return;
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
		}while(temp!=head);
	}
}
public class MenuDrivenHead{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Operations on Circularly Linked List with Head Node");
		Circular n=new Circular();
		do{
			System.out.println("Enter a number such that: ");
			System.out.println("1: Insert at First Position");
			System.out.println("2: Insert at Last Position");
			System.out.println("3: Insert in Ordered Linked List");
			System.out.println("4: Insert after Node p: ");
			System.out.println("5: Delete a node");
			System.out.println("6: Display");
			int num=sc.nextInt();
			if(num==1){
				int a;
				System.out.println("\nInsert at First Position");
				do{
					System.out.print("Enter a number to insert or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					n.insertFirst(a);
				}while(a!=-1);
			}
			if(num==2){
				int a;
				System.out.println("\nInsert at Last Position");
				do{
					System.out.print("Enter a number to insert or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					n.insertLast(a);
				}while(a!=-1);
			}
			if(num==3){
				int a,p;
				System.out.println("\nInsert after Node p: ");
				do{
					System.out.print("Enter the data of Node p after which number to be inserted: ");
					p=sc.nextInt();
					if(!search(p)){
						System.out.println("Data Not Found");
						continue;
					}
					System.out.print("Enter a number to insert or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					n.insertAfterP(p,a);
				}while(a!=-1);
			}
			if(num==4){
				int a;
				System.out.println("\nInsert in Ordered Linked List");
				do{
					System.out.print("Enter a number to insert or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					n.insertOrder(a);
				}while(a!=-1);
			}
			if(num==5){
				int a;
				System.out.println("\nDelete a Node");
				do{
					System.out.print("Enter a number to delete or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					n.delete(a);
				}while(a!=-1);
			}
			if(num==6){
				int a;
				System.out.println("\nDisplay Linked List");
				n.display();
			}
			System.out.print("\n\nDo you want to continue? (y/n) ");
			String s=sc.next();
			ch=s.charAt(0);
		}while(ch=='y' || ch=='Y');
	}
}