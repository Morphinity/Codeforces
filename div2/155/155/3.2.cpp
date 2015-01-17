#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

char s[100010];
char t[100010];

int s_arr[256];
int t_arr[256];

ifstream in("input.txt");
ofstream out("output.txt");

int main(){
  in >> s >> t;
  for(int i=0; i<strlen(s); i++){
    s_arr[s[i]]++;
    t_arr[t[i]]++;
  }

  char nxt_ch = 'A';
  int op = 0;
  while(nxt_ch<='Z'){
    if(s_arr[nxt_ch] < t_arr[nxt_ch]){
      break;
    }
    nxt_ch++;
  }

  int curr = 0;
  while(curr < strlen(s) && nxt_ch<='Z'){
    if(s_arr[s[curr]] > t_arr[s[curr]]){
      if(s[curr] > nxt_ch || t_arr[s[curr]] == 0){
	s_arr[s[curr]]--;
	s_arr[nxt_ch]++;
	s[curr] = nxt_ch;
	op++;
	while(nxt_ch<='Z'){
	  if(s_arr[nxt_ch] < t_arr[nxt_ch])
	    break;
	  nxt_ch++;
	}
      }
      else{
	s_arr[s[curr]]--;
	t_arr[s[curr]]--;
      }
    }
    curr++;
  }
  out << op << endl << s << endl;
  return 0;
}

      
   
