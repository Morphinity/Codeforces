#include<iostream>
#include<queue>
#include<fstream>
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

class coord{
public:
  int x;
  int y;
  coord(){
    x = 0;
    y = 0;
  }
  coord(int xc,int yc){
    x= xc;
    y = yc;
  }
};

coord dest;
int n;
int dist[101][100005] = {0};
int max_y[101];
coord move[4] = {coord(1,0), coord(-1,0), coord(0,1), coord(0,-1)};

int bfs(coord u){
  queue<coord> q;
  q.push(u);
  coord curr;
  while(!q.empty()){
    curr = q.front();
    q.pop();
    if(curr.x == dest.x && curr.y == dest.y)
      return dist[curr.x][curr.y]-1;
    for(int i=0; i<4; i++){
      coord neigh = curr;
      neigh.x += move[i].x;
      neigh.y += move[i].y;
      if(neigh.y > max_y[neigh.x])
	neigh.y = max_y[neigh.x];
      if(neigh.x > 0 && neigh.x <= n && neigh.y > 0){
	if(!dist[neigh.x][neigh.y]){
	  dist[neigh.x][neigh.y] = dist[curr.x][curr.y]+1;
	  q.push(neigh);
	}
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
  int r1,r2,c1,c2;
  in >> r1 >> c1 >> r2 >> c2;
  dest.x = r2;
  dest.y = c2;
  coord curr(r1,c1);
  dist[curr.x][curr.y] = 1;
  out << bfs(curr) << endl;
  return 0;
}
