#include<iostream>
using namespace std;

int arr[100010][2];
int ans[100010];
int in[100010] = {0};
int out[100010] = {0};
int ct = 1;

void initialize(){
  if(arr[arr[1][0]][0] == arr[1][1] || arr[arr[1][0]][1] == arr[1][1]){
    ans[ct++] = arr[1][0];
    ans[ct++] = arr[1][1];
  }
  else if(arr[arr[1][1]][0] == arr[1][0] || arr[arr[1][1]][1] == arr[1][0]){
    ans[ct++] = arr[1][1];
    ans[ct++] = arr[1][0];
  }
}

int main(){
  int n,a,b;
  cin >> n;

  int t = 2*n;
  while(t--){
    cin >> a >> b;
    arr[a][out[a]++] = b;
    in[b]++;
  }
  int flag = 0;
  for(int i=1 ;i<=n; i++){
    if(in[i] != 2 && out[i] != 2){
      flag = 1;
      break;
    }
  }
  if(flag == 0){
    ans[0] = 1;
    initialize();
    while(ct != n){
      if(arr[ans[ct-2]][0] == ans[ct-1]){
	if(arr[ans[ct-2]][1] == arr[ans[ct-1]][0] || arr[ans[ct-2]][1] == arr[ans[ct-1]][1])
	  ans[ct++] = arr[ans[ct-2]][1];
      }
      else{
	if(arr[ans[ct-2]][0] == arr[ans[ct-1]][0] || arr[ans[ct-2]][0] == arr[ans[ct-1]][1])
	  ans[ct++] = arr[ans[ct-2]][0];
      }
    }
    if((arr[ans[ct-1]][0] == ans[0] || arr[ans[ct-1]][0] == ans[1]) && ( arr[ans[ct-1]][1] == ans[0] || arr[ans[ct-1]][1] == ans[1]))
      for(int i=0; i<n; i++){
	cout << ans[i] << " ";
      }
    else{
      cout << -1;
    }
    cout << endl;
  }
  else{
    cout << -1 << endl;
  }
  return 0;
}
