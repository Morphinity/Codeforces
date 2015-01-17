#include<iostream>
using namespace std;

int main(){
  string str = "";
  long int A = 0;
  long int G = 0;
  int n,a,g;
  cin >> n;
  int x[n];
  int y[n];
  for(int i=0; i<n; i++)
    cin >> x[i] >> y[i];
  int i;
  for(i=0; i<n; i++){
    a = x[i];
    g = y[i];
    if(A+a-G <= 500 && G-(A+a) <= 500){
      A += a;
      str += 'A';
    }
    else if(G+g-A <= 500 && A-(G+g) <= 500){
      G += g;
      str += 'G';
    }
    else
      cout << -1 << endl;
  }
  if(i==n)
    cout << str << endl;
  return 0;
}
