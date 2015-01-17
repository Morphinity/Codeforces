#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];

  int ans = 0;
  int h=0;
  for(int i=0; i<n; i++){
    ans += arr[i]-h+1;
    h = arr[i];
    if(i+1 < n){
      if(arr[i+1] < arr[i]){
	ans += arr[i] - arr[i+1];
	h = arr[i+1];
      }
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
