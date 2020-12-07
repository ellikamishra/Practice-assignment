/*
Write program for below
Count of Words
{hello, hi, hello , Good , Bad, Good}
O/p will be 
hello -2 
hi - 2
Good - 2
Bad - 1


*/


#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<string>v{"hello", "hi", "hello" , "Good" , "Bad", "Good"};
    set<string>s(v.begin(),v.end());
    for(string s1:s)
    {
         cout<<s1<<"-"<<count(v.begin(),v.end(),s1)<<"\n";
    }
    
   
    

    return 0;

}