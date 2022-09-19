#include<iostream>
using namespace std;

void trnps(int B1[][3], int B2[][3])
{

    B2[0][0] = B1[0][1];
    B2[0][1] = B1[0][0];
    B2[0][2] = B1[0][2];

    
    int k = 1;
    int n = B1[0][2];

    
    for(int i=0; i<B1[0][1]; i++){
        for(int j=1; j<=n; j++){
            if(i == B1[j][1]){
                B2[k][0] = B1[j][1];
                B2[k][1] = B1[j][0];
                B2[k][2] = B1[j][2];
                k = k+1;
            }
        }
    }
    
}

void add(int B1[][3], int B2[][3]){
    if(B1[0][0] != B2[0][0] || B1[0][1] != B2[0][1]){
        return;
    }
    int T1 = B1[0][2];
    int T2 = B2[0][2];

    int i, j, k;
    i = j = k = 1;

    int B[14][3];

    B[0][0] = B1[0][0];
    B[0][1] = B1[0][1];

    while(i<=T1 and j<=T2){
        if(B1[i][0] < B2[j][0]){
            B[k][0] = B1[i][0];
            B[k][1] = B1[i][1];
            B[k][2] = B1[i][2];
            k=k+1;
            i=i+1;
        }
        else if(B2[j][0] < B1[i][0]){
            B[k][0] = B2[j][0];
            B[k][1] = B2[j][1];
            B[k][2] = B2[j][2];
            k=k+1;
            j=j+1;
        }
        else if(B2[j][1] < B1[i][1]){
            B[k][0] = B2[j][0];
            B[k][1] = B2[j][1];
            B[k][2] = B2[j][2];
            k = k+1;
            j = j+1;
        }
        else if(B1[i][1] < B2[j][1]){
            B[k][0] = B1[i][0];
            B[k][1] = B1[i][1];
            B[k][2] = B1[i][2];
            k=k+1;
            i=i+1;
        }
        else{
            B[k][0] = B1[i][0];
            B[k][1] = B1[i][1];
            B[k][2] = B1[i][2] + B2[j][2];
            k=k+1;
            i=i+1;
            j=j+1;
        }
    }

    while(i<=T1){
        B[k][0] = B1[i][0];
        B[k][1] = B1[i][1];
        B[k][2] = B1[i][2];
        k=k+1;
        i=i+1;
    }

    while(j<=T2){
        B[k][0] = B2[j][0];
        B[k][1] = B2[j][1];
        B[k][2] = B2[j][2];
        k = k+1;
        j = j+1;
    }

    B[0][2] = k-1;

    cout<<"\nSum : \n\n";

    for(int i=0; i<k; i++){
        for(int j=0; j<3; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}



int main()
{
    int n1, n2;
    cout<<"Enter the number of non zero elements in the first sparse marix : ";
    cin>>n1;
    cout<<"Enter the number of non zero elements in the second sparse marix : ";
    cin>>n2;

    int B1[n1+1][3];
    cout<<"Enter the first sparse matrix \n";
    for(int i=0; i<n1+1; i++){
            for(int j=0; j<3; j++){
                cin>>B1[i][j];
            }
    }
    cout<<"\nMatrix 1 : \n";
    for(int i=0; i<n1+1; i++){
            for(int j=0; j<3; j++){
                cout<<B1[i][j]<<" ";
            }
            cout<<"\n";
    }

    int B2[n2+1][3];
    cout<<"Enter the second sparse matrix \n";
    for(int i=0; i<n2+1; i++){
            for(int j=0; j<3; j++){
                cin>>B2[i][j];
            }
    }
    cout<<"\n\nMatrix 2 : \n";
    for(int i=0; i<n2+1; i++){
            for(int j=0; j<3; j++){
                cout<<B2[i][j]<<" ";
            }
            cout<<"\n";
    }

    int B3[n1+1][3];
    int B4[n2+1][3];
    trnps(B1,B3);
    trnps(B2,B4);


    cout<<"\nTranspose 1: \n";
    for(int i=0; i<7; i++){
        for(int j=0; j<3; j++){
            cout<<B3[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nTranspose 2: \n";
    for(int i=0; i<7; i++){
        for(int j=0; j<3; j++){
            cout<<B4[i][j]<<" ";
        }
        cout<<"\n";
    }

    add(B1,B2);

    return 0;
}