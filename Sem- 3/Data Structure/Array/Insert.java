import java.util.Scanner;
public class Insert{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Insert a Number in Array");
		System.out.print("Enter array length: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++){
			System.out.print("Enter value at arr["+i+"]: ");
			arr[i]=sc.nextInt();
		}
		System.out.print("Original Array: ");
		for(int i=0;i<n;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.print("\nEnter any number to insert: ");
		int x=sc.nextInt();
		System.out.print("Enter any position to insert: ");
		int y=sc.nextInt();
		int[] new_arr=new int[n+1];
		for(int i=0;i<new_arr.length;i++){
			if(i<y){
				new_arr[i]=arr[i];
			}else if(i==y){
				new_arr[i]=x;
			}else{
				new_arr[i]=arr[i-1];
			}
		}
		System.out.print("New Array: ");
		for(int i=0;i<n+1;i++){
			System.out.print(new_arr[i]+" ");
		}
	}
}