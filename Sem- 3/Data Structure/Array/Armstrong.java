public class Armstrong{
	public static void main(String[] args){
		System.out.println("Armstrong Numbers from 1 to 1000");
		for(int n=1;n<=1000;n++){
			int sum=0;
			int num=n;
			while(num!=0){
				int rem=num%10;
				sum+=(rem*rem*rem);
				num=num/10;
			}
			if(n==sum){
				System.out.print(n+" ");
			}
		}
	}
}