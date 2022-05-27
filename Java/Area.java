import java.util.Scanner;

public class Area
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Press\n1. Circle\n2. Square\n3. Rectangle");
        int ch=sc.nextInt();
        if (ch==1)
        {
            System.out.println("Enter the Radius");
            int r=sc.nextInt();
            Circle circle = new Circle();
            // Calling function
            circle.getAR(r);
        }
        else if(ch==2)
        {
            System.out.println("Enter the side length");
            int a=sc.nextInt();
            Square square = new Square();
            // Calling function
            square.getAR(a);;            
        }
        else if (ch==3)
        {
            System.out.println("Enter the length and breadth");
            int l=sc.nextInt();
            int b=sc.nextInt();
            Rectangle rectangle = new Rectangle();
            // Calling function
            rectangle.getAR(l, b);;            
        }
        
    }    
}
class Rectangle
{
    void getAR(int l,int b)
    {
        System.out.println("Area of rectangle is "+l*b);
    }
    void getAR(double l,double b)
    {
        System.out.println("Area of rectangle is "+l*b);
    }
}

class Square
{
    void getAR(int l)
    {
        System.out.println("Area of rectangle is "+l*l);
    }
    void getAR(double l)
    {
        System.out.println("Area of rectangle is "+l*l);
    }
}

class Circle
{
    void getAR(int r)
    {
        System.out.println("Area of rectangle is "+3.14*(r*r));
    }
    void getAR(double r)
    {
        System.out.println("Area of rectangle is "+3.14*(r*r));
    }
}