#include<iostream>
#include<fstream>
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
  int n,m;
  in >> n >> m;
  if(n >= m){
    while(n && m){
      out << "B" << "G";
      m--;
      n--;
    }
  }
  else{
    while(n && m){
      out << "G" << "B";
      m--;
      n--;
    }
  }
  while(m){
    out << "G";
    m--;
  }
  while(n){
    out << "B";
    n--;
  }
  out << endl;
  return 0;
}
