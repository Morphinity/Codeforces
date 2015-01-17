#include<iostream>
using namespace std;

int arr[100010][2];
int ans[100010];
int ct = 1;

int find(int a){
  if(arr[arr[a][0]][0] == arr[a][1] || arr[arr[a][0]][1] == arr[a][1]){
    ans[ct++] = arr[a][0];
    ans[ct++] = arr[a][1];
  }
  else if(arr[arr[a][1]][0] == arr[a][0] || arr[arr[a][1]][1] == arr[a][0]){
    ans[ct++] = arr[a][1];
    ans[ct++] = arr[a][0];
  }
  else
    return -1;
  return ans[ct-1];
}

int main(){
  int n,a,b,flag=0;
  cin >> n;
  int t = 2*n;
  while(t--){
    cin >> a >> b;
    if(arr[a][0] == 0)
      arr[a][0] = b;
    else if(arr[a][1] == 0)
      arr[a][1] = b;
    else
      flag = 1;
  }
  if(flag == 0){
    ans[0] = 1;
    int temp = 1;
    do{
      temp = find(temp);
      if(temp == -1)
	break;
    }while(temp!=1);
    if(temp!=-1 && ct-1==n){
      for(int i=0; i<n; i++)
	cout << ans[i] << " ";
      cout << endl;
    }
    else
      cout << -1 << endl;
  }
  else
    cout << -1 << endl;
  return 0;
}
