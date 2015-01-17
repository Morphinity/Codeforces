#include<iostream>
using namespace std;

bool per_lang[102][102] = {{0}};
bool adj_mat[100][100] = {{0}};
bool visited[100] = {0};
int n;
int lang[101];

bool explore(int u){
  if(lang[u] == 0)
    return 0;
  visited[u] = 1;
  for(int j=0; j<n; j++){
    if(adj_mat[u][j] == 1 && !visited[j])
      explore(j);
  }
 return 1;
}

int dfs(){
  int comp= 0;
  int zerocomp = 0;
  bool temp;
  for(int i=0; i<n; i++){
    if(!visited[i]){
      temp = explore(i);
      if(temp == 0)
	zerocomp++;
      else
	comp++;
    }
  }
  if(comp == 0)
    return zerocomp;
  return zerocomp+comp-1;
}

int main(){
  int m,k,temp;
  cin >> n >> m;
  for(int i=0; i<n; i++){
    cin >> k;
    lang[i] = k;
    while(k--){
      cin >> temp;
      per_lang[i][temp-1] = 1;
    }
  }

  for(int j=0; j<m; j++){
    for(int i=0; i<n; i++){
      if(per_lang[i][j] == 1){
	for(int k=i+1; k<n; k++){
	  if(per_lang[k][j] == 1){
	    adj_mat[i][k] = 1;
	    adj_mat[k][i] = 1;
	  }
	}
      }
    }
  }

  cout << dfs() << endl;
  return 0;
}
