#include<iostream>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int temp = (m < n) ? m : n;
  int x = 0;
  int y = m;

  cout << temp + 1 << endl;
  for(int i=0;i<=temp;i++){
    cout << x << " " << y << endl;
    x++;
    y--;
  }
  return 0;
}    
