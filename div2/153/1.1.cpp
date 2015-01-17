#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];

  int ans = 0;
  int tmp;
  for(int i=0; i<n; i++){
    tmp = arr[i];
    ans = max(ans,tmp);
    for(int j=i+1; j<n;j++){
      tmp ^= arr[j];
      ans = max(ans,tmp);
    }
  }
  cout << ans << endl;
  return 0;
}
