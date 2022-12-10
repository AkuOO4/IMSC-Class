//Add the Required header files to perform different c++ functions
#include <iostream>
using namespace std;

//Function to create Magic Square
void MagicSquare(int n)
{
    int magicSquare[n+1][n+1];//Initializing the 2d array(matrix)
    //Assigning 0 to all values in the matrix
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
            magicSquare[r][c]=0;
    }
    //In a magic square the position of 1 is fixed at (p,q) i.e. (n/2,n-1);n is the size of the square matrix
    int i=(n/2);
    int j=n-1;
    int num=n*n;
    int Count=1;
    while(Count<=num) //CONDITION 4
    {
        if(i==-1&&j==n)
        {
            i=0;
            j=n-2;
        }
        else
        {
            if(j==n)
            {
                j=0;
            }
            if(i<0) //row becoming -1
            {
                i=n-1;
            }
        }
        if(magicSquare[i][j]!=0) //CONDITION 3
        {
            i=i+1;
            j=j-2;
            continue; //check above condition again
        }
        else
        {
            magicSquare[i][j]=Count;
            Count=Count+1;
        }
        //p-1,q+1 CONDITION 1
        i=i-1;
        j=j+1;

    }
    //Printing the matrix
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
            cout<<magicSquare[r][c]<<"  ";
        cout<<endl;
    }
    cout<<"\nThe sum of each row/column/diagonal is "<<(n*(n*n+1)/2)<<endl; //printing the magic number
}

int main()
{
    int _size_=0;
    cout<<"Enter the size of the Magic Square: ";
    cin>>_size_;
    MagicSquare(_size_); //calling the MagicSquare function
    return 0;
}
