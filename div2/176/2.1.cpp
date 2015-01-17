#include<iostream>
#include<cmath>
using namespace std;

int main(){
  long long n,k;
  cin >> n >> k;

  long double i = ((2*k-1)*(2*k-1) - 8*(n-1));
  if(i < 0)
    cout << -1 << endl;
  else{
    i = sqrt(i);
    if(2*k-1 >= i){
      long long ans;
      if(i == (long long)i)
	ans = ((2*k-1) - (long long)(i))/2;
      else
	ans = ((2*k-1) - (long long)(i) + 1)/2;
      cout << ans << endl;
    }
    else{
      long long ans;
      if(i == (long long)(i))
	ans = ((2*k-1) + (long long)(i))/2;
      else
	ans = ((2*k-1) + (long long)(i) + 1)/2;
      cout << ans << endl;
    }
  }
  return 0;
}
      
    
