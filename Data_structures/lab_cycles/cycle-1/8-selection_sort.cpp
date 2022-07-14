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

int main(){
    int len=10;
    int array[len]={1,9,10,2,3,5,4,8,6,7};

    selection_sort(array,len);
    for (int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }
}
