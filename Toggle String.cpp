#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char s[100];
	gets(s);
	for (int i=0;i<strlen(s);i++)
	{
		if (isupper(s[i]))
		{
			s[i]=tolower(s[i]);
		}
		else
		{
			s[i]=toupper(s[i]);
		}
	}
	puts(s);

}
