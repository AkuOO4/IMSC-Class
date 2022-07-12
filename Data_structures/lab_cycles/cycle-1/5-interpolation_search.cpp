#include<iostream>
using namespace std;

int Binary_search(int arr[],int start,int stop,int ele)
{
    
    
    do
    {
        int middle=start + (ele - arr[start]) * ((stop - start) / (arr[stop] - arr[start]));
        cout<<middle;   
        if (arr[middle]==ele)
            return middle;
        else if (arr[middle]>ele)
            stop=middle-1;
            //return binary_search(arr,start,middle+1,ele);
        else if (arr[middle]<ele)
           start=middle+1;
        return Binary_search(arr,start,stop,ele);
    } while (start<stop  and ele>=arr[start] and ele<=arr[stop]);
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