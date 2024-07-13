import java.util.Scanner;
class Palindrome{
	int top;
	char[] arr;
	public Palindrome(char[] arr){
		this.arr=arr;
		top=0;
	}
	public void push(char c){
		if(top>=arr.length-1){
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
public class StringPalindrome{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("String Palindrome");
		System.out.print("Enter any string: ");
		String s=sc.next();
		char[] arr=new char[s.length()];
		Palindrome stack=new Palindrome(arr);
		int i=0;
		while(s.charAt(i)!='c'){
			stack.push(s.charAt(i));
			i++;
		}
		while(i<s.length()-1){
			char c=stack.pop();
			if(c!=s.charAt(i+1)){
				System.out.println("No String Palindrome");
				return;
			}
			i++;
		}
		System.out.println("String Palindrome Detected");
	}
}