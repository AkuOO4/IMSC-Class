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
    int loc=interpolation(myarray,size,ele);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<ele<<endl
            <<"it's location is "<<loc<<endl;
}