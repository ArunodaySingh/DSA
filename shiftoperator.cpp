#include<bits/stdc++.h>
using namespace std;
int main()
{
    uint64_t n=1111111110010011011;
    int result=0;
    int i=0;
    while(n!=0)
    {
       int digit=n%10;
       if(digit)
       {
       result=result+pow(2,i);
       }
       n=n/10;
       i++;
    }
    cout<<result<<endl;;
}