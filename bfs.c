include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v) {
for (i=1;i<=n;i++)
 if(a[v][i] && !visited[i])
{
printf("\n %d->%d",v,i);
  q[++r]=i;
}
if(f<=r)
{
visited[q[f]]=1;
bfs(q[f++]);
}
}
void main()
{
int v;
printf("\n Enter the number of vertices:");
scanf("%d",&n);
for (i=1;i<=n;i++) {
q[i]=0;
visited[i]=0;
}
printf("\n Enter graph data in matrix form:\n");
for (i=1;i<=n;i++)
 for (j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
printf("\n Enter the starting vertex:");
scanf("%d",&v);
bfs(v);
}
#output:
#Enter the number of vertices:3

 Enter graph data in matrix form:
1 2 3
12 6 7
8 9 1

 Enter the starting vertex:2

 2->1
 2->2
 2->3
 1->2
 1->3
 2->3
 #Enter the number of vertices:2
#Enter graph data in matrix form:
1 2
2 4
Enter the starting vertex: 2

 2->1
 2->2
 1->2
