import java.util.Scanner;
class MyPoint {
    int x;
    int y;

    Scanner sc=new Scanner(System.in);

    public MyPoint(){
        x=0;
        y=0;
    }

    public MyPoint(int x,int y){
        this.x=x;
        this.y=y;
    }

    public void getXY(){
        System.out.print("Enter X-coordinate: ");
        this.x=sc.nextInt();
        System.out.print("Enter Y-coordinate: ");
        this.y=sc.nextInt();
    }

    public double distance(MyPoint p){
        double d=Math.sqrt(((p.x-this.x)*(p.x-this.x))+((p.y-this.y)*(p.y-this.y)));
        return d;
    }
}
