import java.util.Scanner;

public class arr{
    public static void main(String[] args) {
        int [][]matrix=new int[3][];
        matrix[0]=new int[]{12,7,-10,6};
        matrix[1]=new int[]{-7,18,29};
        matrix[2]=new int[]{4,0,-15,1};
        matrix[1][2]=5;
        for (int i=0;i<matrix.length;i++){
            for{int j=0;j<matrix[i].length;j++}{
                system.out.print(matrix[j][j],"\t");
            }
        }
        System.out.println('\n');

    }
}