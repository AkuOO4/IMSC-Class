#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int ele)
{
    for (int i=0;i<size;i++)
    {
        if (ele==arr[i])
            return i;
    }
    return -1;
}
int main()
{
    int n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,10};
    int element=9;
    
    int loc=linear_search(A,n,element);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<element<<endl
            <<"it's location is , "<<loc<<endl;
}
