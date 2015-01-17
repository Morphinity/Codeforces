#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cin >> str;

  int i;
  for(i=0; i< str.length(); i++)
    if(str[i] == '0')
      break;

  string ans;
  if(i == str.length()){
    ans = str.substr(1);
  }
  else{
    ans = str.substr(0,i) + str.substr(i+1);
  }
  cout << ans << endl;
  return 0;
}
