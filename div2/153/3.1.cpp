#include<iostream>
using namespace std;

long long arr[100010];
long long x;

int binsearch(int low,int high){
  if(low > high)
    return low;
  int mid = (low + high)/2;
  if(arr[mid] == x)
    return mid+1;
  else if(arr[mid] > x)
    return binsearch(low,mid-1);
  else
    return binsearch(mid+1,high);
}

long long fact(long long n){
  return (((n*(n-1))/2)*(n-2))/3;
}

int main(){
  int n;
  long long d;
  cin >> n >> d;

  for(int i=0; i<n; i++)
    cin >> arr[i];

  int j;
  long long ans = 0;
  int tmp = 0;
  for(int i=0; i<n; i++){
    x = arr[i]+d;
    j = binsearch(i+1,n-1);
    ans += fact(j-i) - fact(tmp-i);
    tmp = j;
    if(j == n)
      break;
  }
  cout << ans << endl;
  return 0;
}
