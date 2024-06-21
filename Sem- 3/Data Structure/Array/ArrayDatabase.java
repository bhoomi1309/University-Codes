import java.util.Scanner;
public class ArrayDatabase{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Array Database");
		System.out.print("\nEnter array length: ");
		int m=sc.nextInt();
		int[] arr=new int[m];
		int sum=0;
		for(int i=0;i<m;i++){
			System.out.print("Enter value at arr["+i+"]: ");
			arr[i]=sc.nextInt();
			sum+=arr[i];
		}
		System.out.print("Array: ");
		for(int i=0;i<m;i++){
			System.out.print(arr[i]+" ");
		}
		int min=arr[0];
		int max=arr[0];
		for(int i=0;i<arr.length;i++){
			if(min>arr[i]){
				min=arr[i];
			}
			if(max<arr[i]){
				max=arr[i];
			}
		}
		double avg=(double)sum/m;
		System.out.println("\nSum: "+sum);
		System.out.println("Minimum: "+min);
		System.out.println("Maximum: "+max);
		System.out.println("Average: "+avg);
	}
}