#include<iostream>
#include<string>
#include<map>
#include<cstdlib>
using namespace std;

map<string,int> mp;
string str;
int day_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int atoi(string str){
  int temp = 0;
  for(unsigned int i=0; i<str.length(); i++)
    temp = temp*10 + (str[i]-'0');
  return temp;
}

string get_date(int& i){
  int j=i;
  while(j<str.length() && str[j]!='-')
    j++;
  string date = str.substr(i,j-i);
  i = j;
  return date;
}

string get_month(int& i){
  int j = i;
  while(j<str.length() && str[j]!='-')
    j++;
  string month = str.substr(i,j-i);
  i = j;
  return month;
}

string get_year(int& i){
  int j = i;
  while(j<str.length() && str[j]!='-')
    j++;
  string year = str.substr(i,j-i);
  i = j;
  return year;
} 

string get_next_date(int& i){
  string day="";
  string month="";
  string year="";

  int j=i;
  while(j < str.length() && str[j] == '-')
    j++;
  day = get_date(j);
  i = j;
  if((j+1)<str.length() && str[j] == '-' && str[j+1] != '-')
    month = get_month(++j);
  else
    return "";
  if((j+1)<str.length() && str[j] == '-' && str[j+1] != '-')
    year = get_year(++j);
  else
    return "";
  
  if(year.length() > 4)
    year = year.substr(0,4);
  int y = atoi(year);
  if(!(y>=2013 && y<=2015))
    return "";
  int m = atoi(month);
  if(m>12 || m==0)
    return "";
  else if(m<10 && month.length()==1)
    month = '0'+month;
  if(day.length() > 2)
    day = day.substr(day.length()-2,2);
  int d = atoi(day);
  // check the lower portion
  if(day_in_month[m] < d || d==0)
    return "";
  return day+'-'+month+'-'+year;
}  

int main(){
  cin >> str;
  int i=0;
  string temp;
  int mx=0;
  string ans;
  while(i<str.length()){
    temp = get_next_date(i);
    if(temp!=""){
      if(++mp[temp] > mx){
	mx = mp[temp];
	ans = temp;
      }
    }
  }
  cout << ans << endl;
  //  cout << mx << endl;
  return 0;
}
