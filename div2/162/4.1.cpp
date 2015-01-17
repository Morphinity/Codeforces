#include<iostream>
using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

bool euclid(int a,int b){
  if(gcd(a,b) == 1)
    return false;
  else
    return true;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];
  
  int dp[n];
  dp[n-1] = 1;
 
  for(int i=n-2;i>=0;i--){
    dp[i] = 1;
    int j = i+1;
    while(j<n){
      if(euclid(arr[i],arr[j])){
	dp[i] += dp[j];
	break;
      }
      j++;
    }
  }
  int max = 0;
  for(int i=0;i<n;i++)
    if(dp[i] > max)
      max = dp[i];

  cout << max << endl;
  return 0;
}
