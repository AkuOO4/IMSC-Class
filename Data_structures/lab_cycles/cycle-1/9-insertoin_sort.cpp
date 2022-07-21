#include<iostream>
using namespace std;

void insertion_sort(int data[],int &n){
    for(int k=2;k<n;k++)
    {
        int temp=data[k];
        int ptr=k-1;

        while(temp<data[ptr]){
            data[ptr+1]=data[ptr];
            ptr--;
        }
        data[ptr+1]=temp;
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
    insertion_sort(myarray, size);

    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}
