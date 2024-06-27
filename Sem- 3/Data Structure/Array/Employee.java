import java.util.Scanner;
class Employee_Detail{
	int employee_Id;
	String name;
	String designation;
	int salary;
	Scanner sc=new Scanner(System.in);
	public Employee_Detail(){
		System.out.print("Enter name: ");
		this.name=sc.nextLine();
		System.out.print("Enter designation: ");
		this.designation=sc.nextLine();
		System.out.print("Enter employee_Id: ");
		this.employee_Id=sc.nextInt();
		System.out.print("Enter salary: ");
		this.salary=sc.nextInt();
	}
	public void displayDetail(){
		System.out.println("Employee Id: "+this.employee_Id);
		System.out.println("Name: "+this.name);
		System.out.println("Designation: "+this.designation);
		System.out.println("Salary: "+this.salary);
	}
}
public class Employee{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Details of Employees");
		System.out.print("Enter no. of employees: ");
		int n=sc.nextInt();
		Employee_Detail[] e=new Employee_Detail[n];
		for(int i=0;i<n;i++){
			System.out.println("Employee-"+(i+1));
			e[i] =new Employee_Detail();
		}
		System.out.println("\nEmployee Details");
		for(int i=0;i<n;i++){
			System.out.println("Employee-"+(i+1));
			e[i].displayDetail();
		}
	}
}