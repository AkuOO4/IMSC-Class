import java.util.*;  

public class reverse_of_a_number
{
	public static void main(String[] args)
	{
	    Scanner sc= new Scanner(System.in);
	    System.out.print("Enter first number- ");  
        int a= sc.nextInt();  
        int rev=0;
	    do
	    {
	        rev=rev*10+a%10;
	        a=a/10;
	    }while(a!=0);
	    System.out.print(rev);  
	}
}
