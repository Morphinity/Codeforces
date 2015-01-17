#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n+1];
  for(int i=1; i<n+1; i++)
    cin >> arr[i];
  
  int r1,r2,c1,c2;
  cin >> r1 >> c1 >> r2 >> c2;
  int op = 0;
  int x = r1;
  int y = c1;
  while(x != r2){
    if(x > r2){
      // go up
      op++;
      x = x-1;
      if(y > arr[x]+1)
	y = arr[x]+1;
    }
    else{
      // go down
      op++;
      x = x+1;
      if(y > arr[x]+1)
	y = arr[x] + 1;
    }
  }
  op += abs(c2 - y);
  cout << op << endl;
  return 0;
}
