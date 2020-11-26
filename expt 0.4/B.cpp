#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char c,s[100];
	int i,a,d,ch;
	i=0;
	cin.get(c);
	
	do{
	s[i] = c;
    cin.get(c);
    i++;
	
    }while(c!='^');
	int n = strlen(s);
	i=a=d=ch=0;
	while(i<n)
	{
		
		if(s[i]=='\n')
		  d++;
		if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
		  a++;
		if(s[i]>='a'&&s[i]<='z'||(s[i]>='A'&&s[i]<='Z')||s[i]>='0'&&s[i]<='9') 
		   ch++;
		i++;
	}
	cout.setf(ios::left,ios::adjustfield);
	cout.width(17);
	cout<<"Number of lines";
	cout.width(17);
	cout<<"Number of words";
	cout.width(21);
	cout<<"Number of characters"<<endl;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(13);
	cout<<d;
	cout.width(17);
	cout<<a;
	cout.width(22);
	cout<<ch;
}

