#include<iostream>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  long arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];
  int r;
  int ans = 0;
  for(int i=0; i<n; i++){
    int ct = 0;
    long x = arr[i];
    while(x>0){
      r = x%10;
      if(r==4 || r==7)
	ct++;
      x /= 10;
    }
    if(k>=ct)
      ans++;
  }
  cout << ans << endl;
  return 0;
}
