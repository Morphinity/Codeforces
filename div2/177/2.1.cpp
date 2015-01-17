#include<iostream>
#include<algorithm>
using namespace std;

int arr[10010];

int main(){
  int n,m,d;
  cin >> n >> m >> d;
  int k = n*m;
  for(int i=0; i<k; i++)
    cin >> arr[i];
  sort(arr+0,arr+k);
  int pivot = arr[k/2];
  long int ans = 0;

  int temp;
  bool flag = 0;
  for(int i=0; i<k/2; i++){
    temp = pivot-arr[i];
    if(temp%d == 0)
      ans += temp/d;
    else{
      flag = 1;
      break;
    }
  }
  
  if(flag == 0){
    for(int i=k/2+1; i<k; i++){
      temp = arr[i] - pivot;
      if(temp%d == 0)
	ans += temp/d;
      else{
	flag = 1;
	break;
      }
    }
  }
  if(flag == 1)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}
