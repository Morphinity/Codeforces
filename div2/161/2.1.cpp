#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> vect;
  vector<int>::iterator it;
  long arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
    vect.push_back(arr[i]);
  }
  it = vect.begin();
  sort(it,it+n);
  int i=n-1;
  for(; it!=vect.end(); it++)
    arr[i--] = *it;
  /*
  for(int i=0; i<n; i++)
    cout << arr[i] << " " ;
  cout << endl;
  */ 
 if(k <= n)
    cout << arr[k-1] << " " << arr[k-1] << endl;
  else
    cout << -1 << endl;
  return 0;
}
