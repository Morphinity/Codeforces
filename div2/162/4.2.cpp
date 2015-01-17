#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}

bool check(int a,int b){
  if(gcd(a,b) == 1)
    return false;
  return true;
}

int main(){
  int n;
  cin >> n;
  // initialize
  int arr[n];
  for(int i=0;i<n;i++)
    cin >> arr[i];
  
  vector<int> lists[n];
  vector<int>::iterator it;
  int temp[n];
  for(int i=0; i<n; i++)
    temp[i] = 1;

  unsigned int max = 0;
  for(int i=n-1;i>=0;i--){
    lists[i].push_back(i);
    for(int j=i+1; j<n; j++){
      if(temp[j] == 1)
	if(check(arr[i],arr[j])){
	  for(it = lists[j].begin(); it!=lists[j].end(); it++)
	    temp[*it] = 0;
	  if(lists[i].size() < (lists[j].size() + 1)){
	    vector<int> vect = lists[j];
	    vect.insert(vect.begin(),i);
	    lists[i] = vect;
	  } 
	}
      temp[j] = 1;
    }
    if(max < lists[i].size())
      max = lists[i].size();
  }
  cout << max << endl;
  return 0;
}
