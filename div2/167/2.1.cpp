#include<iostream>
#include<map>
#include<vector>
using namespace std;

map<long int,long int> m;
vector<long int> v;

long int comp(long long n){
  long int ct = 0;
  while(n){
    if(n&1)
      ct++;
    n = n >> 1;
  }
  return ct;
}

int main(){
  long int n;
  cin >> n;
  long long temp;
  long int s;
  long int vs = 0;
  for(long int i=0; i<n; i++){
    cin >> temp;
    s = comp(temp);
    if(m[s] == 0){
      m[s] = 1;
      v.push_back(s);
      vs++;
    }
    else
      m[s]++;
  }
  long long ans = 0;
  long long k;
  for(long int i=0; i<vs; i++){
    k = m[v[i]];
    if(k>1)
      ans += (k*(k-1))/2;
  }
  cout << ans << endl;
  return 0;
}
