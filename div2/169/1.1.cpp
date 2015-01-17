#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  long long k,f;
  int n,t;
  long long max = -INT_MAX;
  cin >> n >> k;
  long long temp;
  for(int i=0; i<n; i++){
    cin >> f >> t;
    if(t > k){
      temp = f - (t - k);
      if(temp > max)
	max = temp;
    }
    else
      if(f > max)
	max = f;
  }
  cout << max << endl;
  return 0;
}
