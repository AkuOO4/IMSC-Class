import java.util.Scanner;

public class student {

    int[] roll_no = new int[10];
    char[] name =new char[10];
    float[] mark=new float[3];
    float[] total=new float[1];

    student(){
        
        total[0]=0;
    };

   public void input(){

    Scanner sc= new Scanner(System.in);

    System.out.println("\n--Adding Data--\n");

    System.out.println("Enter the Student rollnp \n");
    roll_no[0]=sc.nextInt();

    String temp;
    System.out.println("Enter the Student Name \n");
    temp=sc.next();
    name=temp.toCharArray();

    System.out.println("Enter the Student marks \n");

    calc_grade();

    for(int i=0;i<3;i++){
        mark[i]=sc.nextFloat();
        if (mark[i]<50)
            mark[i]=0;
        total[0]+=mark[i];
    }

   }

   public void Get_Data(){

    System.out.println("\n--Student Details-- \n");

    System.out.println("\nRollno: "+roll_no[0]);

    System.out.println("Name ");
    for(char i: name)
        System.out.print(i);

    System.out.println("\nMarks ");
    for(int i=0;i<3;i++)
        System.out.println(mark[i]);

    System.out.println("Average= "+total[0]/3);    
    System.out.println("Total= "+total[0]);

   }

    public void calc_grade(){
    for(int i=0;i<3;i++){
        if (mark[i]<50)
            mark[i]=0;
        total[0]+=mark[i];
    }
}
   public static void main(String[] arg){

    student Student=new student();

    Student.input();
    Student.Get_Data();
    
   }

}