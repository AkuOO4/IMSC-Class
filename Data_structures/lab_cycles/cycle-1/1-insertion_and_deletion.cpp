#include <iostream>
using namespace std;

void insertion (int arr[],int new_arr[],int len, int element, int position)
{

    for(int i=0; i<position; i++){
        new_arr[i] = arr[i];
    }

    new_arr[position] = element;

    for(int i=position+1; i<=len; i++){
        new_arr[i] = arr[i-1];
    }

    for(int i=0; i<=len; i++)
        cout<<new_arr[i]<<" ";


    // int i=0,k=0;
    // while (k<=len)
    // {
    //     if (i==position)      
    //     {
    //         new_arr[i]=element;
    //         //k++;
            
            
    //     }
    //     else
    //     {
    //         new_arr[i]=arr[k];
    //         k++;
    //     }
    //     i++;
       
    // }

    //return new_arr;
}

void deletion(int arr[],int new_arr[],int len,int element)
{
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
    //return new_arr;
}

int main()
{

    cout << "Enter size of array: " << endl;
    int len,ele;
    cin >> len;
    int arr[len];

    cout << "Enter " << len << " integers in order: " << endl;
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout<<"1. Insertion\n2. Deletion\n";
    int inp;
    cin>>inp;

    if (inp==1)
    {
        int postion;
        cout<<"Enter the element and position to insert\n";
        cin>>ele>>postion;
        
        //int *new_arr=new int(len+1);    
        int new_arr[len+1];
        insertion(arr,new_arr,len,ele,postion-1);

        // for (int i=0;i<len+1;i++)
        //     cout<<new_arr[i]<<endl;
    }
    else if(inp==2)
    {
        cout<<"Enter the element to delete\n";
        cin>>ele;
        int *new_arr=new int[len-1];
        deletion(arr,new_arr,len,ele);
        
        for (int i=0;i<len-1;i++)
            cout<<new_arr[i]<<endl;
    }


}