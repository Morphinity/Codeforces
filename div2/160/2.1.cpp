#include<iostream>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<n;i++)
    cin >> arr[i];

  int i=0;
  int sum = 0;
  int flag = 0;
  while(i < n && k > 0){
    if(arr[i] < 0){
      arr[i] *= -1;
      sum += arr[i];
      k--;
      i++;
    }
    else if(arr[i] == 0){
      flag = 1;
      break;
    }
    else{
      flag = 2;
      break;
    }
  }
  if(i < n){
    if(flag == 0 || flag == 1){
      while(i<n)
	sum += arr[i++];
    }
    else if(flag == 2){
      if(k%2 == 0){
	while(i < n)
	  sum += arr[i++];
      }
      else{
	if(arr[i] < arr[i-1]){
	  sum += -1*arr[i++];
	  while(i < n)
	    sum += arr[i++];
	}
	else{
	  sum += -2*arr[i-1];
	  while(i<n)
	    sum += arr[i++];
	}
      }
    }
  }
  else{
    if(k%2 == 1)
      sum += -2*arr[i-1];
  }

  cout << sum << endl;
  return 0;
}
