#include<iostream>
using namespace std;

int main(){

  int n;
  char ch;
  int i_ct = 0;
  int a_ct = 0;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> ch;
    if(ch=='A')
      a_ct++;
    else if(ch=='I')
      i_ct++;
  }

  if(i_ct == 0)
    cout << a_ct << endl;
  else if(i_ct == 1)
    cout << 1 << endl;
  else
    cout << 0 << endl;
  return 0;
}
