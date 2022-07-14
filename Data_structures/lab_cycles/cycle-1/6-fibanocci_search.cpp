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
    int offset=-1;


    do{
        int i =min(offset+fib2,stop-1);

        
        if (arr[i]>ele){
            fibm=fib1;
            fib2=fib2-fib1;
            fib1=fibm-fib2;
        }

        else if (arr[i]<ele){
            
            fibm=fib2;
            fib2=fib1;
            fib1=fibm-fib2;
            offset=i;
        }

        else if (arr[i]==ele)
            return i;
    } while (fibm>1) ;

    if (fibm==1 and arr[offset+1]==ele){
        return offset+1;
    }
    return -1;
}
int main()
{
    int n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,10};
    int element=4;
    
    int loc=Fib_search(A,0,n,element);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<element<<endl
            <<"it's location is "<<loc<<endl;
}
