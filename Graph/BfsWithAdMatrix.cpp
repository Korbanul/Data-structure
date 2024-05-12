#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<int>q;
int node;
int root=2;
int visited[7]={0};
                  // 0 1 2 3 4 5 6
int AdMatrix[7][7]={{0,1,1,1,0,0,0}, //0 // row wise node && column wise vertexes.
                    {1,0,0,1,0,0,0}, //1
                    {1,0,0,1,1,0,0}, //2
                    {1,1,1,0,1,0,0}, //3
                    {0,0,1,1,0,1,1}, //4
                    {0,0,0,0,1,0,0}, //5
                    {0,0,0,0,1,0,0}}; //6
            cout<<root<<" " ;
            q.push(root);
            visited[root]=1;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                for(int j=0;j<7;j++)
                {
                   if(AdMatrix[node][j]==1 && visited[j]==0)
                   {
                       q.push(j);
                       cout<<j<<" ";
                       visited[j]=1;
                   }
                }
            }
}
