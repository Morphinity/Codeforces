#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  if(n%4 == 2 || n%4 == 3)
    cout << -1 << endl;
  else{
    int arr[n+1];
      int a = 1;
      int b = 2;
      int c = n-1;
      int d = n;
      int l = 1;
      for(int i=0; i<n/4; i++){
	arr[l] = b;
	arr[l+1] = d;
	arr[n-l+1] = c;
	arr[n-l] = a;
	a+=2;
	d-=2;
	b+=2;
	c-=2;
	l+=2;
      }
      if(n%4 == 1)
	arr[n/2+1] = n/2+1;
      for(int i=1; i<=n; i++)
	cout << arr[i] << " ";
      cout << endl;
  }
  return 0;
}
	 
