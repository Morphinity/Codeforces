#include<iostream>
using namespace std;

bool visited[100010] = {0};
int p[100010];

int main(){
  int n,s,t;
  cin >> n >> s >> t;
  for(int i=1; i<=n; i++)
    cin >> p[i];

  int curr_pos = s;
  int ans = 0;
  visited[curr_pos] = 1;
  while(curr_pos!= t){
    curr_pos = p[curr_pos];
    ans++;
    if(visited[curr_pos])
      break;
    else
      visited[curr_pos] = 1;
  }
  if(curr_pos != t)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}
