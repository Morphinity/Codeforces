#include<iostream>
using namespace std;

int main(){
  long long n,k;
  cin >> n >> k;
  if(n%2){
    if(2*k > n+1)
      cout << 2*k - n - 1 << endl;
    else
      cout << 2*k - 1 << endl;
  }
  else{
    if(2*k > n)
      cout << 2*k - n << endl;
    else
      cout << 2*k - 1 << endl;
  }
  return 0;
}
    
