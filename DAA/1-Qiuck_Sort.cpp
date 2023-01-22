#include <iostream>
#include<ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

int partition(int *data,int begin,int end);

void quickSort(int *data,int begin,int end){
    int loc;
    if(begin<end){
        loc = partition(data,begin,end);
        quickSort(data,begin,loc-1);
        quickSort(data,loc+1,end);
    }
}

int partition(int *data,int begin,int end){
    int pivot = data[begin];
    int lowerBound = begin;
    int upperBound = end;
    int temp;
    while(lowerBound<upperBound){
        while(data[lowerBound]<=pivot){
            lowerBound++;
        }
        while(data[upperBound]>pivot){
            upperBound--;
        }
        if(lowerBound<upperBound){
            temp = data[lowerBound];
            data[lowerBound]=data[upperBound];
            data[upperBound]=temp;
        }
    }
    temp = data[begin];
    data[begin] = data[upperBound];
    data[upperBound] = temp;
    return upperBound;
}

void printArray(int* data,int length){
	for (int var = 0; var < length; ++var) {
		cout<<data[var]<<" ";
	}
}

int main(){
    
    int length;
    cout<<"Enter the length of the Array ";
    cin>>length;
    
	int array[length];
	
	srand((unsigned) time(0));
    
    for (int i=0;i<length;i++)
        array[i]=rand()%500;
        
    //cout<<"Array is \n";    
    //printArray(array,length);  
    cout<<endl;
    auto start = high_resolution_clock::now();
    quickSort(array,0,length-1);
    //cout<<"\nSorted Array is\n";
   // printArray(array,length);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\nTime taken For calculating is "<<duration.count()<<" milliseconds" << endl;

    auto start = high_resolution_clock::now();
    quickSort(array,0,length-1);
    //cout<<"\nSorted Array is\n";
   // printArray(array,length);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n\nTime taken For calculating is "<<duration.count()<<" milliseconds" << endl;
    
}