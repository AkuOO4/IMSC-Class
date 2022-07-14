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

int main(){
    int len=10;
    int array[len]={1,9,10,2,3,5,4,8,6,7};

    selection_sort(array,len);
    for (int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }
   // int sorted_array[len]=selection_sort(array,len);
//    int* sorted_array=new int(len);
//    sorted_array=bubble_sort(array,len);
//    for(int i=0;i<len;i++){
//     cout<<sorted_array[i]<<endl;
//    }
}
