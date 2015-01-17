#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

  int n,m,k;
  cin >> n >> m >> k;
  vector<int> vect;
  vector<int>::iterator it;
  int temp;
  for(int i=0;i<n;i++){
    cin >> temp;
    vect.push_back(temp);
  }

  it = vect.begin();
  sort(it,it+n);

  vector<int>::reverse_iterator itr = vect.rbegin();
  int ans=0;
  while(m > k && itr!=vect.rend()){
    ans++;
    k = k - 1 + (*itr);
    itr++;
  }
  if(m <= k)
    cout << ans << endl;
  else
    cout << -1 << endl;

  return 0;
}
