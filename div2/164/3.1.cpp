#include<iostream>
#include<map>
using namespace std;

map<int,bool> x;
map<int,bool> y;

int main(){

  int n,m;
  cin >> n >> m;
  int ct = 0;

  int ans[n][2];
  ans[0][0] = 1;
  ans[0][1] = 0;
  ans[1][0] = 0;
  ans[1][1] = 1;
  ct+=2;
  x[0] = 1;
  x[1] = 1;
  y[0] = 1;
  y[1] = 1;

  int xct = 2;
  int yct = 2;

  while(xct <= n && yct <= m){
    while(x[xct] == 0)
      xct++;
    while(y[yct] == 0)
      yct++;
    if(check(
    x[xct] = 1;
    y[yxt] = 1;
    ans[ct][0] = xct;
    ans[ct++][1] = yct;
