#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define N 3
int CheckSingular(double mat[N][N + 1]);
void BackSubstitute(double mat[N][N + 1]);
void GuassianElimination(double mat[N][N + 1])
{
int SingularFlag = CheckSingular(mat);
if (SingularFlag != -1)
{
cout << "Singular Matrix\n";
if (mat[SingularFlag][N])
cout << "Inconsistent System";
else
cout << "Infinately Many Solutions";
return;
}
BackSubstitute(mat);
}
void SwapRows(double mat[N][N + 1], int i, int j)
{
for (int k = 0 ; k <= N ; k++)
{
double temp = mat[i][k];
mat[i][k] = mat[j][k];
mat[j][k] = temp;
}
}
void printmat(double mat[N][N + 1])
{
for (int i = 0 ; i < N ; i++ ){
for (int j = 0 ; j < N ; j++)
cout << mat[i][j] << "\t";
cout << "\n";
}
cout << "\n";
}

int CheckSingular(double mat[N][N + 1])
{
for (int k = 0; k < N; k++)
{
int IMax = k;
int VMax = mat[IMax][k];
for (int i = k + 1; i < N ; i++)
if (abs(mat[i][k]) > VMax)
VMax = mat[i][k], IMax = i;
if (!mat[k][IMax])
return k;
if (IMax != k)
SwapRows(mat, k, IMax);
for (int i = k + 1 ; i < N ; i++)
{
double f = mat[i][k] / mat[k][k];
for (int j = k + 1 ; j <= N ; j++)
mat[i][j] -= mat[k][j] * f;
mat[i][k] = 0;
}
}
return -1;
}
void BackSubstitute(double mat[N][N + 1])
{
double x[N];
for (int i = N-1 ; i >= 0 ; i--)
{
x[i] = mat[i][N];
for (int j = i + 1 ; j < N; j++)
{
x[i] -= mat[i][j] * x[j];
}
x[i] = x[i] / mat[i][i];
}
cout << "\nThe values are : ";
for (int i=0; i<N; i++)
cout << x[i]<<", ";
}
int main()
{
double mat[N][N + 1];
cout<<"\n\tGAUSS ELIMINATION\t\n"<<endl;

cout << "\nEnter the 3x1 solution matrix : ";
for (int i = 0; i < N ; i++){
cin >> mat[i][N];
}
cout << "\nEnter the matrix :\n";
for (int i = 0 ; i < N ; i++){
for (int k = 0 ; k < N ; k++){
cin >> mat[i][k];
}
}

auto start = high_resolution_clock::now();
GuassianElimination(mat);
auto end = high_resolution_clock::now();
auto DoneTime =duration_cast<microseconds>(end - start);
cout << "\nTime taken : " << DoneTime.count() << " microseconds";
return 0;
}