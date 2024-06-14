import java.util.Scanner;
public class Vowel{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Character is Vowel or Not");
		System.out.print("Enter any character: ");
		String s=sc.next().toLowerCase();
		char ch=s.charAt(0);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			System.out.println("Vowel");
		}else{
			System.out.println("Consonant");
		}
	}
}