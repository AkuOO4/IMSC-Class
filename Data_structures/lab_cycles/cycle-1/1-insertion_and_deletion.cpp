#include <iostream>
using namespace std;

int* insertion (int arr[],int len, int element, int position)
{
    static  int *new_arr=new int(len+1);
    int i=0,k=0;
    while (i<=len+1)
    {
        if (i!=position)      
        {
            new_arr[i]=arr[k];
        }
        else
        {
            new_arr[i]=element;
            //k++;
        }
        i++;
        k++;
    }

    return new_arr;
}

int* deletion(int arr[],int len,int element)
{
    static int *new_arr=new int(len-1);
    int i=0,k=0;
    while (k<len)
    {
        if (arr[k]!=element)      
        {
            new_arr[i]=arr[k];
            i++;
        }
        
        k++;
        
    }
    return new_arr;
}

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int ele;
    int len=size(arr);

    cout<<"1. Insertion\n2. Deletion\n";
    int inp;
    cin>>inp;

    if (inp==1)
    {
        int postion;
        cout<<"Enter the element and position to insert\n";
        cin>>ele>>postion;
        int *new_arr=new int(len+1);    
        new_arr=insertion(arr,len,ele,postion);

        for (int i=0;i<len;i++)
            cout<<new_arr[i]<<endl;
    }
    else if(inp==2)
    {
        cout<<"Enter the element to delete\n";
        cin>>ele;
        int *new_arr=new int(len-1);
        new_arr=deletion(arr,len,ele);
        
        for (int i=0;i<len-1;i++)
            cout<<new_arr[i]<<endl;
    }


}