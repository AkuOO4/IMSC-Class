#include<iostream>
using namespace std;

void selection_sort(int data[],int n){

while (n>=0)
{
        for (int i=0;i<n-1; i++){
        if (data[i]>data[i+1]){
            int temp=data[i+1];
            data[i+1]=data[i];
            data[i]=temp;
        }
    }
    n--;
}
    for(int i=0;i<n;i++){
        cout<<data[i]<<endl;
   }
    //return data;
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