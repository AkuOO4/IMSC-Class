#include<iostream>
using namespace std;

void selection_sort(int data[],int &n){
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

int main(){
    int len=10;
    int array[len]={1,9,10,2,3,5,4,8,6,7};

    selection_sort(array,len);
    for (int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }
}
