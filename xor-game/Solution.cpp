#include<iostream>
using namespace std;
int main()
{
   int a,b,c,max,i,j;
   cin>>a>>b;
   max=a^a;
   for(i=a;i<=b;i++)
   {
  for(j=i;j<=b;j++)
  {	c=i^j;
    if(c>max)
      max=i^j;
  }
   }
   cout<<max<<endl;
   return 0;
}
