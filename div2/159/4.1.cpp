#include<iomanip>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;


double pi = 4*atan(1);
const double todeg = 180/pi;
//const double con360 = 2*pi*todeg;

int main(){
  int n;
  cin >> n;

  int x[n];
  int y[n];
    
  for(int i=0; i<n; i++)
    cin >> x[i] >> y[i];

  double min = 0.0000000;
  
  if(n == 1)
    cout << setprecision(15) << min << endl;
  else{
    
    vector<double> tang;
    vector<double>::iterator it;
    
    double temp;
    
    for(int i=0;i<n;i++){
      temp = atan2(y[i],x[i])*todeg ;
      if(y[i] < 0)
	temp += 360;
      tang.push_back(temp);
    }
    it = tang.begin();
    sort(it,it+n);
    
    double max = 0;

    for(int i=1;i<n;i++){
      temp = tang[i%n] - tang[(i-1)%n];
      if(max < temp)
	max = temp;
    }
    tang[0] += 360;
    temp = tang[0] - tang[n-1];
    if(max < temp)
      max = temp;
    cout << setprecision(15) << 360 - max<< endl;
  }

  return 0;
}
   
