#include<iostream>
#include<algorithm>
using namespace std;

long long arr[100010];
bool b[100010] = {0};

bool bins(long long x,int low,int high){
  if(low > high)
    return false;
  else{
    int mid = (high+low)/2;
    if(arr[mid] == x)
      if(b[mid])
	return false;
      else
	return true;
    else if(arr[mid] > x)
      return bins(x,low,mid-1);
    else
      return bins(x,mid+1,high);
  }
}

int main(){
  int n,k;
  cin >> n >> k;

  for(int i=0; i<n ;i++)
    cin >> arr[i];

  sort(arr+0, arr+n);
  int ans = 0;
  for(int i=0; i<n; i++){
    if(arr[i]%k==0){
      if(!bins(arr[i]/k,0,i-1))
	ans++;
      else
	b[i] = true;
    }
    else
      ans++;
  }
  cout << ans << endl;
  return 0;
}
