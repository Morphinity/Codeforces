#include<iostream>
#include<string>
using namespace std;

int l = 1;
string ans ="a";

string change(){
  for(int i=l-1; i>=0 ;i--){
    if(ans[i] == 'z')
      continue;
    else{
      string temp = ans.substr(0,i);
      temp += char(ans[i]+1);
      for(int j=0; j<l-i-1;j++){
	temp += 'a';
      }
      return temp;
    }
  }
  l++;
  string temp;
  for(int i=0; i<l; i++)
    temp += 'a';
  return temp;
}

int main(){

  int n;
  cin >> n;
  string arr[n];
  for(int i=0; i<n;i++)
    cin >> arr[i];

  string str;
  while(1){
    int i;
    bool flag = 0;
    for(i=0; i<n; i++){
      str = arr[i];
      flag = 0;
      for(int j=0; j+l<=str.length(); j++){
	if(str.substr(j,l) == ans){
	  ans = change();
	  flag = 1;
	  break;
	} 
      }
      if(flag == 1)
	break;
    }
    if(i==n)
      break;
  }
  cout << ans << endl;
  return 0;
}
