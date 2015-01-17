#include<iostream>
#include<queue>
#include<fstream>
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

int max_y[101];                  // maximum length of each row
int dist[101][100005] = {0};     // bfs distance from start coord
int n;

class coord{
public:
  int x;
  int y;
  coord(){
    x = 0;
    y = 0;
  }
  coord(int xc,int yc){
    x = xc;
    y = yc;
  }
}dest;

int bfs(coord u){
  queue<coord> q;
  coord curr;
  q.push(u);
  while(!q.empty()){
    curr = q.front();
    q.pop();
    if(curr.x == dest.x && curr.y == dest.y)
      return dist[curr.x][curr.y]-1;
    // up coord
    coord neigh(curr.x-1,curr.y);
    if(neigh.x > 0){
      if(neigh.y > max_y[neigh.x])
	neigh.y = max_y[neigh.x];
      if(!dist[neigh.x][neigh.y]){
	dist[neigh.x][neigh.y] = dist[curr.x][curr.y]+1;
	q.push(neigh);
      }
    }
    // down coord
    coord down(curr.x+1,curr.y);
    neigh = down;
    if(neigh.x <= n){
      if(neigh.y > max_y[neigh.x])
	neigh.y = max_y[neigh.x];
      if(!dist[neigh.x][neigh.y]){
	dist[neigh.x][neigh.y] = dist[curr.x][curr.y]+1;
	q.push(neigh);
      }
    }
    // left coord
    coord left(curr.x,curr.y-1);
    neigh = left;
    if(neigh.y > 0){
      if(!dist[neigh.x][neigh.y]){
	dist[neigh.x][neigh.y] = dist[curr.x][curr.y]+1;
	q.push(neigh);
      }
    }
    // right coord
    coord right(curr.x,curr.y+1);
    neigh = right;
    if(neigh.y <= max_y[neigh.x]){
      if(!dist[neigh.x][neigh.y]){
	dist[neigh.x][neigh.y] = dist[curr.x][curr.y]+1;
	q.push(neigh);
      }
    }
  }
  return dist[dest.x][dest.y]-1;
}	     

int main(){
  in >> n;

  for(int i=1; i<=n; i++){
    in >> max_y[i];
    max_y[i]++;
  }

  int r1,c1,r2,c2;
  in >> r1 >> c1 >> r2 >> c2;
  dest.x = r2;
  dest.y = c2;             // destination coordinate
  coord curr(r1,c1);             // current coordinate
  dist[r1][c1] = 1;
  out << bfs(curr) << endl;
  return 0;
}

  
  
  
