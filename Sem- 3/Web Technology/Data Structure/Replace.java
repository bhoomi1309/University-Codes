import java.util.Scanner;
public class Replace{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Replace a Number in Array");
		System.out.print("Enter no. of elements in array: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<arr.length;i++){
			System.out.print("Enter value at arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Array: ");
		for(int j=0;j<arr.length;j++){
			System.out.print(arr[j]+" ");
		}
		System.out.print("\nEnter value to be replaced: ");
		int a=sc.nextInt();
		System.out.print("Enter new value: ");
		int b=sc.nextInt();
		for(int i=0;i<arr.length;i++){
			if(arr[i]==a){
				arr[i]=b;
			}
		}
		System.out.print("New Array: ");
		for(int j=0;j<arr.length;j++){
			System.out.print(arr[j]+" ");
		}
	}
}