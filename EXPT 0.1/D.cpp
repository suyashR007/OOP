
#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char *p;
	int len;
	public:
		String(){len=0;p=0;}      
		String(const char * S)    
		{
			len=strlen(S);
        	p=new char[len+1];
        	strcpy(p,S);
		}
		String (const String & S)   
		{
			len=S.len;
			p=new char[len+1];
			strcpy(p,S.p);
		}
		~String(){delete p;	}  
		friend String operator +(const String & S1,const String & S2);
		friend int operator ==(const String & S1,const String & S2);
		friend int operator <=(const String & S1,const String & S2);
		void display()           
		{
			cout<<p;
		}
		
};
String operator +(const String & S1,const String & S2)
{
	String temp;
	temp.len=S1.len+S2.len;
	temp.p=new char[temp.len+1];
	strcpy(temp.p,S1.p);
	strcat(temp.p,S2.p);
	return temp;
}
int operator ==(const String & S1,const String & S2)
{
	if(strcmp(S1.p,S2.p)==0)
	    return 1;
	else
	    return 0;
}
int operator <=(const String & S1,const String & S2)
{
	int m,n;
	m=strlen(S1.p);
	n=strlen(S2.p);
	if(m<=n)
	    return 1;
	else
	    return 0;
}
int main()
{
	String s1("Suyash "),s2("Rane");
	cout<<"s1= ";s1.display();
	cout<<"s2= ";s2.display();
	
	cout<<"\nAddition operation on strings : ";
	String s=s1+s2;
	cout<<"\ns= ";s.display();
	cout<<"\ns1= ";s1.display();
	cout<<"\ns2= ";s2.display();
	cout<<"\n";
	
	String s3=s;
	cout<<"\nCompare two strings : \n";
	if(s3==s)
	{
		s.display();cout<<" and ";s3.display(); cout<<" are same\n";
	}	
	else
	{
		s.display();cout<<" and ";s3.display(); cout<<" are not same\n";
	}
	    
	cout<<"\nCompare the lengths : \n";
	if(s1<=s)
	{
		s1.display();cout<<" is smaller than ";s.display();
	}
	else
	{
		s.display();cout<<" is smaller than ";s1.display();
	}
	
	
	return 0;
}

