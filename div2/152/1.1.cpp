#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  bool l[n];
  bool r[n];
  int sum_l = 0;
  int sum_r = 0;
  for(int i=0; i<n; i++)
    cin >> l[i] >> r[i];

  for(int i=0; i<n; i++){
    if(l[i])
      sum_l += 1;
    if(r[i])
      sum_r += 1;
  }
  sum_l = min(sum_l, n-sum_l);
  sum_r = min(sum_r, n-sum_r);
  cout << sum_l + sum_r << endl;
  return 0;
}
  
  
