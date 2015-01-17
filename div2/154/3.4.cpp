// greedy approach
#include<iostream>
#include<fstream>
#include<limits.h>
#include<cmath>
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

int n;
int arr[101];

int move(int curr_x,int curr_y,int dest_x,int dest_y){           // returns greedy solution to prob
  int op = 0;
  while(curr_x != dest_x){
    if(curr_x > dest_x)
      curr_x--;
    else
      curr_x++;
    if(curr_y > arr[curr_x]+1)
      curr_y = arr[curr_x]+1;
    op++;
  }
  op += abs(dest_y - curr_y);
  return op;
}

int main(){
  in >> n;
  for(int i=1; i<=n; i++)
    in >> arr[i];

  int r1,r2,c1,c2;
  in >> r1 >> c1 >> r2 >> c2;

  int ans = INT_MAX;
  ans = move(r1,c1,r2,c2);
  // check for alternate solutions
  // going up
  int curr_x = r1-1, curr_y = c1;
  int tmp=0;
  for( ; curr_x > 0 ; curr_x--){
    if(curr_y > arr[curr_x]+1)
      curr_y = arr[curr_x]+1;
    tmp++;
    ans = min(ans, tmp+move(curr_x,curr_y,r2,c2));
  }

  // going down
  curr_x = r1+1;
  curr_y = c1;
  tmp = 0;
  for( ; curr_x <=n ; curr_x++){
    if(curr_y > arr[curr_x]+1)
      curr_y = arr[curr_x]+1;
    tmp++;
    ans = min(ans, tmp + move(curr_x,curr_y,r2,c2));
  }
  out << ans << endl;
  return 0;
}
	      
	      
