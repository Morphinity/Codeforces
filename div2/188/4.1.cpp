#include<iostream>
using namespace std;

int n,t;

int arr[500][500];

void dfs(int x,int y){
  if(arr[x][y] < 4)
    return;
  else{
    int m = arr[x][y]/4;
    arr[x-1][y] += m;
    arr[x+1][y] += m;
    arr[x][y-1] += m;
    arr[x][y+1] += m;
    arr[x][y] = arr[x][y]%4;
    
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
    dfs(x,y);
  }
}

int main(){
  cin >> n >> t;
  for(int i=0; i<500 ;i++)
    for(int j=0; j<500; j++)
      arr[i][j] = 0;

  arr[250][250] = n;
  dfs(250,250);

  while(t--){
    int x,y;
    cin >> x >> y;
    if(x+250 < 0 || x+250 >= 500 || y+250 < 0 || y+250 >= 500)
      cout << 0 << endl;
    else
      cout << arr[x+250][y+250] << endl;
  }
  return 0;
}
