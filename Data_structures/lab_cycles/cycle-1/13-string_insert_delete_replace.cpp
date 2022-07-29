#include <iostream>
using namespace std;

void insert (char arr[],char new_arr[],char content[],int len, int insert_len,int insert_pos)
{

int new_len=len+insert_len;
    int i=0;
    while(i<insert_pos){
        new_arr[i]=arr[i];
        i++;
    } 

    for(int j=0; j<insert_len; j++){
        new_arr[i]=content[j];
        i++;
    }
    int start=insert_pos+insert_len;
    for(int j=insert_pos; j<new_len; j++){
        new_arr[i]=arr[j];
        i++;
    }
}

void replace (char arr[],char content[],int len, int replace_len,int replace_pos)
{

//int new_len=len+insert_len;
    int j=0;

    for(int i=replace_pos; i<replace_pos+replace_len; i++){
        arr[i]=content[j];

        j++;
    }
}

void delete_it(char arr[],int len,int start,int stop){
    int i=start;
    for (int j=stop;j<len;j++){
        arr[i]=arr[j];
        i++;  
    }
}
// void insert (char arr[],char new_arr[],int len, int new_l)
// {

//     for(int i=0; i<len; i++){
//         int k=0;
//         int l=i;
//         for(int j=0;j<new_len;j++){

//             if(new_arr[j]==arr[l]){
                
//                 k++;
//             }
//             else
//                 break;
//             l++;
//         }

//         if (k==new_len){
//             cout<<"pattern matched at "<<i<<endl;
//         }

//     }
// }
//cout<<new_arr;
int main()
{
    int len=10,pattern_len=5;
    cout << "Enter size of array: " << endl;
    
    // cin >> len;
    char *arr=new char[len];
    // for (int i=0;i<len;i++)
    //     arr[i]=i+1;
    //char *arr[len]="1234567891";
    arr="1234567891";
    cout << "Enter " << len << " integers in order: " << endl;
    // cin >> arr;

    
    cout<<"Enter the length of the the pattrern \n";
    // cin>>pattern_len;

    char pattern[pattern_len]="abcde";

    cout<<"Enter the pattern\n";
    int new_len=pattern_len+len;
    char *new_arr=new char[new_len];
    cout<<"inserting";
    insert(arr,new_arr,pattern,len,pattern_len,5);

    // delete []arr;
    arr=new_arr;
    new_arr= NULL;
    // cout<<"inserted";

    for(int j=0;j<(new_len);j++){
        cout<<"arr ["<<j<<"] = "<<arr[j]<<endl;
    //     cout<<"new_arr ["<<j<<"] = "<<new_arr[j]<<endl;
    //   // arr[j]=new_arr[j];
    //     cout<<"changed "<<j<<" ="<<arr[j]<<endl;
       
    }

    //replace(arr,pattern,len,pattern_len,5);
    // for(int j=0;j<(new_len);j++){
    //     cout<<new_arr[j];
    // }
    // int start=5,stop=8;
    // delete_it(arr,len,start,stop);
    // len-=(stop-start);

    // for(int j=0;j<(new_len);j++){
    //     cout<<arr[j];
    // } 

    
}
