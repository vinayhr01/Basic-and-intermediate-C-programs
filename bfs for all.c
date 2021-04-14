/*11. Design, Develop and implement a program in c for the following
operation on Grapg(G) of cities

a. Create a Graph of N cities using Adjancy matrix
b. Print all the nodes reachable from a given statring node in a digraph uisng
DFS/ BFS method    */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void bfs(int n,int source,int a[][SIZE],int s[][SIZE]);
void main()
{
    int n;
    int a[SIZE][SIZE];
    int source;
    int visited[SIZE][SIZE];
    int i,j;

    printf("Enter the No of vertices\n");
    scanf("%d",&n);
    
    printf("\n");
    
    printf("Enter the adjacency matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe adjacency matrix is \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
        for(j=0;j<n;j++)
            visited[i][j]=0;
    
    for(source=0; source<n; source++)
        bfs(n,source,a,visited);
    
    printf("\nThe cities which are reachable are\n\n");
        
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            if(visited[i][j]==0)
                printf("%d-->not reachable from %d\n",j,i);
            else
                printf("%d-->reachable from %d\n",j,i);
        }
        printf("\n");
    }
}

void bfs(int n, int source, int a[][SIZE],int visited[][SIZE])
{
    int q[SIZE];
    int f=0;
    int r=0;
    int u,v;
    visited[source][source]=1;
    q[r]=source;
    while(f<=r)
    {
        u=q[f++];
        for(v=0; v<n; v++)
        {
            if(a[u][v]==1 && visited[u][v]==0)
            {
                q[++r]=v;
                visited[u][v]=1;
            }
        }
    }
}
