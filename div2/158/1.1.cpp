#include<iostream>
using namespace std;

int main(){

  int a,b,n;
  cin >> a >> b >> n;
  int i;
  for(i=0; i<n;i++){
    int j;
    for(j = 0; j<10; j++){
      if((a*10 + j)%b==0){
	a = a*10 + j;
	vect.push_back(a);
	}
    }
    if(j == 10)
      break; 
  }
  if(i == n)
    cout << a << endl;
  else
    cout << -1  << endl;
  return 0;
}
