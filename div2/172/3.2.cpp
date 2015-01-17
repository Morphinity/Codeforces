#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

const double pi = 4*atan(1.0);

int main(){
  long double w,h,alpha;
  cin >> w >> h >> alpha;
  if(alpha > 90)
    alpha = 180 - alpha;
  if(alpha == 90){
    if(w > h){
      cout << h*h << endl;
    }
    else{
      cout << w*w << endl;
    }
  }
  else if(alpha!=0){
    alpha = (alpha*pi)/180;
    double c = cos(alpha);
    double s = sin(alpha);
    double t = tan(alpha);
    long double x1 = (h*s - w*(1-c))/(2*c);
    long double x2 = (w*s - h*(1-c))/(2*s);
    long double x = (x1*x1)/t + (x2*x2)*t;
    long double ans = w*h - x;
    cout << setprecision(20) << ans << endl;
  }
  else
    cout << setprecision(20) << w*h << endl;
  return 0;
}
