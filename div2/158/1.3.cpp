#include<iostream>
using namespace std;

long long a;
int b,n;

int arr[100010];

int main(){

  cin >> a >> b >> n;

  int temp = a;
  int i=0;
  int dig = 0;
  while(temp > 0){
    arr[i++] = temp%10;
    temp /= 10;
    dig++;
  }

  for(int ct = 0; ct < n; ct++){
    for(int j = arr[i]; j<10; j++){
      if((a*10 + j)%b == 0){
	arr[i++] = j;
	a = a*10 + j;
	break;
      }
    }
    if(j == 10)
      i--;
    if(i == dig)
      break;
  }
  
  if(ct == n)
    cout << a << endl;
  else
    cout << -1 << endl;
  return 0;
}
