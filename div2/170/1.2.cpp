#include<iostream>
using namespace std;

int main(){

  int n,i,j;
  cin >> n;
  int dist[n+1];
  for(int i=1; i<n+1;i++)
    cin >> dist[i];

  cin >> i >> j;
  if(i > j){
    int t = i;
    i = j;
    j = t;
  }
  int min = 0;
  for(int k = i; k<j; k++)
    min += dist[k];
  int temp = 0;
  for(int k = j; k<n+1; k++)
    temp += dist[k];
  for(int k=1; k<i; k++)
    temp += dist[k];
  if(min > temp)
    min = temp;
  cout << min << endl;
  return 0;
}
