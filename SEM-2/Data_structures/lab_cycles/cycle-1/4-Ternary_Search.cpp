#include<iostream>
using namespace std;

int Ternary_Search(int arr[],int left_index,int right_index,int ele)
{
    if (left_index<=right_index)
    {
        int middle1=left_index+(right_index-left_index)/3;
        int middle2=right_index-(right_index-left_index)/3;
        cout<<"midlle1-"<<middle1<<endl;
        cout<<"midlle2-"<<middle2<<endl;
        if (arr[middle1]==ele)
            return middle1;
        
        else if (arr[middle2]==ele)
            return middle2;

        else if (arr[middle1]>ele)
            return Ternary_Search(arr,left_index,middle1-1,ele);
        
        else if (arr[middle2]<ele)
            return Ternary_Search(arr,middle2+1,right_index,ele);

        else 
            return Ternary_Search(arr,middle1+1,middle2-1,ele);
            
    }
    return -1;
}

int main()
{
    cout << "Enter size of array: " << endl;
    int size,ele;
    cin >> size;
    int myarray[size];

    cout << "Enter " << size << " integers in order: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }
    cout << "Enter Element to be searched" << endl;
    cin>>ele;
    cout << endl;
    int loc=Ternary_Search(myarray,0,size,ele);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<ele<<endl
            <<"it's location is "<<loc<<endl;
}
