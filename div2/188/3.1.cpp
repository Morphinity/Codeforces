#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
  long long x,y,m,ans = 0;
  cin >> x >> y >> m;
  
  if(max(x,y) >= m)
    cout << 0 << endl;
  else{
    if(x <= 0 && y<= 0)
      cout << -1 << endl;
    else{
      if(x > y)
        swap(x,y);
      if(x < 0){
        ans += (-1*x)/y;
        x += ans*y;
      }
      while(max(x,y) < m){
        ans++;
        if(x > y)
          swap(x,y);
        x += y;

        
