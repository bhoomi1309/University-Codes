import java.util.Scanner;
import java.util.Arrays;
public class DeleteDuplicate{
	public static int removeduplicates(int a[], int n){
        if (n==0 || n==1) {
            return n;
        }
        int[] temp = new int[n];
        int j=0;
        for (int i=0;i<n-1;i++){
            if (a[i]!=a[i+1]) {
                temp[j]=a[i];
                j++;
            }
        }
        temp[j++] = a[n-1];
        for (int i=0;i<j;i++){
            a[i]=temp[i];
        }
        return j;
    }
    public static void main(String[] args){
        System.out.println("Delete Duplicates from Array");
        Scanner sc=new Scanner(System.in);
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
		Arrays.sort(arr);
        n=removeduplicates(arr, n);
        System.out.print("\nNew Array: "); 
        for (int i=0;i<n;i++){
        	System.out.print(arr[i] + " ");
        }
    }
}