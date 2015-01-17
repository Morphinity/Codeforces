#include<algorithm>
#include<iostream>
using namespace std;

long long arr[300010];

int main(){
  int n;
  cin >> n;
  for(int i=1; i<=n; i++)
    cin >> arr[i];

  sort(arr+1,arr+n+1);
  long long ans = 0;
  for(int i=1; i<=n; i++)
    ans += abs(i - arr[i]);
  cout << ans << endl;
  return 0;
}
