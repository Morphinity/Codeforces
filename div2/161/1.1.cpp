#include<iostream>
using namespace std;

int main(){
  int m,n;
  int temp;
  for(int i=0; i<5; i++)
    for(int j=0; j<5; j++){
      cin >> temp;
      if(temp == 1){
	m = i;
	n = j;
      }
    }

  m = m-2;
  if(m<0)
    m *= -1;
  n = n-2;
  if(n<0)
    n *= -1;
  cout << m+n << endl;
  return 0;
}
