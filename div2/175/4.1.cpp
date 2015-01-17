#include<iostream>
using namespace std;

int arr[16][16];
bool a[16] = {0};
bool b[16] = {0};
bool c[16] = {0};

long long func(int n){
  int i,j;
  for(i=0;i<n;i++)
    if(!a[i])
      break;
  for(j=0;j<n;j++)
    if(!b[i])
      break;
  

int main(){
  int n;
  cin >> n;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; i++)
      arr[i][j] = (i+j)%n+1;
  }

  cout << func(n) << endl;
  return 0;
}


