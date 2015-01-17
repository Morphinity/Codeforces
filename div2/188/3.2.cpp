#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
  long long x,y,m;

  cin >> x >> y >> m;
  
  if(max(x,y) >= m)
    cout << 0 << endl;
  else{
    if(x <= 0 && y <= 0){
      cout << -1 << endl;
      return 0;
    }
    long long ans = 0;
    if(x > y)
      swap(x,y);
    if(x < 0){
      ans += (-1*x)/y;
      x += ans*y;
    }
    while(max(x,y) < m){
      ans++;
      long long temp = y;
      y += x;
      x = temp;
      if(x > y)
        swap(x,y);
    }
    cout << ans << endl;
  }
  return 0;
}
      
