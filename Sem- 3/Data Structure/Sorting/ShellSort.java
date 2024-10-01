import java.util.Scanner;
public class ShellSort{
	public static int[] shellSort(int[] arr){
		int n=arr.length;
		for(int gap=n/2;gap>=1;gap/=2){
			for(int j=gap;j<n;j++){
				for(int i=j-gap;i>=0;i-=gap){
					if(arr[i+gap]>arr[i]){
						break;
					}
					else{
						int temp=arr[i+gap];
						arr[i+gap]=arr[i];
						arr[i]=temp;
					}
				}
			}
		}
		return arr;
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Shell Sort");
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
		arr=shellSort(arr);
		System.out.print("\nSorted Array: ");
		for(int k=0;k<arr.length;k++){
			System.out.print(arr[k]+" ");
		}
	}
}