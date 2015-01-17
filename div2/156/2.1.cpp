#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cin >> str;

  bool flag = 1;
  int i = 1;
  while(i<str.length()){
    if(str[i] != str[i-1]){
      str = str.substr(0,i-1) + str.substr(i+1);
    }
    else
      i++;
  }
  cout << str << endl;
  return 0;
}
