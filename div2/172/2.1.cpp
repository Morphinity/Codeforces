#include<iostream>
#include<limits.h>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
  int x,y,n;
  cin >> x >> y >> n;

  long long temp_num1, temp_num2, temp_denom;
  long long b,a;
  long long a_ans, b_ans;
  long long denom_ans = 1;
  long long num_ans = INT_MAX;

  for(b = 1; b<=n; b++){
    temp_denom = b*y;
    a = (b*x)/y;
    temp_num1 = abs(b*x - a*y);
    temp_num2 = abs(b*x - (a+1)*y);
    if(temp_num2 < temp_num1){
      if(num_ans*temp_denom > temp_num2*denom_ans){
	denom_ans = temp_denom;
	num_ans = temp_num2;
	a_ans = a+1;
	b_ans = b;
      }
    }
    else{
      if(num_ans*temp_denom > temp_num1*denom_ans){
	denom_ans = temp_denom;
	num_ans = temp_num1;
	a_ans = a;
	b_ans = b;
      }
    }
  }
  cout << a_ans << "/" << b_ans << endl;
  return 0;
}
