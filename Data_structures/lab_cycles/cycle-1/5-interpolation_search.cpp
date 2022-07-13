#include<iostream>
using namespace std;

int interpolation(int arr[], int len,int ele)
{
    int start=0;
    int stop=len-1;
    
    do
    {
        int middle=start + ((stop - start) / (arr[stop] - arr[start]))*(ele-arr[start]);
        cout<<middle;   
        if (arr[middle]==ele)
            return middle;
        else if (arr[middle]>ele)
            stop=stop-1;
        else if (arr[middle]<ele)
           start=start+1;
    } while (start<stop  and ele>=arr[start] and ele<=arr[stop]);
    return -1;
}
int main()
{
    int n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,10};
    int element=9;
    
int loc=interpolation(A,n,element);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<element<<endl
            <<"it's location is "<<loc<<endl;
}