#include<iostream>
using namespace std;

int main(){

  int arr[3][3];
  int sum[3] = {0};
  int a,b,c;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin >> arr[i][j];
      sum[i] += arr[i][j];
    }
  }
  int max_sum = 0;
  for(int i=0; i<3; i++)
    if(sum[i] > max_sum){
      max_sum = sum[i];
    }
  max_sum++;
  a = max_sum - sum[0];
  b = max_sum - sum[1];
  c = max_sum - sum[2];

  int temp = (max_sum - (a+b+c))/2;
  a += temp;
  b += temp;
  c += temp;
  arr[0][0] = a;
  arr[1][1] = b;
  arr[2][2] = c;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  return 0;
}
