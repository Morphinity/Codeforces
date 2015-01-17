#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

pair<int,int> arr[600010];
/*
bool compare(const pair<int,int>& a, const pair<int,int>& b){
  return a.first < b.first;
}
*/
int main(){
  int n;
  cin >> n;

  for(int i=0; i<2*n; i++){
    cin >> arr[i].first;
    arr[i].second = i;
  }

  sort(arr+0,arr+2*n);
 
  bool flag = 0;

  for(int i=0; i<2*n; i+=2)
    if(arr[i].first != arr[i+1].first){
      flag = 1;
      break;
    }
  if(!flag){
    for(int i=0; i<2*n; i+=2)
      cout << (arr[i].second)+1 << " " << (arr[i+1].second)+1 << endl; 
  }
  else
    cout << -1 << endl;

  return 0;
}
