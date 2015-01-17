#include<iostream>
using namespace std;

int arr[3][3];

int main(){
  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
      cin >> arr[i][j];
  

  bool ans[3][3];
  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
      ans[i][j] = 1;
  
  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++){
      if(arr[i][j]%2 == 1){
	ans[i][j] = !ans[i][j];
	if(j!=2)
	  ans[i][j+1] = !ans[i][j+1];
	if(j!=0)
	  ans[i][j-1] = !ans[i][j-1];
	if(i!=0)
	  ans[i-1][j] = !ans[i-1][j];
	if(i!=2)
	  ans[i+1][j] = !ans[i+1][j];
      }
    }

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
      cout << ans[i][j];
    cout << endl;
  }

  return 0;
}
