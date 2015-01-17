#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  int ans;
  int temp = n+1;
  int a,b,c,d;

  while(1){
    ans = temp;
    a = temp%10;
    temp/=10;
    b = temp%10;
    temp/=10;
    c = temp%10;
    temp/=10;
    d = temp%10;
    if(a == b || a == c || a==d || b==c || b ==d || c == d)
      temp = ans+1;
    else
      break;
  }
  cout << ans << endl;

  return 0;
}
