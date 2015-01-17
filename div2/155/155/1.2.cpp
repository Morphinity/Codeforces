#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<cstdio>
using namespace std;

vector<int> vect[5001];

int main(){
  ifstream in("input.txt");
  ofstream out("output.txt");

  long long n;
  in >> n;
  int temp;
  n = 2*n;
  for(int i=0; i<n; i++){
    in >> temp;
    vect[temp].push_back(i+1);
  }
  int i;
  for(i=1; i<=5000;i++)
    if(vect[i].size() % 2 != 0)
      break;

  if(i == 5001){
    for(int j=1; j<5001; j++){
      for(int k = 0; k<vect[j].size(); k+=2){
	out << vect[j][k] << " " << vect[j][k+1] << endl;
      }
    }
  }
  else
    out << -1 << endl;
  return 0;
}
