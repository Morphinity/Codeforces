#include<iostream>
using namespace std;

/*
bool check(int* ones){
  for(int i=0; i<n-1; i++)
    if(ones[1] >= ones[0])
      return false;
  return true;
}
*/
int main(){
  int n;
  cin >> n;
  int arr[n][n];

  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
      cin >> arr[i][j];

  // find the positions of 1s
  int ones[n-1][2];
  int ct=0;
  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
      if(arr[i][j] == 1){
	ones[ct][0] = i;
	ones[ct++][1] = j;
      }

  bool flag = 0;
  int col0[n-1];
  int row0[n-1];
  int col0ct=0;
  int row0ct=0;

  // find all 0 rows and columns
  for(int i=0; i<n; i++){
    int j=0;
    for(; j<n; j++)
      if(arr[i][j] == 1)
	break;
    if(j==n)                   // zero row found
      row0[row0ct++] = i;
  }
  for(int j=0; j<n; j++){
    int i=0;
    for(; i<n; i++)
      if(arr[i][j] == 1)
	break;
    if(i == n)
      col0[col0ct++] = j;
  }

  for(int i=0 ;i<n-1;i++)
    cout << ones[i][0] << " " << ones[i][1] << endl;
  for(int i=0; i<col0ct; i++)
    cout << col0[i] << " ";
  cout << endl;
  for(int i=0; i<row0ct; i++)
    cout << row0[i] << " ";
  cout << endl;


  /*


  while(flag==0){
    if(check(ones)){
      flag = 1;
    }
    else{
      


  }
  */

  return 0;
}
