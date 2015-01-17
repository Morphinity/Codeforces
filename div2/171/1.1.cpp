#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  int x,y;
  cin >> x >> y;
  int tx, ty;
  tx = x;
  if(x < 0)
    tx *= -1;
  ty = y;
  if(y <0)
    ty *= -1;
 
  int ans = 0;

  int mx = max(tx,ty);
  if(mx >0)
    ans = 4*(mx-1);
  
  if(x > 0 && y<=0){
    if(ty+1 < tx)
      ans++;
  }
  else if(x >= 0 && y>=0){
    if(y>x)
      ans+=2;
    else 
      ans++;
  }
  else if(x<=0 && y>=0){
    if(tx > ty){
      ans+=3;
    }
    else
      ans += 2;      
  }
  else{
    if(ty > tx)
      ans += 4;
    else
      ans += 3;
  }
  cout << ans << endl;
}
