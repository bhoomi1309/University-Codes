import java.io.File;

public class CmdFile {
    public static void main(String[] args) {
        String filename=args[0];
        try{
            File file = new File(filename);
            if(!file.exists()){
                System.out.println("The file "+filename+" does not exist.");
                return;
            }
            if (file.isFile()) {
                System.out.println("The file " + filename + " exists.");
                long length = file.length();
                System.out.println("No. of lines: "+length);
            }
            else{
                File[] files=file.listFiles();
                int count=files.length;
                System.out.print("The directory " + filename + " contains ");
                System.out.println(count + " files:");
                for(int i=0;i<count;i++){
                    System.out.println(files[i].getName());
                }       
            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
