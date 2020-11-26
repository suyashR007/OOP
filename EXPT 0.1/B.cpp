#include<iostream>
#include<string>
using namespace std;
class info{
	int wardno;
	int num;
	public:
		info()
		{wardno=0;num=0;}
	    info(int w,int n)
	    {
	    	wardno=w;
	    	num=n;
		}
	    friend istream & operator >>(istream & x,info & y);
	    friend ostream & operator <<(ostream &x,info y);
};
 istream & operator >>(istream & x,info & y)
{
	cout<<"Please Enter ward no and no of covid positive persons respectively\n";
    x>>y.wardno>>y.num;
   	return x;
}
ostream & operator << (ostream &x,info y)
{
	x<<"WARD NO. : ";
	x<<y.wardno;
	x<<"  No. Of Covid Positive Patients : ";
	x<<y.num;
	return x;
}

int main()
{
	info s1,s2(1,20);
	
	cin>>s1;
	cout<<s1<<"\n"<<s2;
	
	return 0;
}

