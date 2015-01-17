#include<iostream>
using namespace std;

int flag = 0;               // flag = 1 - asc sort, flag = 2 - desc sort, flag = 3 - unsort
int arr[100010];
int n;

void check(){
  // acs sort
  flag = 1;
  for(int i=0; i<n-1; i++){
    if(arr[i] > arr[i+1]){
      flag = 0;
      break;
    }
  }
  if(flag == 0){
    //descending sort
    flag = 2;
    for(int i=0; i<n-1; i++){
      if(arr[i] < arr[i+1]){
	flag = 0;
	break;
      }
    }
    if(flag == 0)
      flag = 3;
  }
}
      
int main(){
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  
  if(n==1 || n==2)
    cout << -1 << endl;
  else{
    check();
    if(flag == 1 || flag == 2){         // asc sort || desc sort
      int i;
      for(i=0; i<n-1; i++)
	if(arr[i] != arr[i+1]){
	  cout << i+1 << " " << i+2 << endl;
	  break;
	}
      if(i==n-1)
	cout << -1 << endl;
    }
    else{                              // unsorted
      flag = 0;
      int i=0, j=0;
      while(flag!=3){
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
	j++;
	while(i<n){
	  while(j<n){
	    if(arr[j]!=arr[i])
	      break;
	    j++;
	  }
	  if(j!=n)
	    break;
	  i++;
	  j=i+1;
	}
	if(i==n)
	  break;
	//swap i and j
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	check();
      }
      if(i==n)
	cout << -1 << endl;
      else
	cout << i+1 << " " << j+1 << endl;
    }
  }
  return 0;
}

