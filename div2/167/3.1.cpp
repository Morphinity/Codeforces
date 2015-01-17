#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];

  int m;
  cin >> m;
  long long max_h = arr[0];
  long long w,h;
  for(int i=0; i<m; i++){
    cin >> w >> h;
    w--;
    if(arr[w] > max_h){
      cout << arr[w] << endl;
      max_h = arr[w] + h;
    }
    else{
      cout << max_h << endl;
      max_h += h;
    }
  }
  return 0;
}
