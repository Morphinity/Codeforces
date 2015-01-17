#include<iostream>
using namespace std;

int main(){
  int n,t;
  cin >> n >> t;
  char arr[n];

  for(int i=0; i<n; i++)
    cin >> arr[i];

  while(t--){
    for(int i=1; i<n; i++){
      if(arr[i] == 'G')
	if(arr[i-1] == 'B'){
	  arr[i-1] = 'G';
	  arr[i] = 'B';
	  i++;
	}
    }
  }
  for(int i=0; i<n; i++)
    cout << arr[i];
  cout << endl;
  return 0;
}
