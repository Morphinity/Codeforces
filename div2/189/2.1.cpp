#include<iostream>
#include<map>
using namespace std;

bool arr[110][110] = {0};
long int num[110][2];
int ct = 1;
bool m[110] = {0};

bool dfs(int a,int b){
  if(arr[a][b] == 1)
    return true;
  m[a] = 1;
  for(int i=1; i<ct; i++){
    if(arr[a][i] == 1 && m[i] == 0)
      if(dfs(i,b))
        return true;
  }
  return false;
}

int main(){
  int n;
  cin >> n;
  int l,a,b;
  for(int i=1; i<=n ; i++){
    cin >> l >> a >> b;
    if(l == 1){
      num[ct][0] = a;
      num[ct][1] = b;
      for(int j=1; j<ct; j++){
        if(a < num[j][0] && num[j][0] < b)
          arr[j][ct] = 1;
        else if(a < num[j][1] && num[j][1] < b)
          arr[j][ct] = 1;
        if(num[j][0] < a && a < num[j][1])
          arr[ct][j] = 1;
        else if(num[j][0] < b && b < num[j][1])
          arr[ct][j] = 1;
      }
      ct++;
    }
    else{
      if(dfs(a,b))
        cout << "YES" << endl;
      else 
        cout << "NO" << endl;
      for(int i=1; i<=ct; i++)
        m[i] = 0;
    }

  }
  return 0;
}
