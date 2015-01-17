#include<iostream>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  int temp = n;
  int curr = 1;
  if(k != n-1){
    while(k--){
      cout << temp << " ";
      temp--;
      cout << curr << " ";
      curr++;
    }
    while(curr!=temp+1){
      cout << curr << " ";
      curr++;
    }
    cout << endl;
  }
  else{
    for(int i=n; i>=1 ;i--)
      cout << i << " ";
    cout << endl;
  }
  return 0;
}
