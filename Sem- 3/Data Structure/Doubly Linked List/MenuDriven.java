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
	public void insertLast(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=last=newNode;
			System.out.println("Inserted Successfully");
			return;
		}
		last.rptr=newNode;
		newNode.lptr=last;
		last=newNode;
		System.out.println("Inserted Successfully");
	}
	public void insertOrder(int data){
		Node temp=first;
		if(temp==null){
			insertFirst(data);
			return;
		}
		Node newNode=new Node(data);
		if(newNode.data<=first.data){
			insertFirst(data);
			return;
		}
		if(newNode.data>=last.data){
			insertLast(data);
			return;
		}
		while(temp.rptr!=null && temp.rptr.data<=data){
			temp=temp.rptr;
		}
		newNode.rptr=temp.rptr;
		(temp.rptr).lptr=newNode;
		temp.rptr=newNode;
		newNode.lptr=temp;
		System.out.println("Inserted Successfully");
	}
	public boolean delete(int data){
		Node temp=first;
		if(temp==null){
			System.out.println("Empty List");
			return false;
		}
		if(first.data==data){
			if(first.rptr==null){
				first=null;
				System.out.println("Deleted Successfully");
				return true;
			}
			(first.rptr).lptr=null;
			first=first.rptr;
			System.out.println("Deleted Successfully");
			return true;
		}
		if(last.data==data){
			(last.lptr).rptr=null;
			last=last.lptr;
			System.out.println("Deleted Successfully");
			return true;
		}
		while(temp.rptr!=null){
			if(temp.data==data){
				(temp.lptr).rptr=temp.rptr;
				(temp.rptr).lptr=temp.lptr;
				System.out.println("Deleted Successfully");
				return true;
			}
			temp=temp.rptr;
		}
		System.out.println("Data Not Found");
		return true;
	}
	public void display(){
		Node temp=first;
		if(temp==null){
			System.out.print("Empty");
			return;
		}
		do{
			System.out.print(temp.data+" ");
			temp=temp.rptr;
		}while(temp!=null);
	}
}
public class MenuDriven{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Operations on Doubly Linked List");
		Doubly n=new Doubly();
		do{
			System.out.println("Enter a number such that: ");
			System.out.println("1: Insert at First Position");
			System.out.println("2: Insert at Last Position");
			System.out.println("3: Insert in Ordered Linked List");
			System.out.println("4: Delete a node");
			System.out.println("5: Display");
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
			if(num==4){
				int a;
				System.out.println("\nDelete a Node");
				do{
					System.out.print("Enter a number to delete or -1 to exit: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					if(n.delete(a)==false){
						break;
					}
				}while(a!=-1);
			}
			if(num==5){
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
