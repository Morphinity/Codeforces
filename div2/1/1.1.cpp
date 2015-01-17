#include<iostream>
using namespace std;

int main(){
  long long n,m,k;
  cin >> n >> m >> k;
  long long t1 = n/k;
  long long t2 = m/k;
  if(n%k!=0)
    t1++;
  if(m%k!=0)
    t2++;
  cout << t1*t2 << endl;
  return 0;
}
