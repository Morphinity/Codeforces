#include<iostream>
using namespace std;

int main(){
  string str;
  cin >> str;
  int l = str.length();
  int ct = 0;

  // find rm
  int i;
  for(i=l-1; i>=0; i--)
    if(str[i] == '1')
      break;
  int rm = i;
  bool flip = 1;
  for(int i=0; i<=rm; i++){
    if(flip == 1){
      while(i<rm && str[i]!='1')
	i++;
      ct++;
      if(i<rm && str[i+1] == '1')
	flip = 0;
    }
    else{
      while(i<rm && str[i]!='0')
	i++;
      ct++;
      if(i<rm && str[i+1]=='0')
	flip = 1;
    }
  }
  cout << ct << endl;
  return 0;
}
