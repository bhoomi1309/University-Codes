import java.util.Scanner;
public class MinMaxPosition{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Position of Smallest and Largest Number in Array");
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
		int min=arr[0],minPosition=0,max=arr[0],maxPosition=0;
		for(int i=0;i<arr.length;i++){
			if(min>arr[i]){
				min=arr[i];
				minPosition=i;
			}
			if(max<arr[i]){
				max=arr[i];
				maxPosition=i;
			}
		}
		System.out.println("\nSmallest Number Position: "+minPosition);
		System.out.println("Largest Number Position: "+maxPosition);
	}
}