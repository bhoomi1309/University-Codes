import java.util.Scanner;
public class InsertionSort{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Insertion Sort");
		System.out.print("Enter size of array: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter elements of array: ");
		for(int i=0;i<n;i++){
			System.out.print("arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Array: ");
		for(int k=0;k<arr.length;k++){
			System.out.print(arr[k]+" ");
		}
		int i=1;
		while(i<n){
			int key=arr[i];
			int j=i-1;
			while(j>=0 && arr[j]>key){
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=key;
			i++;
		}
		System.out.print("\nSorted Array: ");
		for(int k=0;k<arr.length;k++){
			System.out.print(arr[k]+" ");
		}
	}
}