#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  // int arr[n];
  int sum = 0;
  int temp;
  for(int i=0; i<n; i++){
    cin >> temp;
    sum += temp;
  }
  int ans = 0;
  for(int i=1; i<=5; i++){
    if((sum-1+i)%(n+1) != 0 )
      ans++;
  }
  cout << ans << endl;
  return 0;
}
