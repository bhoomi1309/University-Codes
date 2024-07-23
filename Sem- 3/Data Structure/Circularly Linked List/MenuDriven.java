import java.util.Scanner;
class Circular{
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
	public void insertFirst(int data){
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
	public void insertLast(int data){
		Node newNode=new Node(data);
		if(first==null){
			first=last=newNode;
			last.link=first;
			System.out.println("Inserted Successfully");
			return;
		}
		last.link=newNode;
		newNode.link=first;
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
		while(temp.link!=first && temp.link.data<=data){
			temp=temp.link;
		}
		newNode.link=temp.link;
		temp.link=newNode;
		System.out.println("Inserted Successfully");
	}
	public boolean delete(int data){
		Node temp=first;
		if(temp==null){
			System.out.println("Empty List");
			return false;
		}
		if(first.link==last && first.data==data){
			first=last;
			System.out.println("Deleted Successfully");
			return true;
		}
		if(first.link==last && last.data==data){
			last=first;
			System.out.println("Deleted Successfully");
			return true;
		}
		if(first==last){
			first=null;
			last=null;
			System.out.println("Deleted Successfully");
			return true;
		}
		if(first.data==data){
			last.link=first.link;
			first=first.link;
			System.out.println("Deleted Successfully");
			return true;
		}
		while(temp.link!=first){
			if(temp.link.data==data){
				temp.link=(temp.link).link;
				System.out.println("Deleted Successfully");
				return true;
			}
			temp=temp.link;
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
			temp=temp.link;
		}while(temp!=first);
	}
}
public class MenuDriven{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Operations on Circularly Linked List");
		Circular n=new Circular();
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
