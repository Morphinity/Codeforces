#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

  int n;
  long long t;
  cin >> n >> t;

  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];
  int mx = 0;
  int i = 0;
  int j = 0;
  long long temp = 0;
  while(j<n){
    if(arr[j]+temp <= t){
      temp += arr[j];
      j++;
    }
    else{
      mx = max(mx,j-i);
      temp -= arr[i];
      i++;
    }
  }
  mx = max(mx,j-i);
  cout << mx << endl;
  return 0;
}
