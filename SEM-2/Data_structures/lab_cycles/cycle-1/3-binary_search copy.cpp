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
    int loc=Binary_search(myarray,0,size,ele);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<ele<<endl
            <<"it's location is "<<loc<<endl;
}