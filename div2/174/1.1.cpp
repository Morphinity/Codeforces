#include<iostream>
using namespace std;

int  p;

bool check(int x){
  int i;
  long long pw = 1;
  for(i=1; i<p-1; i++){
    pw = pw%p * x;
    if(pw%p == 1)
      return false;
  }
  return true;
}

int main(){
  cin >> p;
  int ans = 0;
  for(int i=1 ; i<p; i++){
    if(check(i))
      ans++;
  }
  cout << ans << endl;
  return 0;
}
