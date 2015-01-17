#include<iostream>
#include<string>
using namespace std;

int main(){
  string s,t;
  cin >> s >> t;
  int ans = 0;
  for(unsigned int i=0; i<t.length(); i++){
    if(t[i] == s[ans])
      ans++;
  }
  cout << ans+1 << endl;
  return 0;
}
