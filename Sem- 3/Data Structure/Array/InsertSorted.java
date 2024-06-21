import java.util.Scanner;
public class InsertSorted{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Insert a Number in Sorted Array");
		System.out.print("Enter array length: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++){
			System.out.print("Enter value at arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Original Array: ");
		for(int i=0;i<n;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.print("\nEnter any number to insert: ");
		int x=sc.nextInt();
		int[] new_arr=new int[n+1];
		int index=0;
		while(index<arr.length && x>arr[index]){
			new_arr[index]=arr[index];
			index++;
		}
		new_arr[index]=x;
		index++;
		while(index<new_arr.length){
			new_arr[index]=arr[index-1];
			index++;
		}
		System.out.print("New Array: ");
		for(int i=0;i<n+1;i++){
			System.out.print(new_arr[i]+" ");
		}
	}
}