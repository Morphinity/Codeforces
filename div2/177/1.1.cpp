#include<iostream>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  int l,r,ans=0;  
  for(int i=0; i<n; i++){
    cin >> l >> r;
    ans += r-l+1;
  }
  cout << (k - ans%k)%k << endl;
  return 0;
}
