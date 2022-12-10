#include <iostream>
using namespace std;

void extract (char arr[],char new_arr[],int start, int len)
{
    int j=0;

    for(int i=start; i<len; i++){
        cout<<i<<" ";
        new_arr[j] = arr[i];
        j++;
    }
    //cout<<new_arr;

}

int main()
{
    int len;
    int start;
    cout << "Enter size of array: " << endl;
    
    cin >> len;
    char arr[len];

    cout << "Enter "<< endl;
    cin >> arr;

    int extract_len;
    cout<<"Enter the starting position and length to extract\n";
    cin>>start>>extract_len;
    
    //int *new_arr=new int(len+1);    
    char new_arr[len+1];
    extract(arr,new_arr,start,extract_len);
    cout<<endl<<new_arr;
    
}