#include <iostream>
using namespace std;

void extract (char arr[],char new_arr[],int len, int len2)
{

    for(int i=0; i<len; i++){
        int k=0;
        int l=i;
        for(int j=0;j<len2;j++){

            if(new_arr[j]==arr[l]){
                
                k++;
            }
            else
                break;
            l++;
        }

        if (k==len2){
            cout<<"pattern matched at "<<i<<endl;
        }

    }
}
    //cout<<new_arr;
int main()
{
    int len=10,pattern_len=5;
    cout << "Enter size of array: " << endl;
    
    cin >> len;
    char arr[len];

    cout << "Enter " << len << " charaters: " << endl;
    cin >> arr;

    
    cout<<"Enter the length of the the pattrern ";
    cin>>pattern_len;

    char pattern[pattern_len];

    cout<<"Enter the pattern\n";
    cin>>pattern;
    
    //int *new_arr=new int(len+1);    
    extract(arr,pattern,len,pattern_len);

    
}
