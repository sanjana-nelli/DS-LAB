#include<stdio.h>
#include<conio.h>
int a[20][20],reach[20],n;
void dfs(int v) {
int i;
reach[v]=1;
for (i=1;i<=n;i++)
 if(a[v][i] && !reach[i]) {
printf("\n %d->%d",v,i);
dfs(i);
}
}
void main()
{
int i,j,count=0;
printf("\n Enter number of vertices:");
scanf("%d",&n);
for (i=1;i<=n;i++) {
reach[i]=0;
for (j=1;j<=n;j++)
  a[i][j]=0;
}
printf("\n Enter the adjacency matrix:\n");
for (i=1;i<=n;i++)
 for (j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
dfs(1);
printf("\n");
}
#output:
Enter number of vertices:2

 Enter the adjacency matrix:
1 2
3
4

 1->2
Enter number of vertices:3
Enter the adjacency matrix:
1 2 3
4 5 6
8 9 0

 1->2
 2->3