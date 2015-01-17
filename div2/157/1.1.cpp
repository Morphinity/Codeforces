#include<iostream>
using namespace std;

int main(){
  string board[8];
  for(int i=0; i<8; i++)
    cin >> board[i];

  bool mainflag = 1;
  for(int i=0; i<8 && mainflag; i++){
    string temp = board[i];
    bool flag = 1;
    for(int j=1; j<8; j++)
      if(temp[j] == temp[j-1]){
	flag = 0;
	break;
      }
    if(flag == 1){
      if(temp[7] == temp[0])
	flag = 0;
    }
    mainflag &= flag;
  }
  if(mainflag == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
	       	
