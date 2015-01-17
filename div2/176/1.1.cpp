#include<iostream>
using namespace std;

int main(){
  char arr[4][4];
  for(int i=0; i<4; i++)
    for(int j=0; j<4; j++)
      cin >> arr[i][j];

  bool flag = 0;

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      int sum1 = 0;
      int sum2 = 0;
      if(arr[i][j] == '#')
	sum1++;
      else
	sum2++;
      if(arr[i+1][j] == '#')
	sum1++;
      else
	sum2++;
      if(arr[i][j+1] == '#')
	sum1++;
      else
	sum2++;
      if(arr[i+1][j+1] == '#')
	sum1++;
      else
	sum2++;
      if(sum1 >= 3 || sum2 >= 3){
	flag = 1;
	break;
      }
    }
    if(flag)
      break;
  }
  if(flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
      
