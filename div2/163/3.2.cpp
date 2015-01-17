#include<iostream>
#include<vector>
using namespace std;

class node{
public:
  int t;
  int i;
  int j;
  node(int a,int b,int c){
    t = a;
    i = b;
    j = c;
  }
};

vector<node> vect;
vector<node>::iterator it;
int ct = 0;
vector<int> ones[1001];
vector<int> cols[1001];
vector<int>::iterator itr;
int n;

void qsort(int a[],int l,int u){
  int p,temp;
  if(l<u){
    p=a[l];
    int i=l;
    int j=u;
    while(i<j){
      while(a[i]<=p && i<j)
	i++;
      while(a[j]>p && i<=j)
	j--;
      if(i<j){
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	node no(1,i,j);
	ct++;
	vect.push_back(no);
	vector<int> t = ones[i];
	ones[i] = ones[j];
	ones[j] = t;	
      }
    }
    if(j!=l){
      temp=a[j];
      a[j]=a[l];
      a[l]=temp;
      node no(1,j,l);
      vect.push_back(no);
      ct++;
      vector<int> t = ones[j];
      ones[j] = ones[l];
      ones[l] = t;      
    }
    qsort(a,l,j-1);
    qsort(a,j+1,u); 
  }
}


void qsortcol(int a[],int l,int u){
  int p,temp;
  if(l<u){
    p=a[l];
    int i=l;
    int j=u;
    while(i<j){
      while(a[i]<=p && i<j)
	i++;
      while(a[j]>p && i<=j)
	j--;
      if(i<j){
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	node no(2,i,j);
	ct++;
	vect.push_back(no);
      }
    }
    if(j!=l){
      temp=a[j];
      a[j]=a[l];
      a[l]=temp;
      node no(2,j,l);
      vect.push_back(no);
      ct++;
    }
    qsortcol(a,l,j-1);
    qsortcol(a,j+1,u); 
  }
}


int main(){
  cin >> n;
  int a,b;

  for(int i=0; i<n-1; i++){
    cin >> a >> b;
    ones[a].push_back(b);
  }
  int arr[n+1];
  for(int i=0; i<n+1; i++)
    arr[i] = 0;
  for(int i=1; i<n+1; i++){
    itr = ones[i].begin();
    while(itr!=ones[i].end()){
      if(arr[i] < *itr)
	arr[i] = *itr;
      itr++;
    }
  }
  qsort(arr,1,n);
  
  for(int i=1; i<n+1; i++){
    itr = ones[i].begin();
    while(itr!=ones[i].end()){
      cols[(*itr)].push_back(i);
      itr++;
    }
  }
  for(int i=0; i<n+1; i++)
    arr[i] = n+1;
  for(int i=1; i<n+1; i++){
    itr = cols[i].begin();
    while(itr!=cols[i].end()){
      if(arr[i] > *itr)
	arr[i] = *itr;
      itr++;
    }
  }
  qsortcol(arr,1,n);
  
  cout << ct << endl;
  for(it=vect.begin(); it!=vect.end(); it++)
    cout << (*it).t << " " << (*it).i << " " << (*it).j << endl;
   return 0;
}
