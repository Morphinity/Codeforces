#include<iostream>
using namespace std;


float log4(int a){
  int ct = 0;
  int temp = a;
  while(a>0){
    ct++;
    a/=2;
  }
  /*
  if(temp&(temp-1))
    return (ct-1);
  else
  */
  if(!(temp&(temp-1)))
    ct--;
  return ct;
}

bool check(int a){
  if(a&(a-1))
    return false;
  return true;
}

int main(){

  int n;
  cin >> n;

  cout << log4(n)/2 << endl;
  return 0;
}
