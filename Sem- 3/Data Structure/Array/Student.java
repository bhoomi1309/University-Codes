import java.util.Scanner;
class Student_Detail{
	int Enrollment_No;
	String Name;
	int Semester;
	double CPI;
	Scanner sc=new Scanner(System.in);
	public Student_Detail(){
		System.out.print("Enter name: ");
		this.Name=sc.nextLine();
		System.out.print("Enter enrollment no: ");
		this.Enrollment_No=sc.nextInt();
		System.out.print("Enter semester: ");
		this.Semester=sc.nextInt();
		System.out.print("Enter CPI: ");
		this.CPI=sc.nextDouble();
	}
	public void displayDetail(){
		System.out.println("Enrollment No.: "+this.Enrollment_No);
		System.out.println("Name: "+this.Name);
		System.out.println("Semester: "+this.Semester);
		System.out.println("CPI: "+this.CPI);
	}
}
public class Student{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Details of Students");
		System.out.print("Enter no. of students: ");
		int n=sc.nextInt();
		Student_Detail[] e=new Student_Detail[n];
		for(int i=0;i<n;i++){
			System.out.println("Student-"+(i+1));
			e[i] =new Student_Detail();
		}
		System.out.println("\nStudent Details");
		for(int i=0;i<n;i++){
			System.out.println("Student-"+(i+1));
			e[i].displayDetail();
		}
	}
}