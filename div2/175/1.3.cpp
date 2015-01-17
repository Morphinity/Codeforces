#include<iostream>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  int i;
  for(i=1; i<n-k; i++)
    cout << i << " ";
  int t = n;
  while(t!=i-1){
    cout << t << " ";
    t--;
  }
  cout << endl;
  return 0;
}
