import java.util.Scanner;
import java.util.Arrays;
public class Duplicate{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Duplicate Elements in Array");
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
		Arrays.sort(arr);
		System.out.print("\nDuplicates: ");
		int count=0,k=0;
		for(int i=0;i<arr.length-1;i++){
			if(arr[i]==arr[i+1]){
				count++;
				System.out.print(arr[i]+" ");
			}	
		}
		if(count==0){
			System.out.print("None");
		}
		System.out.println("\nNo. of Duplicates: "+count);
	}
}