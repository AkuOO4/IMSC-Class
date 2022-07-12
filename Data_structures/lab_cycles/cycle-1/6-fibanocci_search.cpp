#include<iostream>
using namespace std;

int Fib_search(int arr[],int start,int stop,int ele)
{
    int fib1=0;
    int fib2=1;
    int fibm=fib1+fib2;
    while (fibm<stop){
        fib1=fib2;
        fib2=fibm;
        fibm=fib1+fib2;
    }

    do
    {
        if (arr[fib1]==ele)
            return fib1;
        else if (arr[fib2]>ele)
            return Fib_search(arr,start,fib2,ele);
        else if (arr[fib1]<ele)
            return Fib_search(arr,fib1,stop,ele);
    } while (fib1>0);
    return -1;
}
int main()
{
    int n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,10};
    int element=9;
    
    int loc=Fib_search(A,0,n,element);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<element<<endl
            <<"it's location is "<<loc<<endl;
}
