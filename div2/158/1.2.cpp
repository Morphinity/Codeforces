#include<iostream>
using namespace std;

long int a,b,n;

long int proc(int i,long int a){
  if(i==n)
    return a;
  else{
    int j;
    for(j=0; j<10; j++){
      if((a*10+j)%b == 0){
	b = a*10 + j;
	if(proc(i+1,b)!=-1)
	  return b;
      }
    }
    if(j == 10)
      return -1;
  }
}

int main(){
  cin >> a >> b >> n;
  cout << proc(0,a) << endl;
  return 0;
}
