import java.util.Scanner;
public class SortNames{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Sort Names in Alphabetical Order");
		System.out.print("Enter no. of elements in array: ");
		int n=sc.nextInt();
		String[] arr=new String[n];
		for(int i=0;i<arr.length;i++){
			System.out.print("Enter name at arr["+i+"]: ");
			arr[i]=sc.next();
		}
		System.out.print("Array: ");
		for(int j=0;j<arr.length;j++){
			System.out.print(arr[j]+" ");
		}
		for(int i=0;i<arr.length;i++){
			for(int j=i+1;j<arr.length;j++){
				if(arr[i].compareTo(arr[j])>0){
					String temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		System.out.print("\nSorted Array: ");
		for(int j=0;j<arr.length;j++){
			System.out.print(arr[j]+" ");
		}
	}
}