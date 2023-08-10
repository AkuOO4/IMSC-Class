#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define N 3
int determinant(int mat[N][N], int n){
int num1, num2, det = 1;
int index, total = 1;
int temp[n + 1];
for (int i = 0; i < n; i++){
index = i;
while (index < n && mat[index][i] == 0){
index++;
}
if (index == n){
continue;
}
if (index != i){
for (int j = 0; j < n; j++){
swap(mat[index][j], mat[i][j]);
}
det = det * pow(-1, index - i);
}
for (int j = 0; j < n; j++){
temp[j] = mat[i][j];
}
for (int j = i + 1; j < n; j++){
num1 = temp[i];
num2 = mat[j][i];
for (int k = 0; k < n; k++)
{
mat[j][k] = (num1 * mat[j][k]) - (num2 * temp[k]);
}
total = total * num1;
}
}
for (int i = 0; i < n; i++){
det = det * mat[i][i];
}
return (det / total);

}
int main(){
int mat[N][N];
int solVector[N];
int Solmat[N][N];
int solution[N];
cout<<"\n\tCramer's Rule\t\n"<<endl;

cout << "\nEnter a,b,c values : ";
for (int i = 0 ; i < N ; i++){
cin >> solVector[i];
}
cout << "\nEnter the 3x3 Matrix :\n";
for (int i = 0 ; i < N ; i++){

for (int k = 0 ; k < N ; k++){
cin >> mat[i][k];
}
}
auto start = high_resolution_clock::now();
float ODet = determinant(mat, N);
for (int j = 0 ; j < N ; j++){
for (int i = 0 ; i < N ; i++){
for (int k = 0 ; k < N ; k++){
Solmat[i][k] = mat[i][k];
}
}
for (int i = 0 ; i < N ; i++){
Solmat[i][j] = solVector[i];
}
solution[j] = determinant(Solmat, N) / ODet;
}
auto end = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(end - start);
cout << "\nThe x,y,z values = ";
for (int i = 0 ; i < N ; i++){
cout << solution[i] << ", ";
}
cout << "\nTime Taken : " << duration.count() << "microseconds";
return 0;
}