abstract class Vegetable {
    String color;
    public abstract String getName();
    public Vegetable(String color){
        this.color=color;
    }
    public String toString(){
        return getName()+": Color-> "+color;
    }
}
class Potato extends Vegetable{
    String color="Brown";
    public Potato(){
        super("Brown");
    }
    public String getName(){
        return "Potato";
    }
}
class Brinjal extends Vegetable{
    String color="Purple";
    public Brinjal(){
        super("Purple");
    }
    public String getName(){
        return "Brinjal";
    }
}
class Tomato extends Vegetable{
    String color="Red";
    public Tomato(){
        super("Red");
    }
    public String getName(){
        return "Tomato";
    }
}

public class VegetableDemo{
    public static void main(String[] args) {
        System.out.println("Colors of Vegetables");
        Potato p=new Potato();
        System.out.println(p.toString());
        Brinjal b=new Brinjal();
        System.out.println(b.toString());
        Tomato t=new Tomato();
        System.out.println(t.toString());
    }
}