#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;


int main(){
  int m,qmin=100001;
  cin >> m;
  int disc[m];
  for(int i=0; i<m; i++){
    cin >> disc[i];
    if(qmin > disc[i])
      qmin = disc[i];
  }

  int n;
  cin >> n;
  int arr[n];
  
  for(int i=0; i<n; i++)
  cin >> arr[i];
  
  vector<int> cost (arr,arr+n);
  vector<int>::iterator it = cost.begin();

  it = cost.begin();
  sort(it,it+n);

  for(int i=0; i<n; i++){
    arr[n-i-1] = *it;
    it++;
  }
  int sum = 0;
  int temp = qmin;
  for(int i=0;i<n;i++){
    if(temp!=0){
      sum += arr[i];
      temp--;
    }
    else{
      i+=1;
      temp = qmin;
    }
  }
  cout << sum << endl;
  return 0;
}
