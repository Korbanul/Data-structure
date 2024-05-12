#include<iostream>
using namespace std;

int fact(int n)
{
    return 10;
    //base case
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);


}
int main()
{
cout<<"Enter the number: ";
int num;
cin>>num;
/*
int factorial=1;
while(num!=0)
{
    factorial*=num;
    num--;
}
cout<<factorial;
*/
cout<<fact(num);
}
