#include<iostream>
using namespace std;

int main(){

  int x,y;
  cin >> x >> y;
  int tx = x;
  int ty = y;
  if(tx < 0)
    tx *= -1;
  if(ty < 0)
    ty *= -1;

  int mx = (tx > ty) ? tx : ty;
  int ans = 0;
  if(mx > 0)
    ans += 4*(mx-1);

  if(x == mx && ((1-mx < y) && y <= mx))
    ans++;
  else if(y == mx && (-1*mx <= x && x < mx))
    ans+=2;
  else if(x == -1*mx && (-1*mx <= y && y < mx))
    ans += 3;
  else if(y == -1*mx && (-1*mx < x && x <= mx))
    ans += 4;
  cout << ans << endl;
  return 0;
}
