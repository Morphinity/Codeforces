#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  int arr[n];
  for(int i=0; i<n;i++)
    cin >> arr[i];

  sort(arr+0,arr+n);
  int fre[n];
  for(int i=0; i<n; i++)
    fre[i] = 0;
  int i,j;
  while(q--){
    cin >> i >> j;
    i--;
    j--;
    for(int k = i; k <= j; k++)
      fre[k]++;
  }
  sort(fre+0,fre+n);
  
  long long ans = 0;
  for(int i=0; i<n; i++)
    ans += fre[i]*arr[i];
  cout << ans << endl;
  return 0;
}
