#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  long long l,r;
  cin >> l >> r;
  bool larr[10000] = {0};
  bool rarr[10000] = {0};

  int lct = 0;
  int rct = 0;

  long long temp = l;
  while(temp){
    if(temp%2==1)
      larr[lct++] = 1;
    else
      larr[lct++] = 0;
    temp/=2;
  }
  temp = r;
  while(temp){
    if(temp%2==1)
      rarr[rct++] = 1;
    else
      rarr[rct++] = 0;
    temp/=2;
  }

  bool ans[10000] = {0};
  bool ct = 0;
  for(int i=rct-1; i>=0; i--){
    if((larr[i]^rarr[i]) == 1){
      ct = 1;
      ans[i] = 1;
    }
    else if(larr[i] == 0 && ct!=0)
      ans[i] = 1;
    else if(larr[i] == 1 && ct!=0)
      ans[i] = 1;
    else
      ans[i] = 0;
  }
  long long t = 0;
  for(int i=rct-1; i>=0; i--){
    if(ans[i] == 1)
      t = t*2+1;
    else
      t = t*2;
  }
  cout << t << endl;
  return 0;
}

    
      
