#include<iostream>
using namespace std;

int main(){
  int t,a;
  cin >> t;
  while(t--){
    cin >>a;
    int n = 360 / (180-a);
    float nn = 360.0/(180-a);
    if(nn-n>0)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}XF
