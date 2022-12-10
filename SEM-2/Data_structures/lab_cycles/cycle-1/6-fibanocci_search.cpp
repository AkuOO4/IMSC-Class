#include<iostream>
using namespace std;

int Fib_search(int arr[],int start,int stop,int ele)
{
    int fib1=0;
    int fib2=1;
    int fibm=fib1+fib2;

    while (fibm<stop){
        fib1=fib2;
        fib2=fibm;
        fibm=fib1+fib2;

    }
    int offset=-1;


    do{
        int i =min(offset+fib2,stop-1);

        
        if (arr[i]>ele){
            fibm=fib1;
            fib2=fib2-fib1;
            fib1=fibm-fib2;
        }

        else if (arr[i]<ele){
            
            fibm=fib2;
            fib2=fib1;
            fib1=fibm-fib2;
            offset=i;
        }

        else if (arr[i]==ele)
            return i;
    } while (fibm>1) ;

    if (fibm==1 and arr[offset+1]==ele){
        return offset+1;
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
    int loc=Fib_search(myarray,0,size,ele);

    if (loc==-1)
        cout<<"element not found ";
    else
        cout<<"element searched = "<<ele<<endl
            <<"it's location is "<<loc<<endl;
}
