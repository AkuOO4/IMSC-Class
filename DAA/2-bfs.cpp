#include <iostream>
using namespace std;

int size = 20;

int queue[20];
int visit[20];
int rear=-1;
int front=0;

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
    for(w=1;w<=n;w++){

       if((adj[v][w]==1) && (visit[w]==0))
       {
              visit[w]=1;
              flag=1;
              cout<<v<<"\t"<<w;
              insertq(w);
       }
   }
}
}

int main()
{
    int v,w;
    int ch;
    cout<<"hardcoded or manual";
    cin>>ch;
    if (ch==1){
    cout<<"Enter the no.of vertices:\n";
    cin>>n;
    
    cout<<"Enter adjacency matrix:\n";
    for(v=1;v<=n;v++)
    {
      for(w=1;w<=n;w++){
       cin>>adj[v][w];
      } 
    }
    }

    else{
      int value[5][5]={{1,0,1,0,1},
                        {1,1,0,1,1},
                        {0,0,1,1,1},
                        {0,1,1,0,0},
                        {0,0,1,1,1}};

      for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
          adj[i][j]=value[i][j];
        }
      }
    }
    cout<<"Enter the start vertex:";
    cin>>s;
    cout<<"Reachability of vertex \n"<<s;
    for(v=1;v<=n;v++){
            visit[v]=0;
    }

    bfs(s);

    if(flag==0)
    {
      cout<<"No path found!!\n";
    }
}