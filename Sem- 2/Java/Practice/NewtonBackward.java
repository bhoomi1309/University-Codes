import java.util.Scanner;
class NewtonBackwardCalculations{
    public static double calculatep(double x,double xn,double h){
        double p=(x-xn)/h;
        return p;
    }
    public static void table(double[][] arr,int a){
        for(int j=2;j<=a;j++){
            for(int i=0;i<(a-j+1);i++){
                arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
            }
        }
        display(arr,a);
    }
    public static void display(double[][] arr,int a){
        System.out.println("\nInterpolation Table: ");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j <= a - i; j++) {
                System.out.print(arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public static int factorial(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
    public static double valueofp(int n,double p){
        double ans=p;
        if(n==0){
            return 1.0;
        }
        else if(n==1){
            return ans;
        }
        else{
            for(int i=1;i<n;i++){
                ans*=(p+i);
            }
            return ans;
        }
    }
    public static double interpolationAns(double[] arr2, int a, double p){
        int n=0;
        double ans=0;
        for(int k=0;k<a;k++){
            ans+=(arr2[k]*Calculations.valueofp(n,p)/Calculations.factorial(n));
            n++;
        }
        return ans;
    }
}
public class NewtonBackward {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Newton's Backward Difference Method\n");
        System.out.print("Enter no. of entries: ");
        int a=sc.nextInt();
        double[][] arr=new double[a][a+1];
        System.out.println("\nEnter given values: ");
        for(int i=0;i<a;i++){
            System.out.print("x["+i+"]: ");
            arr[i][0] = sc.nextDouble();
            System.out.print("y["+i+"]: ");
            arr[i][1] = sc.nextDouble();
        }
        Calculations.table(arr,a);
        int i=0,k=0;
        double[] arr2=new double[a];
        for(int j=1;j<=a;j++){
            for(i=0;i<a;i++){
                if(i+j==a){
                    arr2[k]=arr[i][j];
                    k++;
                }
            }
        }
        System.out.print("\nEnter value of x for interpolation: ");
        double x=sc.nextDouble();
        double h=arr[1][0]-arr[0][0];
        double p=Calculations.calculatep(x,arr[a-1][0],h);
        double ans=Calculations.interpolationAns(arr2,a,p);
        System.out.printf("\nInterpolated value at x: y("+x+")= %.4f",ans);
        sc.close();
    }
}
