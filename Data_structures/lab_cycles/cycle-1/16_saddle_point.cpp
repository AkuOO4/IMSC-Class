#include<iostream>
using namespace std;

void saddlePoint(){

    int m, n;
    cout<<"Enter the number of row or columns : ";
    cin>> n;

    int M[n][n];

    cout<<"Enter the number of elements :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>M[i][j];
        }
    }

    cout<<"Matrix : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<n; i++){

        int row_min = M[i][0], colno = 0;

        for(int j=1; j<n; j++){

            if(row_min > M[i][j]){
                row_min = M[i][j];
                colno = j;
            }
        }
        
        int c;
        for(c=0; c<n; c++){
            if(row_min < M[c][colno])
                break;
        }
        
        if(c == n){
            cout<<"Value of Saddle Point "<<row_min;
            return;
        }
        
    }
    cout<<"\nNo Saddle point\n";
    
}

int main(){

    saddlePoint();

    return 0;


}