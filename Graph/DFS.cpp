#include<iostream>
using namespace std;

int visited[7]={0};
                  // 0 1 2 3 4 5 6
int AdMatrix[7][7]={{0,1,1,1,0,0,0}, //0 // row wise node && column wise vertexes.
                    {1,0,0,1,0,0,0}, //1
                    {1,0,0,1,1,0,0}, //2
                    {1,1,1,0,1,0,0}, //3
                    {0,0,1,1,0,1,1}, //4
                    {0,0,0,0,1,0,0}, //5
                    {0,0,0,0,1,0,0}}; //6

int DFS(int i)
    {
        cout<<i<<" ";
        visited[i]=1;
        for(int j=0;j<7;j++)
        {
            if(AdMatrix[i][j]==1&&visited[j]!=1)
            {
                DFS(j);
            }
        }
    }
int main()
{
    DFS(4);

}
