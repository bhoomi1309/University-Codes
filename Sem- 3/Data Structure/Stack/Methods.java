import java.util.Scanner;
class StackMethods{
	int size;
	int[] arr;
	int top;
	public StackMethods(int size,int[] arr){
		this.size=size;
		this.arr=arr;
		this.top=size-1;
	}
	public void push(int n){
		if(top>=size-2){
			System.out.println("Stack Overflow");
			return;
		}
		else{
			top=top+1;
			arr[top+1]=n;
		}
	}
	public int pop(){
		if(top<0){
			System.out.println("Stack Underflow");
			return -1;
		}
		else{
			top=top-1;
			return arr[top+1];
		}
	}
	public void display(){
		System.out.print("Stack: ");
		for(int i=0;i<=top;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
	public int peep(int i){
		if((top-i+1)<0){
			System.out.println("No such Element Found");
			return -1;
		}
		else{
			return arr[top-i+1];
		}
	}
	public void change(int i,int n){
		if((top-i+1)<0){
			System.out.println("No such Element Found");
			return;
		}
		else{
			arr[top-i+1]=n;
			System.out.println("Element changed");
		}
	}
}
public class Methods{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		char ch;
		System.out.println("Stack Methods");
		System.out.print("Enter size of array: ");
		int size=sc.nextInt();
		int[] arr=new int[size];
		for(int i=0;i<size;i++){
			System.out.print("Enter value at arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		StackMethods stack=new StackMethods(size,arr);
		do{
			System.out.println("Choose a Method to execute:\n1: Push\n2: Pop\n3: Peep\n4: Change\n5: Display");
			System.out.print("Enter any number(1-5): ");
			int n=sc.nextInt();
			int a;
			if(n==1){
				do{
					System.out.println("Enter -1 to exit PUSH method");
					System.out.print("Enter any number to push: ");
					a=sc.nextInt();
					stack.push(a);
				}while(a!=-1);
				stack.display();
			}
			if(n==2){
				do{
					System.out.print("Enter 1 to POP and -1 to exit pop method: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					int popped=stack.pop();
					if(popped!=-1){
						System.out.println("Element popped: "+popped);
					}
				}while(a!=-1);
				stack.display();
			}
			if(n==3){
				do{
					System.out.println("Enter -1 to exit PEEP method");
					System.out.print("Enter any index to peep: ");
					a=sc.nextInt();
					if(a==-1){
						break;
					}
					int peeped=stack.peep(a);
					if(peeped!=-1){
						System.out.println("Element peeped: "+peeped);
					}
				}while(a!=-1);
				stack.display();
			}
			if(n==4){
				do{
					System.out.println("Enter -1 to exit CHANGE method");
					System.out.print("Enter any index to change: ");
					a=sc.nextInt();
					if(a<=0){
						break;
					}
					System.out.print("Enter any number: ");
					int num=sc.nextInt();
					stack.change(a,num);
				}while(a!=-1);
				stack.display();
			}
			if(n==5){
				stack.display();
			}
			System.out.print("Do you want to continue?(Y/N) ");
			String s=sc.next();
			ch=s.charAt(0);
		}while(ch=='Y' || ch=='y');
	}
}