import java.util.Scanner;
public class QuickSort{
	static int[] arr;
	public static void quickSort(int[] arr,int lb,int ub){
		if(lb<ub){
			int i=lb;
			int j=ub;
			int key=arr[lb];
			while(i<j){
				while(i<ub && arr[i]<=key){
					i++;
				}
				while(j>lb && arr[j]>key){
					j--;
				}
				if(i<j){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
			arr[lb]=arr[j];
			arr[j]=key;
			quickSort(arr,lb,j-1);
			quickSort(arr,j+1,ub);
		}
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Quick Sort");
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
		quickSort(arr,0,n-1);
		System.out.print("\nSorted Array: ");
		for(int k=0;k<arr.length;k++){
			System.out.print(arr[k]+" ");
		}
	}
}