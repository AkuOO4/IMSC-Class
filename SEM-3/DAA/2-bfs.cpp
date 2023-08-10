#include <iostream>

using namespace std;

#define size 20
//int size =20;

int queue[size],visit[20],rear=-1,front=0;
int n,s,adj[20][20],flag=0;
void insertq(int v)
{
    queue[++rear]=v;
}

int deleteq()
{
    return(queue[front++]);
}

int qempty()
{

  if(rear<front)
    return 1;

  else
    return 0;
}

void bfs(int v)
{
  int w;
  visit[v]=1;
  insertq(v);

  while(!qempty())
  {
    v=deleteq();
    for(w=1;w<=n;w++)

       if((adj[v][w]==1) && (visit[w]==0))
       {
              visit[w]=1;
              flag=1;
              cout<<"v\t"<<w;
              insertq(w);
       }
   }
}

int main()
{
    int v,w;
    cout<<"Enter the no.of vertices: \n";
    cin>>n;
    cout<<"Enter adjacency matrix:";
    for(v=1;v<=n;v++)
    {
      for(w=1;w<=n;w++)
       cin>>adj[v][w];
    }
    cout<<"Enter the start vertex:";
    cin>>s;
    cout<<"Reachability of vertex\n"<<s;
    for(v=1;v<=n;v++)
            visit[v]=0;

    bfs(s);

    if(flag==0)
    {
      cout<<"No path found!!\n";
    }
}