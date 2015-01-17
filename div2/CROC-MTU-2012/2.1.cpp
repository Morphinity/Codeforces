#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> blocks;

string normalize(string str){
  if(str.length() == 4)
    return str;
  int tmp = 4 - str.length();
  string temp = "";
  while(tmp--){
    temp += '0';
  }
  temp += str;
  return temp;
}

int find_blocks(string sh){
  for(int i=0; i<sh.length(); ){
    while(i < sh.length() && sh[i] == ':')
      i++;
    int j = i;
    if(i == sh.length())
      break;
    while(j < sh.length() && sh[j] != ':')
      j++;
    string temp = sh.substr(i,j-i);
    blocks.push_back(normalize(temp));
    i = j;
  }
  return blocks.size();
}

int main(){
  int n;
  cin >> n;
  string sh;
  while(n--){
    cin >> sh;
    int tmp = find_blocks(sh);
    if(tmp < 8){
      int x = 8-tmp;
      int y = 0;
      for(int i=0; i<sh.length();){
	if(sh[i] == ':')
	  break;
	while(sh[i] != ':')
	  i++;
	y++;
	i++;
      }
      for(int i=0; i<y; i++)
	cout << blocks[i] << ":";
      for(int i=1; i<=x; i++){
	cout << "0000";
	if(i+y == 8)
	  break;
	cout << ":";
      }
      for(int i=y; i<blocks.size(); i++){
	cout << blocks[i];
	if(i!=blocks.size()-1)
	  cout << ":";
      }
      cout << endl;
    }
    else{
      for(int i=0; i<blocks.size(); i++){
	cout << blocks[i];
	if(i != blocks.size()-1)
	  cout << ":";
      }
      cout << endl;
    }
    vector<string> empt;
    blocks = empt;
  }
  return 0;
}
