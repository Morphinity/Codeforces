#include<iostream>
using namespace std;

char grid[51][51];

int main(){
  int n,m;
  cin >> n >> m;
  int black = 0;
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
      cin >> grid[i][j];
      if(grid[i][j] == 'B')
	black++;
    }

  // check for connectivity
  if(black > 1){
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
      
