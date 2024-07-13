import java.util.Scanner;
class CountAB{
	int top;
	char[] arr;
	public CountAB(char[] arr){
		this.arr=arr;
		top=0;
	}
	public void push(char c){
		if(top>arr.length){
			System.out.println("Stack Overflow");
			return;
		}
		else{
			top+=1;
			arr[top]=c;
		}
	}
	public char pop(){
		if(top<0){
			System.out.println("Stack Underflow");
			return 'x';
		}
		else{
			top-=1;
			return arr[top+1];
		}
	}
}
public class AiBi{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("String Palindrome");
		System.out.print("Enter any string: ");
		String s=sc.next();
		char[] arr=new char[s.length()+1];
		Palindrome stack=new Palindrome(arr);
		int i=0;
		while(i<s.length()){
			stack.push(s.charAt(i));
			i++;
		}
		int j=0,countA=0,countB=0;
		while(j<s.length()){
			char c=stack.pop();
			if(c=='a' || c=='A'){
				countA++;
			}
			else if(c=='b' || c=='B'){
				countB++;
			}
			j++;
		}
		if(countA==countB){
			System.out.println("String is of form AiBi");
			return;
		}
		System.out.println("String is NOT of form AiBi");
	}
}