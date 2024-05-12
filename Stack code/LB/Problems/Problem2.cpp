//reverse a string using stack;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="shanto";

    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
         st.push(s[i]);
    }
    string ans;
    while(!st.empty())
    {
        char x=st.top();
        ans.push_back(x);
        st.pop();
    }

    cout<<ans;




}
