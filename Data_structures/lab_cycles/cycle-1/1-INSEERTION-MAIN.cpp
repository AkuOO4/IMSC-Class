# include <iostream>
using namespace std;

void INSERTION (int* DATA,int* N,int K,int ITEM)  
{
    for(int i=*N;i>=K;i--)  
    {
        DATA[i+1]=DATA[i];
    }
    DATA[K]=ITEM;
    *N=*N+1;
}

void DELETION (int* DATA,int* N,int ITEM)
{
    for(int j=0;j<*N;j++)
    {
        if(DATA[j]==ITEM)
        {
            for(int k=j;k<*N-1;k++)
            {
                DATA[k]=DATA[k+1];
            }
        }
    }
    *N=*N-1;

}

int main()
{
    int item;
    int n,k,option,select,choice=1;
    
    cout<<"\tINSERTION AND DELETION ON LINEAR ARRAY"<<endl;

    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    cout<<endl; 

    int* data1=new int[n+1];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>data1[i];
    }
    do{
    cout<<"   "<<endl;

    cout<<" 1 : Insert an element"<<endl;
    cout<<" 2 : Delete an element"<<endl;
    cout<<" 3 : Exit"<<endl;
    cin>>select;
    cout<<"   "<<endl;
    if(select==1){
        cout<<"Enter the element to be inserted "<<endl;
        cout<<">>>";
        cin>>item;
        cout<<"   "<<endl;

        cout<<"Enter the position where to be inserted "<<endl;
        cout<<">>>";
        cin>>k;
        cout<<"   "<<endl;

        INSERTION(data1,&n,k-1,item);
        cout<<"   Array after insertion : "<<endl;
        cout<<"      ";
        for(int i=0;i<n-1;i++)
        {
            cout<<data1[i]<<", ";
        }
        cout<<data1[n-1]<<endl;
    }
   
    else if(select==2){        
        cout<<"   Enter the element to be deleted "<<endl;
        cout<<"   >>>";
        cin>>item;
        cout<<"   "<<endl;

        DELETION(data1,&n,item);
        cout<<"   Array after deletion : "<<endl;
        cout<<"      ";
        for(int i=0;i<n-1;i++)
        {
            cout<<data1[i]<<", ";
        }
        cout<<data1[n-1]<<endl;

        cout<<"   "<<endl;
    }
   }while(select<3);
   return 0;
}