public class MemberDemo {
    public static void main(String[] args) {
        System.out.println("Enter Employee details as follows: ");
        Employee e=new Employee();
        System.out.println("\nEnter Manager details as follows: ");
        Manager m=new Manager();
        System.out.println("\nEmployee Details");
        e.printDetails();
        System.out.println("Salary: "+e.printSalary());
        e.printSpecialization();
        System.out.println("\nManager Details");
        m.printDetails();
        System.out.println("Salary: "+m.printSalary());
        m.printDepartment();
    }
}