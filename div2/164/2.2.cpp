#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = n;
  int temp = 2;
  for(int i=2; i<=n;i++,temp++){
    ans = ans + 1 + temp*(n - temp);
  }
  cout << ans << endl;
  return 0;
}
