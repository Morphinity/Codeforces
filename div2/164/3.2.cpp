#include<iostream>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int flag = 0;
  int temp;
  if(m < n){
    temp = m;
    if(m <=3)
      flag = 1;
  }
  else{
    temp = n;
    if(n<=3)
      flag = 1;
  }

  if(flag == 1){
    cout << temp + 1 << endl;
    cout << 1 << " " << 0 << endl;
    cout << 0 << " " << 1 << endl;
    for(int i=2;i<=temp;i++)
      cout << i << " " << i << endl;
  }
  else{
    cout << temp << endl;
    //cout << 1 << " " << 1 << endl;
    for(int i=1;i<=temp; i++)
      cout << i << " " << i << endl;
  }
  return 0;
}
