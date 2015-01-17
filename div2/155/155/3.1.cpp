#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

string s,t;

int s_arr[26] = {0};
int t_arr[26] = {0};

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
  in >> s >> t;
  
  for(int i=0; i<s.length(); i++){
    s_arr[s[i]-'A']++;
    t_arr[t[i]-'A']++;
  }

  int nxt_ch = 0;
  int op = 0;
  while(nxt_ch<26){
    if(s_arr[nxt_ch] < t_arr[nxt_ch])
      break;
    nxt_ch++;
  }
  char temp;
  int curr = 0;
  while(curr < s.length() && nxt_ch!=26){
    temp = s[curr] - 'A';
    if(s_arr[temp] > t_arr[temp]){
      if(temp > nxt_ch){
	s_arr[temp]--;
	s_arr[nxt_ch]++;
	op++;
	s[curr] = nxt_ch+'A';
	//find nxt_ch
	while(nxt_ch<26){
	  if(s_arr[nxt_ch] < t_arr[nxt_ch])
	    break;
	  nxt_ch++;
	}
	//-----------
      }
      else{
	if(t_arr[temp] == 0){
	  s_arr[temp]--;
	  s_arr[nxt_ch]++;
	  op++;
	  s[curr] = nxt_ch+'A';
	  // find nxt_ch
	  while(nxt_ch<26){
	    if(s_arr[nxt_ch] < t_arr[nxt_ch])
	      break;
	    nxt_ch++;
	  }
	}
	else{
	  s_arr[temp]--;
	  t_arr[temp]--;
	}
      }
    }
    curr++;
  }
	   
  out << op << endl << s << endl;
  return 0;
}
