import java.util.Scanner;
public class ChangeChar{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Change Characters in a String: Uppercase to Lowercase and Lowercase to Uppercase");
		System.out.print("Enter a String: ");
		String s=sc.nextLine();
		StringBuffer s1=new StringBuffer(s);
		for(int i=0;i<s.length();i++){
			if(s.charAt(i)>=65 && s.charAt(i)<=90){
				s1.setCharAt(i,Character.toLowerCase(s1.charAt(i)));
			}else if(s.charAt(i)>=97 && s.charAt(i)<=122){
				s1.setCharAt(i,Character.toUpperCase(s1.charAt(i)));
			}
		}
		s=s1.toString();
		System.out.print("New String: "+s);
	}
}