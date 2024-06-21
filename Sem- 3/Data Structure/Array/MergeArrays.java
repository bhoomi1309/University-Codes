import java.util.Scanner;
import java.util.Arrays;
public class MergeArrays{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Merge Unsorted Arrays");
		System.out.print("\nEnter array 1 length: ");
		int m=sc.nextInt();
		int[] arr1=new int[m];
		for(int i=0;i<m;i++){
			System.out.print("Enter value at arr1["+i+"]: ");
			arr1[i]=sc.nextInt();
		}
		System.out.print("\nEnter array 2 length: ");
		int n=sc.nextInt();
		int[] arr2=new int[n];
		for(int i=0;i<n;i++){
			System.out.print("Enter value at arr2["+i+"]: ");
			arr2[i]=sc.nextInt();
		}
		System.out.print("\nArray 1: ");
		for(int i=0;i<m;i++){
			System.out.print(arr1[i]+" ");
		}
		System.out.print("\nArray 2: ");
		for(int i=0;i<n;i++){
			System.out.print(arr2[i]+" ");
		}
		int[] final_arr=new int[m+n];
		for(int i=0;i<m+n;i++){
			if(i<m){
				final_arr[i]=arr1[i];
			}else{
				final_arr[i]=arr2[i-m];
			}
		}
		Arrays.sort(final_arr);
		System.out.print("\nMerged Array: ");
		for(int i=0;i<m+n;i++){
			System.out.print(final_arr[i]+" ");
		}
	}
}