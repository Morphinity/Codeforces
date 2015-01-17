#include<iostream>
using namespace std;

int binsearch(int* arr,int x,int low,int high){
  if(low >= high)
    return low;
  else{
    int mid = (low+high)/2;
    if(arr[mid] == x)
      return mid;
    else if(arr[mid] > x)
      return binsearch(arr,x,low,mid);
    else
      return binsearch(arr,x,mid+1,high);
  }
}

int main(){
  int m,n;
  cin >> n >> m;
  long long arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];
  // find the arrays
  int l[n];
  int r[n];
  int ct = 0;
  l[ct] = 0;
  int j=1;
  while(j<n){
    while(j<n && (arr[j] >= arr[j-1]))
      j++;
    while(j<n && (arr[j] <= arr[j-1]))
      j++;
    j--;
    r[ct] = j;
    ct++;
    if(j+1 == n)
      break;
    int k = j;
    while(arr[k] == arr[k-1])
      k--;
    l[ct] = k;
    j++;
  }
  int x,y;
  // queries now
  while(m--){
    cin >> x >> y;
    x--;
    y--;
    int l1 = binsearch(l,x,0,ct-1);
    if(l[l1] > x)
      l1--;

    int r1 = binsearch(r,y,0,ct-1);
    if(r1 <= l1)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
