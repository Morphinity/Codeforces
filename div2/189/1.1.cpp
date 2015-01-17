#include<iostream>
using namespace std;

int main(){
  long int n;
  cin >> n;
  
  int count4 = 0;
  
  while(n){
    int r1 = n%10;
    n = n/10;
    if(r1 == 1)
      continue;
    else if(r1 == 4){
      int r2 = n%10;
      n/=10;
      if(r2 == 1)
        continue;
      else if(r2 == 4){
        int r3 = n%10;
        n/=10;
        if(r3 == 1)
          continue;
        else{
          n = 1;
           break;
        }
      }
      else{
        n=1;
        break;
      }
    }
    else{
      n=1;
      break;
    }
  }
  if(n==0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
