#include<stdio.h>

int a[20][20],q[20],visited[20],n,d=-1,e=-1;

void BFS(int v) 
{
  int i;
  for (i=0;i<n;i++)                                // check all the vertices in the graph
  {
    if(a[v][i] != 0 && visited[i] == 0) // adjacent to v and not visited
    {
      e=e+1;
      q[e]=i;                       // insert them into queue
      visited[i]=1;          // mark the vertex visited
      printf("%d  ",i);
    }
  }
  d=d+1;                             // remove the vertex at front of the queue
  if(d<=e)                           // as long as there are elements in the queue
  BFS(q[d]);                  // peform bfs again on the vertex at front of the queue
}main()
{
  int v,i,j;
  printf("\n Enter the number of vertices:");
  scanf("%d",&n);
  for (i=0;i<n;i++)                   
  {
    visited[i]=0;
  }
  printf("\n Enter graph data in matrix form:\n");
  for (i=0;i<n;i++)
    for (j=0;j<n;j++)
     scanf("%d",&a[i][j]);
  printf("\n Enter the starting vertex:");
  scanf("%d",&v);
  d=e=0;
  q[e]=v;
  printf("\n BFS traversal is:\n");
  visited[v]=1;                                     
  printf("%d   ",v);
   
  BFS(v);
  if(e != n-1)
      printf("\n BFS is not possible");
}