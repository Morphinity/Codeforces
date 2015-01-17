#include<iostream>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  if(k > n || (k==1 && n!=1))
    cout << -1 << endl;
  else if(k==1 && n==1)
    cout << 'a' << endl;
  else{
    for(int i=0; i<n-k+2; i++)
      cout << char('a'+i%2);
    for(int i=0; i<k-2; i++)
      cout << char('c'+i);
    cout << endl;
  }
  
  return 0;
}
