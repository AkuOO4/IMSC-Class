#include<iostream>
using namespace std;

int Binary_search(int arr[],int start,int stop,int ele)
{
    int middle=start+(stop-start)/2;
    do
    {
        if (arr[middle]==ele)
        return middle;
        else if (arr[middle]>ele)
            return Binary_search(arr,start,middle,ele);
        else if (arr[middle]<ele)
            return Binary_search(arr,middle,stop,ele);
    } while (middle!=0);
    return -1;
}
int main()
{
    int n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,10};
    int element=9;
    
    int loc=Binary_search(A,0,n,element);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<element<<endl
            <<"it's location is "<<loc<<endl;
}
