#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  int x = 0;
  int n;
  cin >> n;
  while(n--){
    cin >> str;
    if(str[1] == '-')
      x--;
    else
      x++;
  }
  cout << x << endl;

  return 0;
}
