#include<iostream>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  if(a > b)
    cout << a-1 << " " << b << endl;
  else
    cout << b-1 << " " << a << endl;
  return 0;
}
