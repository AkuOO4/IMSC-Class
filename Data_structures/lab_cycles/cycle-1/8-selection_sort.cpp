#include<iostream>
using namespace std;

void selection_sort(int data[],int n){
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-1; j++){
        if (data[i]<data[j]){
            int temp=data[j];
            data[j]=data[i];
            data[i]=temp;
            }
        }
    }

}

int main()
{
    cout << "Enter size of array: " << endl;
    int size;
    cin >> size;
    int myarray[size];

    cout << "Enter " << size << " integers in any order: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> myarray[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }
    cout << endl;
    selection_sort(myarray, size);

    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}
