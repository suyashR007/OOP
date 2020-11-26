#include<iostream>
using namespace std;
class vector{
	int *v;
	int n;
	public:
		vector(int num);
		friend istream & operator >> (istream & in,vector & x);
		friend ostream & operator << (ostream & in,vector & x);
		friend vector operator * (int x,vector & y);
		friend vector operator *(vector & x,int y);
		friend vector operator +(vector & x,vector & y);
		
};
vector::vector(int num)
{
	n=num;
	v=new int[num];
	for(int i=0;i<n;i++)
	    v[i]=0;
}
istream & operator >> (istream & in,vector & x)
{
	for(int i=0;i<x.n;i++)
	{
		in>>x.v[i];
	}
	return in;
}
ostream & operator << (ostream & out,vector & x)
{
	for(int i=0;i<x.n;i++)
	{
		out<<"\t"<<x.v[i]<<"\t";
	}
	return out;
}
vector operator * (int x,vector & y)
{
	vector temp(y.n);
	for(int i=0;i<y.n;i++)
	    temp.v[i]=x*y.v[i];
	return temp;
	
}
vector operator * (vector & x,int y)
{
	vector temp(x.n);
	for(int i=0;i<x.n;i++)
	    temp.v[i]=x.v[i]*y;
	return temp;
	
}
vector operator +(vector & x,vector & y)
{
	if(x.n==y.n)
	{
		vector temp(x.n);
		for(int i=0;i<x.n;i++)
		    temp.v[i]=x.v[i]+y.v[i];
		return temp;
	}
	else
	    cout<<"Addition of unequal vectors not possible\n";
	
}
int main()
{
	char *arr;
	int num;
	cout<<"Enter the number of elements : ";
	cin>>num;
	vector v(num),v1(num),v2(num),v3(num),v4(num);		
	cout<<"Enter the elements of v1: ";
	cin>>v1;
	cout<<"Enter the elements of v2: ";
    cin>>v2;
    cout<<"v1= "<<v1<<"\nv2= "<<v2;
	cout<<"\nv3=2*v1\n";
	v3=2*v1;
	cout<<"v1= "<<v1<<"\nv3= "<<v3;
	cout<<"\nv4=v2*2\n";
	v4=v2*2;
	cout<<"v2= "<<v2<<"\nv4= "<<v4;
	cout<<"\nv=v3+v4\n";
	v=v3+v4;
	cout<<"v= "<<v<<"\nv3= "<<v3<<"\nv4= "<<v4;
	return 0;
}

