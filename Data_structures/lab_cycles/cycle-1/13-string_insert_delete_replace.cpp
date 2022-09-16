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
    if((replace_len+replace_pos<len)){ 
        int j=0;
        for(int i=replace_pos; i<replace_pos+replace_len; i++){
            arr[i]=content[j];

            j++;
        }
    }
    else{
        cout<<"Cannot replace Enter a pattern of lower len";
    }
}

void delete_it(char arr[],int len,int start,int stop){
    int i=start;
    for (int j=stop;j<len;j++){
        arr[i]=arr[j];
        i++;  
    }
}

int main()
{
    int len;
    cout << "Enter size of array: " << endl;
    cin >> len;
    char *arr=new char[len];

    cout << "Enter " << len << " integers in order: " << endl;
    cin>>arr;

    while(true){
        cout<<"\nDo you want to"
            <<"\n 1. Insert\n2. Delete\n3 Replace\nPress any other key to exit";
        int ans;
        cin>>ans;

        //Insertion
        if (ans==1){
            int *insert_len=new int;
            cout<<"Enter the length of the the pattrern \n";
            cin>>*insert_len;
            char *insert_arr=new char[*insert_len];
            
            int *pos=new int;
            cout<<"Enter the Position to insert\n";
            cin>>*pos;

            cout<<"Enter the pattern\n";
            cin>>insert_arr;

            int new_len=*insert_len+len;
            char *temp_arr=new char[new_len];

            
            insert(arr,temp_arr,insert_arr,len,*insert_len,*pos);
            arr=temp_arr;

            delete insert_len,temp_arr,pos;
            //temp_arr= NULL;
            
        }
            //Deltetion
        else if(ans==2){
            int *start=new int;
            int *stop=new int;
            cout<<"\nEnter the starting and stoping position to delete\n";
            cin>>*start>>*stop;
            delete_it(arr,len,*start,*stop);
            len-=(*stop-*start);
            delete start,stop;
            
        }    

        //Replacement
        else if(ans==3){
            int *pattern_len=new int;
            cout<<"\nEnter the length of the pattern\n";
            cin>>*pattern_len;
            char *pattern=new char[*pattern_len];
            cout<<"Enter the pattern\n";
            cin>>pattern;
            int *pos=new int;
            cout<<"Enter the Position to insert\n";
            cin>>*pos;
            replace(arr,pattern,len,*pattern_len,*pos);
            
        }
        
        //Exiting
        else{
            cout<<"\nWrong input\nExiting.....";
            return false;
        }

        for(int j=0;j<(len);j++){
            cout<<"arr ["<<j<<"] = "<<arr[j]<<endl;        
        }
        }
}
