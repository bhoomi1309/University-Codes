import java.util.Scanner;
import java.util.Stack;
public class Parenthesis{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Parenthesis: Valid or Not");
		System.out.print("Enter any string-(){}[]: ");
		String s=sc.next();
		Stack<Character> s1=new Stack<>();
		for(int i=0;i<s.length();i++){
			char ch=s.charAt(i);
			if(ch=='('||ch=='{'||ch=='['){
				s1.push(ch);
			}
			else{
				if(s1.empty()){
					System.out.println("Not Valid");
					return;
				}
				char p=s1.peek();
				if((p=='('&&ch==')') || (p=='{'&&ch=='}') || (p=='['&&ch==']')){
					s1.pop();
				}
				else{
					System.out.println("Not Valid");
					return;
				}
			}
		}
		if(!s1.empty()){
			System.out.println("Not Valid");
			return;
		}
		System.out.println("Valid");
	}
}