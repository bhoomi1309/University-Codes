import java.util.Scanner;
public class BinarySearch{
	public static int binarySearch(int[] arr,int left,int right,int n){
		if(left<=right){
			int middle=(left+right)/2;
			if(arr[middle]==n){
				return middle;
			}
			else if(arr[middle]>n){
				return binarySearch(arr,left,middle-1,n);
			}
			else{
				return binarySearch(arr,middle+1,right,n);
			}
		}
		return -1;
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Binary Search");
		System.out.print("Enter length of array: ");
		int length=sc.nextInt();
		int[] arr=new int[length];
		System.out.println("Values in Array (Sorted)");
		for(int i=0;i<length;i++){
			System.out.print("arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Array: ");
		for(int i=0;i<length;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.print("\nEnter any number: ");
		int n=sc.nextInt();
		int left=0;
		int right=length-1;
		int i=binarySearch(arr,left,right,n);
		if(i==-1){
			System.out.println("Not Found");
			return;
		}
		System.out.println("Element found at index: "+i);
	}
}