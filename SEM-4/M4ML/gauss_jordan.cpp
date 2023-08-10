#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <chrono>
#define N 3
using namespace std;
using namespace std::chrono;

void gauss_jordan(float mat[N][N + 1]){
float solution , EetaConstant;
int i , j , k;
for (k = 0 ; k < N ; k++){
for (i = 0 ; i < N ; i++){
if(i != k){
EetaConstant = mat[i][k] / mat[k][k];
for ( j = 0 ; j < N + 1 ; j++){
mat[i][j] = mat[i][j] - mat[k][j] * EetaConstant;
}
}
}
}
cout << "\nValues are : ";
for (i = 0 ; i < N ; i++){
solution = mat[i][N] / mat[i][i];
cout << solution << ", ";
}
}
int main()
{
float mat[N][N + 1];
cout<<"\n\tGAUSS JORDAN ELIMINATION\t\n"<<endl;

cout << "\nEnter Solution Matrix(a,b,c) : ";
for(int i = 0 ; i < N ; i++){
cin >> mat[i][N];
}

cout << "\nEnter the Matrix :\n";
for (int i = 0 ; i < N ; i++){
for (int k = 0 ; k < N ; k++){
cin >> mat[i][k];
}
}

auto start = high_resolution_clock::now();
gauss_jordan(mat);
auto end = high_resolution_clock::now();
auto DoneTime = duration_cast<microseconds>(end - start);
cout << "\nTime Taken : " << DoneTime.count() << "microseconds";
return 0;
}
