#include<iostream>
#include<string>
using namespace std;

class node{
public:
  int v;
  node* l;
  node* r;

  node(int val,node* lef,node* righ){
    v = val;
    l = lef;
    r = righ;
  }
};

void inorder(node* root){
    if(root == 0) return;
    inorder(root->l);
    cout << root->v << endl;
    inorder(root->r);
}

int main(){
  string str;
  cin >> str;
  int ct = 2;
  node* root = new node(1,0,0);
  node* curr = root;
  for(unsigned int i=0; i<str.length()-1; i++){
    if(str[i] == 'l'){
      curr->l = new node(ct++,0,0);
      curr = curr->l;
    }
    else{
      curr->r = new node(ct++,0,0);
      curr = curr->r;
    }
  }
  inorder(root);
  return 0;
}
