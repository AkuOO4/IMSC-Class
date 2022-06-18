#include<iostream>
using namespace std;

int Ternary_Search(int arr[],int ele,int left_index,int right_index)
{
    if (left_index<=right_index)
    {
        int middle1=left_index+(right_index-left_index)/3;
        int middle2=right_index-(right_index-left_index)/3;

        if (arr[middle1]==ele)
            return middle1;
        
        else if (arr[middle2]==ele)
            return middle2;

        else if (arr[middle1]>ele)
            return Ternary_Search(arr,ele,0,middle1);
        
        else if (arr[middle2]>ele)
            return Ternary_Search(arr,ele,middle1,middle2);

        else 
            return Ternary_Search(arr,ele,middle2,right_index);
            
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=size(arr);

    int element_to_be_searched=5;
    cout<<"Enter the item to searched";
    cin>>element_to_be_searched;            
    int loc=Ternary_Search(arr,element_to_be_searched,0,len);
    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<element_to_be_searched<<endl
            <<"it's location is "<<loc<<endl;
}