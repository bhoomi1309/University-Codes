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
	public LinkedList reverse(){
		Node temp=first;
		first=first.link;
		first.link=temp;
		temp.link=null;
		return this;
	}
	public LinkedList swap(int k,int count){
		Node currentX=first;
		Node prevX=null;
		for(int i=0;i<k-1;i++){
			prevX=currentX;
			currentX=currentX.link;
		}
		Node currentY=first;
		Node prevY=null;
		for(int i=0;i<count-k-1;i++){
			prevY=currentY;
			currentY=currentY.link;
		}
		if(currentX==prevY){
			Node temp=currentY.link;
			prevX.link=currentY;
			currentY.link=currentX;
			currentX.link=temp;
		}
		else if(currentY==prevX){
			Node temp=currentX.link;
			prevY.link=currentX;
			currentX.link=currentY;
			currentY.link=temp;
		}
		else if(prevX==null){
			first=currentY;
			currentY.link=currentX.link;
			prevY.link=currentX;
			currentX.link=null;
		}
		else if(prevY==null){
			first=currentX;
			currentX.link=currentY.link;
			prevX.link=currentY;
			currentY.link=null;
		}
		else{
			Node temp=currentX.link;
			Node temp2=currentY.link;
			prevX.link=currentY;
			currentY.link=temp;
			prevY.link=currentX;
			currentX.link=temp2;
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
		System.out.println();
	}
}
public class SwapK{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Swap Kth element from beginning and end");
		LinkedList l1=new LinkedList();
		int n,count=0;
		do{
			System.out.print("Enter a number to insert or -1 to exit: ");
			n=sc.nextInt();
			count++;
			if(n==-1){
				break;
			}
			l1.add(n);
		}while(n!=-1);
		System.out.print("Linked List: ");
		l1.display();
		if(count-1==0){
			return;
		}
		System.out.print("Enter value for k: ");
		int k=sc.nextInt();
		if(count-1==1 && k==1){
			System.out.print("Linked List Swapped Elements: ");
			l1.display();
			return;
		}
		if(count-1==2 && (k==1||k==2)){
			LinkedList l2=l1.reverse();
			System.out.print("Linked List Swapped Elements: ");
			l2.display();
			return;
		}
		if(k>count-1){
			System.out.println("Invalid Input for k");
			return;
		}
		LinkedList l2=l1.swap(k,count);
		System.out.print("Linked List Swapped Elements: ");
		l2.display();	
	}
}