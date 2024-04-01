#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
   int i=0;
   while(i<n)
   {
     int star=i*2;
     int k=1;
     while(k<=n-i)
     {
        cout<<k;
        k++;
     }
     while(star>0)
     {
        cout<<"*";
        star--;
     }
     while(k-1>0)
     {
        cout<<k-1;
        k--;
     }
     i++;
     cout<<endl;
   }
}

int main()
{
    int n;
    cout<<"Enter the number of rows \n";
    cin>>n;
    pattern(n);
}