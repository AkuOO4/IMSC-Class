#include<iostream>
using namespace std;

void merge_pass(int A[],int startA,int stopA,int B[],int startB,int stopB){
    int As=0,Bs=0;
    int i=0;
    int len;
    if (stopA>stopB)
        len=startA;
    else
        len=startB;
    int temp[len];
    while(As<startA or Bs<startB){
        if (A[As]>B[Bs]){
            temp[i]=B[Bs];
            i++;
            As++;
        }
        else{
            temp[i]=A[As];
            i++;
            Bs++;
        }
    }
     
    while(i<stopA){
        i++;
        temp[i]=A[As];
        As++;
    }


    while(i<stopB){
        i++;
        temp[i]=B[Bs];
        Bs++;
    }
    for (int i=0;i<10;i++){
        A[i]=temp[i];
    }
}
void merge_sort(int data[],int start,int stop){
    if (start<stop){
        int m=stop/2;
        merge_sort(data,start,m);
        merge_sort(data,m+1,stop);
        merge_pass(data,start,m,data,m+1,stop); 
    }


}

int main(){
    int len=10;
    int array[len]={1,9,10,2,3,5,4,8,6,7};

    merge_sort(array,0,len);
    for (int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }
}