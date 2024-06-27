import java.util.Scanner;
class BankAccount{
	int number;
	double balance;
	String holder;
	String name;
	Scanner sc=new Scanner(System.in);
	public BankAccount(){
		System.out.print("Enter name: ");
		this.name=sc.nextLine();
		System.out.print("Enter account holder: ");
		this.holder=sc.nextLine();
		System.out.print("Enter account number: ");
		this.number=sc.nextInt();
		System.out.print("Enter balance: ");
		this.balance=sc.nextDouble();
	}
	public void display(){
		System.out.println("Account No.: "+this.number);
		System.out.println("Balance: "+this.balance);
		System.out.println("Account holder: "+this.holder);
		System.out.println("Name: "+this.name);
	}
	public double getBalance(){
		return this.balance;
	}
	public void deposit(double n){
		this.balance+=n;
	}
	public boolean withdraw(double n){
		if(this.balance-n>=1000){
			this.balance-=n;
			return true;
		}
		return false;
	}
}
public class Account{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Bank Accounts");
		System.out.print("Enter no. of accounts to add: ");
		int n=sc.nextInt();
		BankAccount[] b=new BankAccount[n];
		for(int i=0;i<n;i++){
			System.out.println("Account-"+(i+1));
			b[i]=new BankAccount();
		}
		System.out.print("\nEnter index of account: ");
		int a=sc.nextInt();
		b[a].display();
		System.out.print("\nEnter 0 to view balance, 1 to deposit and 2 to withdraw: ");
		int s=sc.nextInt();
		if(s==0){
			System.out.println("Balance: "+b[a].getBalance());
		}
		else if(s==1){
			System.out.print("Enter amount to deposit: ");
			double d=sc.nextInt();
			b[a].deposit(d);
			System.out.println("New Balance: "+b[a].getBalance());
		}
		else if(s==2){
			System.out.print("Enter amount to withdraw: ");
			double w=sc.nextInt();
			if(b[a].withdraw(w)){
				System.out.println("New Balance: "+b[a].getBalance());
			}else{
				System.out.println("Minimum Balance to be maintained: 1000.00");
				System.out.println("Current Balance: "+b[a].getBalance());
			}
		}
		else{
			System.out.println("Invalid Input");
		}
	}
}