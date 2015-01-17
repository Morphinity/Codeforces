#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string,int> m;

int day_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int atoi(string str){
  int temp = 0;
  for(unsigned int i=0; i<str.length(); i++)
    temp = temp*10 + (str[i] - '0');
  return temp;
}

int main(){
  string str;
  cin >> str;
  unsigned int l = str.length();
  string ans = "";
  int mx = 0;
  for(unsigned int i=0; i+9<l; i++){
    if(str[i+2] != '-' || str[i+5] != '-')
      continue;
    int flag = 0;
    for(int j=0; j<10; j++)
      if(j!=2 && j!=5 && str[i+j]=='-'){
	flag = 1;
	break;
      }
    if(flag == 1)
      continue;

    string yr = str.substr(i+6,4);
    int year = atoi(yr);
    if(year < 2013 || year > 2015)
      continue;
    int day = (str[i]-48)*10 + (str[i+1]-48);
    int month = (str[i+3]-48)*10 + (str[i+4]-48);
    if(month == 0 || month >=13)
      continue;
    if(day_in_month[month] < day || day == 0)
      continue;
    string temp = str.substr(i,10);
    if(++m[temp] > mx){
      mx = m[temp];
      ans = temp;
    }
  }
  cout << ans << endl;
  return 0;
}
