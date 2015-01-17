#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];

  int j=n-1;
  for(;j>0; j--){
    if(arr[j] < arr[j-1])
      break;
  }
  cout << j << endl;
  return 0;
}
