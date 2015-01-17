#include<iostream>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  
  if(n >= 3*k){
    int temp = n-k;
    int m = 1;
    for(int i=1; i<=temp; i++){
      cout << m << " ";
      m = m%k+1;
    }
    if(m!=1)
      m--;
    else
      m = k;
    for(int i=0; i<k-1; i++){
      cout << m << " ";
      m = m%k+1;
    }
    cout << m << endl;
  }
  else
    cout << -1 << endl;
  return 0;
}
