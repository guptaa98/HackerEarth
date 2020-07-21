#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i,z,o;
    z=0;
    o=0;
    char ch;
    for(i=0;i<strlen(str);i++)
    {
        ch=str[i];
        if(ch=='0' && o!=6)
        {
            z=z+1;
            if(z==6)
            {
                break;
            }
            o=0;
        }
        else if(ch=='1' && z!=6)
        {
            o=o+1;
            if(o==6)
            {
                break;
            }
            z=0;
        }
    }
        if(o==6 || z==6)
        {
            printf("Sorry, sorry!");
        }
        else
        {
            printf("Good luck!");
        }
}
