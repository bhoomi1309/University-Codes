import java.util.Scanner;
public class CountingSort{
	public static int[] countingSort(int[] arr,int max){
		int[] temp=new int[max+1];
		for(int i=0;i<=max;i++){
			temp[i]=0;
		}
		int n=arr.length;
		for(int j=0;j<n;j++){
			temp[arr[j]]++;
		}
		for(int i=1;i<=max;i++){
			temp[i]+=temp[i-1];
		}
		int[] ans=new int[n];
		for(int j=n-1;j>=0;j--){
			ans[temp[arr[j]]-1]=arr[j];
			temp[arr[j]]--;
		}
		return ans;
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Counting Sort");
		System.out.print("Enter size of array: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter elements of array: ");
		int max=Integer.MIN_VALUE;
		for(int i=0;i<n;i++){
			System.out.print("arr["+i+"]: ");
			arr[i]=sc.nextInt();
			if(max<arr[i]){
				max=arr[i];
			}
		}
		System.out.print("Array: ");
		for(int k=0;k<arr.length;k++){
			System.out.print(arr[k]+" ");
		}
		arr=countingSort(arr,max);
		System.out.print("\nSorted Array: ");
		for(int k=0;k<arr.length;k++){
			System.out.print(arr[k]+" ");
		}
	}
}