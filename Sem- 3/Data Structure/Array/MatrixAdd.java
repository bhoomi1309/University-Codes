import java.util.Scanner;
public class MatrixAdd{
	public static void main(String[] args){
		System.out.println("Addition of Matrices");
		Scanner sc=new Scanner(System.in);
		int[][] arr1=new int[2][2];
		int[][] arr2=new int[2][2];
		int[][] arr3=new int[2][2];
		System.out.println("\nMatrix 1 elements");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				System.out.print("Enter arr1["+i+"]["+j+"]: ");
				arr1[i][j]=sc.nextInt();
			}
		}
		System.out.println("\nMatrix 2 elements");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				System.out.print("Enter arr2["+i+"]["+j+"]: ");
				arr2[i][j]=sc.nextInt();
			}
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				arr3[i][j]=arr1[i][j]+arr2[i][j];
			}
			System.out.println();
		}
		System.out.println("Matrix 1");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				System.out.print(arr1[i][j]+"\t");
			}
			System.out.println();
		}
		System.out.println("\nMatrix 2");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				System.out.print(arr2[i][j]+"\t");
			}
			System.out.println();
		}
		System.out.println("\nMatrix Multiplication");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				System.out.print(arr3[i][j]+"\t");
			}
			System.out.println();
		}
	}
}