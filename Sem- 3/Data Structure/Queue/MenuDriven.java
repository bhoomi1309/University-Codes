import java.util.Scanner;
class Queue{
	int[] queue;
	int f=-1;
	int r=-1;
	int n;
	public Queue(int n,int[] queue){
		this.queue=queue;
		this.n=n;
	}
	public boolean enqueue(int y){
		if(r>=n-1){
			System.out.println("Queue Overflow");
			return false;
		}
		r++;
		queue[r]=y;
		System.out.println("Enqueued Successfully!");
		if(f==-1){
			f=0;
		}
		return true;
	}
	public int dequeue(){
		if(f==-1){
			System.out.println("Queue Underflow");
			return -1;
		}
		int y=queue[f];
		if(f==r){
			f=-1;
			r=-1;
		}
		else{
			f++;
		}
		return y;
	}
	public void display(){
		System.out.print("Queue: ");
		if(f==-1){
			System.out.print("Empty");
			return;
		}
		for(int i=f;i<=r;i++){
			System.out.print(queue[i]+" ");
		}
	}
}
public class MenuDriven{
	public static void main(String[] args){
		System.out.println("Menu Driven Program of Queue");
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter size of queue: ");
		int n=sc.nextInt();
		char ch;
		int[] queue=new int[n];
		int y;
		Queue q=new Queue(n,queue);
		do{
			System.out.println("Enter any number such that: ");
			System.out.println("1: Enqueue");
			System.out.println("2: Dequeue");
			System.out.println("3: Display");
			int num=sc.nextInt();
			if(num==1){
				do{
					System.out.print("Enter any value to enqueue or -1 to exit: ");
					y=sc.nextInt();
					if(y==-1){
						break;
					}
					if(q.enqueue(y)==false){
						break;
					}
				}while(y!=-1);
			}
			if(num==2){
				int k;
				System.out.println();
				do{
					System.out.print("Enter 1 to dequeue or -1 to exit: ");
					k=sc.nextInt();
					if(k==-1){
						break;
					}
					int dequeue=q.dequeue();
					if(dequeue==-1){
						break;
					}
					System.out.println("Element dequeued: "+dequeue);
				}while(k!=-1);
			}
			if(num==3){
				q.display();
			}
			System.out.print("\n\nDo you want to continue(y/n)? ");
			ch=sc.next().charAt(0);
			if(ch=='n'){
				break;
			}
		}while(ch!='n'||ch!='N');
	}
}