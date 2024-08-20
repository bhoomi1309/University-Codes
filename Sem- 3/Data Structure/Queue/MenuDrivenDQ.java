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
	public boolean enqueueFront(int y){
		if(f==0){
			System.out.println("Queue Overflow");
			return false;
		}
		if(f==-1){
			f=0;
			r=0;
		}
		else{
			f--;
		}
		queue[f]=y;
		System.out.println("Enqueued at Front Successfully!");
		return true;
	}
	public boolean enqueueRear(int y){
		if(r>=n-1){
			System.out.println("Queue Overflow");
			return false;
		}
		r++;
		queue[r]=y;
		System.out.println("Enqueued at Rear Successfully!");
		if(f==-1){
			f=0;
		}
		return true;
	}
	public int dequeueFront(){
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
	public int dequeueRear(){
		if(r==-1){
			System.out.println("Queue Underflow");
			return -1;
		}
		int y=queue[r];
		if(f==r){
			f=-1;
			r=-1;
		}
		else{
			r--;
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
public class MenuDrivenDQ{
	public static void main(String[] args){
		System.out.println("Menu Driven Program of Double Ended Queue");
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter size of queue: ");
		int n=sc.nextInt();
		char ch;
		int[] queue=new int[n];
		int y;
		Queue q=new Queue(n,queue);
		do{
			System.out.println("\nEnter any number such that: ");
			System.out.println("1: Enqueue at Front");
			System.out.println("2: Enqueue at Rear");
			System.out.println("3: Dequeue at Front");
			System.out.println("4: Dequeue at Rear");
			System.out.println("5: Display");
			int num=sc.nextInt();
			if(num==1){
				System.out.println();
				do{
					System.out.print("Enter any value to enqueue or -1 to exit: ");
					y=sc.nextInt();
					if(y==-1){
						break;
					}
					if(q.enqueueFront(y)==false){
						break;
					}
					
				}while(y!=-1);
			}
			if(num==2){
				System.out.println();
				do{
					System.out.print("Enter any value to enqueue or -1 to exit: ");
					y=sc.nextInt();
					if(y==-1){
						break;
					}
					if(q.enqueueRear(y)==false){
						break;
					}
				}while(y!=-1);
			}
			if(num==3){
				int k;
				System.out.println();
				do{
					System.out.print("Enter 1 to dequeue or -1 to exit: ");
					k=sc.nextInt();
					if(k==-1){
						break;
					}
					int dequeue=q.dequeueFront();
					if(dequeue==-1){
						break;
					}
					System.out.println("Element dequeued from First: "+dequeue);
				}while(k!=-1);
			}
			if(num==4){
				int k;
				System.out.println();
				do{
					System.out.print("Enter 1 to dequeue or -1 to exit: ");
					k=sc.nextInt();
					if(k==-1){
						break;
					}
					int dequeue=q.dequeueRear();
					if(dequeue==-1){
						break;
					}
					System.out.println("Element dequeued: "+dequeue);
				}while(k!=-1);
			}
			if(num==5){
				q.display();
			}
			System.out.print("\n\nDo you want to continue(y/n)? ");
			ch=sc.next().charAt(0);
			if(ch=='n'){
				break;
			}
		}while(ch!='n'||ch!='N');
		// q.enqueueFront(10);
		// q.enqueueFront(20);
		// q.dequeueRear();

		// q.enqueueRear(30);
		// q.enqueueRear(40);
		// q.enqueueRear(50);
		// q.dequeueFront();
		// q.dequeueFront();
		// q.enqueueFront(10);
		// q.enqueueFront(20);
		// q.dequeueRear();
		// q.enqueueRear(30);
		// q.enqueueRear(40);
		// q.display();
	}
}