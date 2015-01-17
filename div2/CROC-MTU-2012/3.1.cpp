#include<iostream>
#include<vector>
using namespace std;

int n,k;
int inv[100010] = {0};

int main(){
  cin >> n >> k;
  vector<int> vect;
  int temp;
  for(int i=0; i<n; i++){
    cin >> temp;
    vect.push_back(temp);
  }
  
  for(int i=0; i<vect.size(); i++){
    if(i+1 < vect.size() && vect[i] == vect[i+1])
      vect.erase(vect.begin()+1+i);
  }
 
  inv[*(vect.begin())]++;
  inv[*(vect.end()-1)]++;

  for(int i=1; i<vect.size()-1; i++){
    if(vect[i-1] == vect[i+1])
      inv[vect[i]]+=2;
    else
      inv[vect[i]]++;
  }
  int max = 0;
  int mx = 0;
  for(int i=1; i<=k ; i++)
    if(max < inv[i]){
      max = inv[i];
      mx = i;
    }
  cout << mx << endl;
  return 0;
}
