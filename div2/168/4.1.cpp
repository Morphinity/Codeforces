#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> adj_list[100010];
long long val[100010];
bool visited[100010];
int n;

class node{
public:
  long long plus;
  long long minus;
  node(){
    plus = 0;
    minus = 0;
  }
  node(long long p,long long m){
    plus = p;
    minus = m;
  }
  void change(long long p,long long m){
    plus += p;
    minus += m;
  }
};

node explore(int u){
  visited[u] = 1;
  vector<node> vect;

  for(unsigned int i=0; i<adj_list[u].size(); i++){
    if(!visited[adj_list[u][i]]){
      node p = explore(adj_list[u][i]);
      vect.push_back(p);
    }
  }
  long long maxp = 0;
  long long maxm = 0;
  for(int i=0; i<vect.size(); i++){
    if(maxp < vect[i].plus)
      maxp = vect[i].plus;
    if(maxm < vect[i].minus)
      maxm = vect[i].minus;
  }
  long long t = maxp - maxm + val[u];
  if(t<0)
    maxp += abs(t);
  else
    maxm += abs(t);
  node x(maxp,maxm);
  return x;
}
  
long long dfs(){
  for(int i=1; i<=n; i++)
    visited[i] = 0;
  node p;
  node x = explore(1);
  p.change(x.plus,x.minus);
  return p.plus + p.minus;
}

int main(){
  int a,b;
  cin >> n;
  for(int i=0; i<n-1; i++){
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }
  for(int i=1; i<=n; i++)
    cin >> val[i];
  
  cout << dfs() << endl;


  return 0;
}
