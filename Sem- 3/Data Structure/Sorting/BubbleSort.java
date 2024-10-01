import java.util.Scanner;
public class BubbleSort{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Bubble Sort");
		System.out.print("Enter size of array: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter elements of array: ");
		for(int i=0;i<n;i++){
			System.out.print("arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Array: ");
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
		int last=arr.length-1;
		for(int i=0;i<arr.length-1;i++){
			int exchanges=0;
			for(int j=0;j<last;j++){
				if(arr[j]>arr[j+1]){
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
					exchanges++;
				}
			}
			if(exchanges==0){
				break;
			}
			else{
				last--;
			}
		}
		System.out.print("\nSorted Array: ");
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
	}
}