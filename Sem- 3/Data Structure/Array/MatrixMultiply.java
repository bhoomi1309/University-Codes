import java.util.Scanner;
public class MatrixMultiply{
	public static void main(String[] args){
		System.out.println("Multiplication of Matrices");
		Scanner sc=new Scanner(System.in);
		int[][] arr1=new int[3][2];
		int[][] arr2=new int[2][3];
		int[][] arr3=new int[3][3];
		System.out.println("\nMatrix 1 elements");
		for(int i=0;i<3;i++){
			for(int j=0;j<2;j++){
				System.out.print("Enter arr1["+i+"]["+j+"]: ");
				arr1[i][j]=sc.nextInt();
			}
		}
		System.out.println("\nMatrix 2 elements");
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				System.out.print("Enter arr2["+i+"]["+j+"]: ");
				arr2[i][j]=sc.nextInt();
			}
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				for(int k=0;k<2;k++){
					arr3[i][j]+=(arr1[i][k]*arr2[k][j]);
				}
			}
			System.out.println();
		}
		System.out.println("Matrix 1");
		for(int i=0;i<3;i++){
			for(int j=0;j<2;j++){
				System.out.print(arr1[i][j]+"\t");
			}
			System.out.println();
		}
		System.out.println("\nMatrix 2");
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				System.out.print(arr2[i][j]+"\t");
			}
			System.out.println();
		}
		System.out.println("\nMatrix Multiplication");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				System.out.print(arr3[i][j]+"\t");
			}
			System.out.println();
		}
	}
}