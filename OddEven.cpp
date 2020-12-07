/*Arrange the odd and even separately Even one’s first,odd ones later
1,3,2,5,6,4,7,8,9
Output will be odd 1st and then even.*/


#include<bits/stdc++.h>

using namespace std;

void Seperate(int v[],int size)
{
    int l=0,r=size-1;
    while(l<r)
    {
    while(v[l]%2==0 && l<r)
        l++;
    while(v[r]%2!=0 && l<r)
        r--;
    
    if(l<r)
    {
        swap(v[l],v[r]);
        l++;
        r--;
    }

    }
}

int main()
{
   int v[]={1,3,2,5,6,4,7,8,9};
   vector<int>o;
   Seperate(v,9);
   sort(v,v+4);
   sort(v+4,v+9);
  
    for(int i=4;i<9;i++)
        o.push_back(v[i]);
    for(int i=0;i<4;i++)
        o.push_back(v[i]);
    for(int x:o)
        cout<<x;
}

/*
Output-

135792468
*/
