#include<iostream>
using namespace std;

string str = "";

int main(){
  int n;
  cin >> n;
  long int A = 0;
  long int G = 0;
  int a,g;
  for(int i=0; i<n; i++){
    cin >> a >> g;
    if(A > G){
      G+=g;
      str += 'G';
    }
    else{
      A+=a;
      str += 'A';
    }
  }
  if((A >= G && A-G <= 500) || (G>=A && G-A <= 500))
    cout << str << endl;
  else
    cout << -1 << endl;
  return 0;
}
