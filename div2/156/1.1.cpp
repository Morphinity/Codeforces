#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  int arr[n];
  int sum[3] = {0};
  for(int i=0;i<n;i++)
    cin >> arr[i];

  for(int j=0; j<n; j++){
    if(j%3==0)
      sum[0]+= arr[j];
    else if(j%3 == 1)
      sum[1]+= arr[j];
    else
      sum[2] += arr[j];
  }

  int mx;
  int max = 0;
  for(int i=0; i<3; i++)
    if(sum[i] > max){
      mx = i;
      max = sum[i];
    }

  if(mx == 0)
    cout << "chest" << endl;
  else if(mx == 1)
    cout << "biceps" << endl;
  else
    cout << "back" << endl;
  return 0;
}
			
