import java.io.*;
class Student{
    String name;
    int age;
    public Student(String name,int age){
        this.name=name;
        this.age=age;
    }
    public String toString(){
        return  "Student Name : "+this.name+"\nAge : "+this.age;
    }
}
public class StudentFile{
    public static void main(String[] args) {
        String filename="studentinfo.txt";
        try{
            File file=new File(filename);
            FileWriter  fw = new FileWriter(file);
            BufferedWriter  bw = new BufferedWriter(fw);
            bw.write("Arjun");
            bw.write(",");
            bw.write("21");
            bw.close();
            FileReader fr=new FileReader(file);
            BufferedReader br=new BufferedReader(fr);
            String line;
            while((line=br.readLine())!=null){
                String[] files=line.split(",");
                String name=files[0];
                int age=Integer.parseInt(files[1]);
                Student s=new Student(name, age);
                System.out.println(s);
            }
            br.close();
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}