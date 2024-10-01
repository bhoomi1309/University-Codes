import java.util.Scanner;
public class MergeSort{
	static int[] arr;
	public static void mergeSort(int low,int high){
		if(low<high){
			int mid=(high+low)/2;
			mergeSort(low,mid);
			mergeSort(mid+1,high);
			merge(low,mid,high);
		}
	}
	public static void merge(int low,int mid,int high){
		int i=0;
		int j=low;
		int h=mid+1;
		int[] ans=new int[high-low+1];
		while(j<=mid && h<=high){
			if(arr[j]<=arr[h]){
				ans[i++]=arr[j++];
			}
			else{
				ans[i++]=arr[h++];
			}
		}
		while(j<=mid){
			ans[i++]=arr[j++];
		}
		while(h<=high){
			ans[i++]=arr[h++];
		}
		int a=0;
		for(int k=low;k<=high;k++){
			arr[k]=ans[a++];
		}
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Merge Sort");
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
		mergeSort(0,arr.length-1);
		System.out.print("\nSorted Array: ");
		for(int k=0;k<arr.length;k++){
			System.out.print(arr[k]+" ");
		}
	}
}