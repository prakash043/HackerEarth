// https://www.hackerearth.com/problem/algorithm/margana-is-an-anagram/
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int T,i,len1,len2,flag,arr1[26],arr2[26];
    string s1,s2;
    cin>>T;
    while(T--)
    {
        flag=0;
        cin>>s1>>s2;
        len1=s1.size();
        len2=s2.size();
        if(len1!=len2)
            cout<<"No\n";
        else
        {
            for(i=0;i<26;i++)
                arr1[i]=arr2[i]=0;
            for(i=0;i<len1;i++)
                arr1[s1[i]-97]++;
            for(i=0;i<len2;i++)
                arr2[s2[i]-97]++;
            for(i=0;i<26;i++)
                if(arr1[i]!=arr2[i])
                {
                    flag=1;
                    break;
                }
            if(flag==0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
