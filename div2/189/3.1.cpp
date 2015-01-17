#include<iostream>
using namespace std;

const long int MOD = 1000000007;

long long exp(int n){
  if(n==0)
    return 1;
  long long z = exp(n/2);
  z = (z*z)%MOD;
  if(n%2)
    z = (z*2)%MOD;
  return z;
}

long int ans(string str){
  int l = str.length();
  long int numb = 0;
  for(int i = l-1; i>=0; i--){
    if(str[i] == '1'){
      numb += exp(l-i-1);
      numb %= MOD;
    }
  }
  return numb;
}

int main(){
  string str;
  cin >> str;
  
  int n = str.length();
  
  for(int i=0; i<n-1; i++)
    str += '0';
  
  cout << ans(str) << endl;
  return 0;
}
