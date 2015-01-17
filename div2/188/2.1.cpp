#include<iostream>
#include<string>
using namespace std;

long long arr[1000000];
int ct = -1;

int main(){
  string str;
  cin >> str;

  for(int i=0; i<str.length(); i++){
    if(str.substr(i,5) == "heavy"){
      ct++;
    }
    else if(str.substr(i,5) == "metal" && ct >= 0){
      arr[ct]++;
    }
  }
 for(int i=ct; i>=0 ; i--)
    arr[i-1] += arr[i];
  long long sum = 0;
  for(int i=0; i<=ct; i++)
    sum += arr[i];
  cout << sum << endl;
  return 0;
}
      
