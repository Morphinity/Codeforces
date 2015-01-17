#include<iostream>
using namespace std;

int main(){

  int a,b,n;
  cin >> a >> b >> n;

  if(a%b==0){
    cout << a;
    for(int i=0;i<n;i++)
      cout << 0;
    cout << endl;
  }
  else{
    int j;
    for(j=0; j<10; j++){
      if((a*10+j)%b==0){
	a = a*10+j;
	break;
      }
    }
    if(j==10)
      cout << -1 << endl;
    else{
      cout << a;
      for(int i=1;i<n;i++)
	cout << 0;
      cout << endl;
    }
  }
  return 0;
}
