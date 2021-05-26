#include<iostream.h>
#include<conio.h>
#include<string.h>
void piglatin(char str[])
{
	int i,j,l=0,k=0;
	char ch[80];
	i=0;
	j=0;
	while(str[i]!='\0')
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
		       k=j=i;
			while(str[j]!='\0')
			{
				ch[l]=str[j];
				l++;
				j++;
				i++;
			}
			if(k==0)
			{
				ch[l++]='A';
				ch[l++]='Y';
				ch[l]='\0';
			}
			else
			{      	int r=0;
				while(r<k)
				{
					ch[l]=str[r];
					l++;
					r++;
				}
				ch[l++]='A';
				ch[l++]='Y';
				ch[l]='\0';
			}
		}
	i++;
	}
	cout<<"\n\tPiglatin String : "<<ch;
}
void main()
{
	clrscr();
	char str[80];
	cout<<"\n\tEnter String : ";
	cin>>str;
	strupr(str);
	piglatin(str);
	getch();
}