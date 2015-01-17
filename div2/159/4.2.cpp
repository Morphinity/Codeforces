#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;

const double pi = 4*atan(1);
const double todeg = 180/pi;

int main(){
  int n;
  cin >> n;
  int x[n];
  int y[n];
  for(int i=0;i<n;i++)
    cin >> x[i] >> y[i];

  if(n==1)
    cout << 0 << endl;
  else{
    double tang[n];
    double temp;
    for(int i=0; i<n;i++){
      tang[i] = atan2(y[i],x[i])*todeg;
      if(tang[i] < 0)
	tang[i] += 360;
    }

    sort(tang+0,tang+n);
    
    double max = 0;
    for(int i=1;i<n;i++){
      temp = tang[i] - tang[i-1];
      if(max < temp)
	max = temp;
    }
    
    temp = tang[0] - tang[n-1] + 360;
    if(max < temp)
      max = temp;
    cout << setprecision(12) << 360 - max << endl;
  }
  return 0;
} 
