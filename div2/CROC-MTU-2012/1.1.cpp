#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  int ans[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
    ans[i] = 0;
  }

  int ct = 0;
  int tmp = 0;
  for(int i=0 ;i<n; i++){
    if(arr[i] < 0)
      tmp++;
    if(tmp == 3){
      ct++;
      tmp = 0;
      i--;
      continue;
    }
    ans[ct]++;
  }
  cout << ct+1 << endl;
  for(int i=0; i<=ct; i++)
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}
