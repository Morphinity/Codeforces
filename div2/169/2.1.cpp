#include<iostream>
using namespace std;

int main(){
  string str;
  cin >> str;
  int arr[26] = {0};

  for(int i=0; i<str.length(); i++)
    arr[str[i]-'a']++;
  int temp = 0;
  for(int i=0; i<26; i++)
    if(arr[i]%2==1)
      temp++;
  if(temp == 0 || temp%2==1)
    cout << "First" << endl;
  else
    cout << "Second" << endl;
  return 0;
}
