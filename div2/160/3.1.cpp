#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

  int m;
  cin >> m;
  int disc[m];
  for(int i=0; i<m; i++)
    cin >> disc[i];

  int n;
  cin >> n;
  int arr[n];

  for(int i=0; i<n; i++)
    cin >> arr[i];

  vector<int> cost (arr,arr+n);
  vector<int>::iterator it = cost.begin();
  sort(it,it+n);

  for(int i=0;i<n;i++){
    arr[n-i-1] = *it;
    it++;
  }

  int sum = 0;
  for(int i=0; i<m; i++){
    int bought = 0;
    int x = disc[i];
    int temp=0;
    while(bought < n){
      for(int j=0; j<x && bought < n; j++)









  return 0;
}
