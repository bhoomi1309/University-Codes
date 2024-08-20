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
		// if(r>=n-1){
		// 	r=0;
		// }
		// else{
		// 	r++;
		// }
		// if(f==r){
		// 	System.out.println("Queue Overflow");
		// 	return;
		// }
		// queue[r]=y;
		// System.out.println("Enqueued Successfully!");
		// if(f==-1){
		// 	f=0;
		// }
		// return;
		if((r>=n-1&&f==0) || r+1==f){
			System.out.println("Queue Overflow");
			return false;
		}
		r=(r+1)%n;
		queue[r]=y;
		if(f==-1){
			f=0;
		}
		System.out.println("Enqueued Successfully!");
		return true;
	}
	public int dequeue(){
		// if(f==-1){
		// 	System.out.println("Queue Underflow");
		// 	return -1;
		// }
		// int y=queue[f];
		// if(f==r){
		// 	f=0;
		// 	r=0;
		// }
		// if(f==n){
		// 	f=1;
		// }
		// else{
		// 	f++;
		// }
		// return y;
		if(f==-1){
			System.out.println("Queue Underflow");
			return -1;
		}
		int y=queue[f];
		if(f==r){
			f=-1;
			r=-1;
			return y;
		}
		f=(f+1)%n;
		return y;
	}
	public void display(){
		System.out.print("Queue: ");
		if(f==-1){
			System.out.print("Empty");
			return;
		}
		// for(int i=f;i!=r;i++){
		// 	if(i==n){
		// 		if(r!=0){
		// 			i=0;
		// 		}
		// 		else{
		// 			break;
		// 		}
		// 	}
		// 	System.out.print(queue[i]+" ");
		// }
		// System.out.print(queue[r]+" ");
		for(int i=f;i!=r;i=(i+1)%n){
			System.out.print(queue[i]+" ");
		}
		System.out.print(queue[r]+" ");
	}
}
public class MenuDrivenCQ{
	public static void main(String[] args){
		System.out.println("Menu Driven Program of Circular Queue");
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