#include<iostream>
#include<string>
using namespace std;

bool arr[26] = {0};

int main(){
  string str;
  cin >> str;
  char ch;
  for(int i=0; i<26; i++){
    cin >> ch;
    if(ch == '1')
      arr[i] = 1;
  }
  int k;
  cin >> k;

  int temp[str.length()];
  for(int i=0; i<str.length(); i++){
    if(!arr[str[i]-'a'])
      temp[i] = 1;
    else
      temp[i] = 0;
  }
  int ct=0;
  for(int i=0; i<str.length(); i++){
    while(ct<=k){
    }
  }

  return 0;
}
