#include <iostream>

using namespace std;
int a[100023];
int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++)
    cin >> a[i];
  int j;
  for( j = t-1; j > 0; j--)
    if (a[j] < a[j-1]){
      cout << j <<  endl;
      break;
    }
  if (j == 0)
    cout << 0 << endl;

  return 0;
}

