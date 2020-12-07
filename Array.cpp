/*

Input Array : [2, 3, 5, 4] Output Array: [60, 40, 24, 30] Output [i] = Multiplication of all elements except 'i'th element.
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>v{2,3,4,5};
    int p=accumulate(v.begin(),v.end(),1,multiplies<int>());
    vector<int>o;
    for(int i=0;i<v.size();i++)
    {
        o.push_back(p/v[i]);
    }

    for(int x:o)
    {
        cout<<x<<" ";
    }
}

/*
Output-
60 40 30 24
*/
