#include<iostream>
#include<string>
using namespace std;

int main(){
  string a,b;
  cin >> a >> b;

  if(a.length() != b.length())
    cout << "NO" << endl;
  else{
    bool ct1 = 0;
    bool flag = 0;
    for(int i=0; i<a.length(); i++){
      if(a[i] == b[i]){
	if(a[i] == '1')
	  ct1 = 1;
      }
      else if(a[i] == '0'){
	if(ct1 == 1)
	  continue;
	else{
	  int j;
	  for(j = i+1; j<a.length(); j++){
	    if(a[j] == '1'){
	      ct1 = 1;
	      break;
	    }
	  }
	  if(j==a.length()){
	    flag = 1;
	    break;
	  }
	}
      }
      else{
	if(ct1 == 1){
	  continue;
	}
	else{
	  string temp;
	  if(i+1 < a.length()){
	    temp = a.substr(0,i+1)+'1';
	    if(i+2<a.length())
	      temp += a.substr(i+2);
	    a = temp;
	  }
	  else{
	    flag = 1;
	    break;
	  }
	}
      }
    }
    if(flag == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
