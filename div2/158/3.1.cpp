#include<iostream>
using namespace std;

int main(){
  int n,j;
  cin >> n >> j;
  long long arr[n];
  for(int i=0; i<n; i++)
    cin >> arr[i];

  j--;
  int curr = j;
  int x;
  long long min = 1000000001;

  for(; curr>=0; curr--)
    if(min > arr[curr]){
      min = arr[curr];
      x = curr;
    }
  
  for(curr = n-1; curr>j; curr--){
    if(min > arr[curr]){
      min = arr[curr];
      x = curr;
    }
  }
  long long temp;
  int ct=0;
  long long t;
  if(j < x){
    temp = arr[x]+1;
    for(int i=0;i<=j;i++){
      ct++;
      arr[i] -= temp;
    }
    for(int i=x+1;i<n;i++){
      ct++;
      arr[i] -= temp;
    }
    t = ct*temp;
    ct = 0;
    temp--;
    for(int i=j+1;i<=x;i++){
      ct++;
      arr[i] -= temp;
    }
    t += ct*temp;
    arr[x] = t;
  }
  else if(j > x){
    temp = arr[x];
    for(int i=0; i<=x; i++){
      arr[i] -= temp;
    }
    t = (x+1)*temp;
    temp++;
    for(int i=x+1; i<=j; i++){
      arr[i] -= temp;
    }
    t += (j-x)*temp;
    temp--;
    for(int i=j+1;i<n;i++)
      arr[i] -= temp;
    t += (n-j-1)*temp;
    arr[x] = t;
  }
  else{
    temp = arr[x];
    for(int i=0;i<n;i++)
      arr[i] -= temp;
    arr[x] = temp*n;
  }

  for(int i=0; i<n;i++)
    cout << arr[i] << " ";
  cout << endl;


  return 0;
}

