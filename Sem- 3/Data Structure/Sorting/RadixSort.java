import java.util.Scanner;
public class RadixSort{
	public static int getMax(int[] arr,int n){
		int max=arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		return max;
	}
	public static void radixSort(int[] arr,int n){
		int m=getMax(arr,n);
		for(int exp=1;m/exp>0;exp*=10){
			countingSort(arr,n,1);
		}
	}
	public static void countingSort(int[] arr,int n,int exp){
		int[] ans=new int[n];
		int[] count=new int[10];
		for(int i=0;i<10;i++){
			count[i]=0;
		}
		for(int i=0;i<n;i++){
			count[(arr[i]/exp)%10]++;
		}
		for(int i=1;i<10;i++){
			count[i]+=count[i-1];
		}
		for(int i=n-1;i>=0;i--){
			ans[count[(arr[i]/exp)%10]-1]=arr[i];
			count[(arr[i]/exp)%10]--;
		}
		for(int i=0;i<n;i++){
			arr[i]=ans[i];
		}
	}
	public static void printArray(int[] arr){
        for(int num:arr){
            System.out.print(num+" ");
        }
    }
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Radix Sort");
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
		printArray(arr);
		radixSort(arr,n);
		System.out.print("\nSorted Array: ");
		printArray(arr);
	}
}