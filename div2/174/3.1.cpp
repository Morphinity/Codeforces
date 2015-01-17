#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
  long long arr[200010] = {0};
  long long chk[200010] = {0};
  int n;
  int size = 1;
  long double sum = 0.0;
  cin >> n;
  int ki,xi,ai,op;
  long double avg = 0.0;
  for(int i=0; i<n; i++){
    cin >> op;
    if(op == 1){
      cin >> ai >> xi;
      sum += ai*xi;
      chk[ai-1] += xi;
    }
    else if(op == 2){
      cin >> ki;
      arr[size] = ki;
      size++;
      sum += ki;
    }
    else{
      chk[size-2] += chk[size-1];
      sum -= (arr[size-1] + chk[size-1]);
      chk[size-1] = 0;
      size--;
    }
    avg = sum / size;
    cout << setprecision(15) << avg << endl;
  }
  return 0;
}
