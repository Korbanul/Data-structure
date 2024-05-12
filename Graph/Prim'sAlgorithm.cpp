#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfvertex=5;
  int AdMatrix[NoOfvertex][NoOfvertex]={{0,2,4,6,8}, //0 // row wise node && column wise vertexes.
                                        {2,0,10,0,14}, //1
                                        {4,10,0,12,0}, //2
                                        {6,0,12,0,5}, //3
                                        {8,14,0,5,0}}; //4

//SETTING ALL THE WEIGHT MAX;
     int weight[NoOfvertex];
     for(int i=0;i<NoOfvertex;i++)
     {
         weight[i]=100;
     }

//SETTING ALL THE MINIMUM SPANNINF TREE NODE FALSE;
     bool MST[NoOfvertex]={false};

//SETTING ALL THE PARENT -1;
     int parent[NoOfvertex];
     for(int i=0;i<NoOfvertex;i++)
     {
         parent[i]=-1;
     }

     weight[0]=0;
     parent[0]=-1;
     int MIN=weight[0];
   //  MST[0]=true;
   priority_queue<int,vector<int>,greater<int>>pq;
   pq.push(MIN);
     for(int j=0;j<NoOfvertex;j++)
     {
         //FINDING MINIMUM WEIGHT EVERY TIME BEFORE FIND ADJACENCY MATRIX
             weight[j]=pq.top();
             MIN=pq.top();
             pq.pop();
         //FINDING ADJACENT VERTICES
          for(int i=0;i<NoOfvertex;i++)
            {
                    if(AdMatrix[MIN][i]>0) //inserting weight in weight arr;
                    {
                        if(weight[i]> AdMatrix[MIN][i])
                            {
                                pq.push(AdMatrix[MIN][i]);
                                parent[i]=MIN;
                            }
                    }
            }
     }








    cout<<" Cost's::: ";
     for(int i=0;i<NoOfvertex-1;i++)
     {

     // cost+=weight[i];
     cout<<weight[i]<<" ";

     }


}
