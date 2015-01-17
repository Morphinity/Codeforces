#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


vector<bool> prime(1000000);

void init(){
  int ct = 0;
  prime[1] = 1;
  for(int i=2; i<=1000; i++){
    if(!prime[i]){
      ct++;
      for(int j = i*i; j<=1000000; j += i)
	prime[j] = 1;
    }
  }
}

int main(){
  init();

  int n,m;
  cin >> n >> m;

  int arr[500][500];
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      cin >> arr[i][j];

  int min = INT_MAX;
  int temp;
  for(int i=0; i<n; i++){
    temp = 0; 
    for(int j=0; j<m; j++){
      int k = arr[i][j];
      while(prime[k]){
	temp++;
	k++;
      }
    }
    if(min > temp)
      min = temp;
  }
  //cout << min << endl;
  for(int i=0; i<m; i++){
    temp = 0;
    for(int j=0; j<n; j++){
      int k = arr[j][i];
      while(prime[k]){
	temp++;
	k++;
      }
    }
    if(min > temp)
      min = temp;
  }
  cout << min << endl;
  return 0;
}
