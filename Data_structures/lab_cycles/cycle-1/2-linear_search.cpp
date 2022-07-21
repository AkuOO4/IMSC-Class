#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int ele)
{
    for (int i=0;i<size;i++)
    {
        if (ele==arr[i])
            return i;
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
    int loc=linear_search(myarray,size,ele);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<ele<<endl
            <<"it's location is "<<loc<<endl;
}
