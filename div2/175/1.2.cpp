#include<iostream>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;

  if(n >= 2*k){
    int temp = n;
    int curr = 1;
    while(k--){
      cout << temp << " ";
      temp--;
      cout << curr << " ";
      curr++;
    }
    while(curr != temp+1){
      cout << curr << " ";
      curr++;
    }
    cout << endl;
  }
  else{
    int temp = n-k-1;
    int f = n;
    int b = 1;
    while(temp--){
      cout << f << " ";
      cout << b << " ";
      f--;
      b++;
    }
    while(f!=b-1){
      cout << f << " ";
      f--;
    }
    cout << endl;
  }
  return 0;
}
