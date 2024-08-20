import java.util.Scanner;
public class LinearSearch{
	public static int linearSearch(int[] arr,int n){
		for(int i=0;i<arr.length;i++){
			if(arr[i]==n){
				return i;
			}
		}
		return -1;
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Linear Search");
		System.out.print("Enter length of array: ");
		int length=sc.nextInt();
		int[] arr=new int[length];
		System.out.println("Values in Array");
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
		int i=linearSearch(arr,n);
		if(i==-1){
			System.out.println("Not Found");
			return;
		}
		System.out.println("Element found at index: "+i);
	}
}