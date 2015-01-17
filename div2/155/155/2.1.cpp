#include<iostream>
#include<fstream>
using namespace std;

int cal[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int arr[500] = {0}; 
int offset = 100;

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
  int n;
  in >> n;
  int m,d,p,t;
  for(int i=0; i<n; i++){
    in >> m >> d >> p >> t;
    int ct = 0;
    for(int i=1; i<m; i++)
      ct += cal[i];
    ct += d+offset;
    ct--;
    while(t--){
      arr[ct] += p;
      ct--;
    }
  }

  int max = 0;
  for(int i=1; i<500; i++)
    if(max < arr[i])
      max = arr[i];

  out << max << endl;
  return 0;
}
