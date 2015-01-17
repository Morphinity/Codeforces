#include<iostream>
using namespace std;

int main(){
  string str;
  cin >> str;
  int l = str.length();
  int ct = 0;
  bool flip = 0;
  bool flag = 0;
  for(unsigned int i=0; i<rm; i++){
    if(flip == 0){
      while(i < rm && str[i]!='1')
	i++;
      if(i < rm)
	ct++;
      if(i==rm)
	break;
      if(i+1!=rm){
	if(i+1 < l && str[i+1] == '1')
	  flip = 1;
      }
      else{
	ct++;
	flag = 1;
      }
    }
    else{
      while(i<rm && str[i] != '0')
	i++;
      if(i<l)
	ct++;
      if(i+1 != rm){
	if(i+1 < l && str[i+1] == '0')
	  flip = 0;
      }
      else{
	ct++;
	break;
      }
    }
  }
  cout << ct << endl;
  return 0;
}
