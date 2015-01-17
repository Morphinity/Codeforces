#include<iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  int home[n];
  int guest[n];
  for(int i=0;i<n;i++)
    cin >> home[i] >> guest[i];

  int ans = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n;j++){
      if(j==i)
	continue;
      if(home[i] == guest[j])
	ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
