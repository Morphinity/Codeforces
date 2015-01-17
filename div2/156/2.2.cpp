#include<iostream>
#include<stack>
using namespace std;

stack<char> st;

int main(){
  string str;
  cin >> str;

  st.push(str[0]);
  int i = 1;
  while(i<str.length()){
    if(st.top() != str[i]){
      st.pop();
      if(st.empty()){
	st.push(str[++i]);
      }
    }
    else
      st.push(str[i]);
    i++;
  }

  stack<char> st2;
  while(!st.empty()){
    st2.push(st.top());
    st.pop();
  }

  while(!st2.empty()){
    cout << st2.top();
    st2.pop();
  }
  cout << endl;
  return 0;
}
