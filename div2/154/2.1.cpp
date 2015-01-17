#include<iostream>
#include<limits.h>
#include<algorithm>
#include<fstream>
using namespace std;

int arr[5001] = {0};

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
  int n;
  in >> n;
  int temp;
  for(int i=0; i<n; i++){
    in >> temp;
    arr[temp]++;
  }

  int min = INT_MAX;
  int max = 0;
  for(int i=1; i<=5000; i++){
    if(arr[i] != 0){
      min = i;
      break;
    }
  }
  for(int j = 5000; j>=0; j--)
    if(arr[j]!=0){
      max = j;
      break;
    }

  int ans = INT_MAX;
  int offset = 0;
  for(int i = min; i<=max;){
    if(2*i < max){
      int x = 2*i+1;
      int temp = 0;
      for(int j=x; j<=max; j++)
	temp += arr[j];
      temp += offset;
      if(ans > temp)
	ans = temp;
      // for next iteration
      offset += arr[i];
      i++;
      while(arr[i]==0)
	i++;
    }
    else{
      if(ans > offset)
	ans = offset;
      break;
    }
  }
  out << ans << endl;
  return 0;
}
