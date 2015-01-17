#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;

map<long long,long long> m;


double log4(int a){
  int ct = 0;
  int temp = a;
  while(a>0){
    ct++;
    a/=2;
  }
  if(!(temp&(temp-1)))
    ct--;
  return double(ct);
}

int main(){
  int n;
  cin >> n;

  long long a[n];
  long long temp1;
  for(int i=0; i<n; i++){
    cin >> a[i] >> temp1;
    m[a[i]] = temp1;
  }

  sort(a+0,a+n);
  double temp;
  int mx = a[n-1]+1;
  for(int i=n-1; i>=0; i--){
    temp = log4(m[a[i]]);
    temp /= 2.0;
    temp += a[i];
    int x = int(temp);
    if(temp > double(x))
      x++;
    if(x > mx)
      mx = x;
  }
  cout << mx << endl;

  return 0;
}
