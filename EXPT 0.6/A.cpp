#include<iostream>
using namespace std;
template<class T>
void swap1(T &a,T &b)
{
	a = b-a;
	b = b-a;
	a = a+b; 
}
int main()
{
	int a,b;
	cout<<"Enter two int numbers"<<endl;
	cin>>a>>b;
	cout<<"a: "<<a<<"  b: "<<b<<endl;
	swap1(a,b);
	cout<<"After swapping"<<endl;
	cout<<"a: "<<a<<"  b: "<<b<<endl;


    float x,y;
	cout<<"Enter two floats"<<endl;
	cin>>x>>y;
	cout<<"a: "<<x<<"  b: "<<y<<endl;
	swap1(x,y);
	cout<<"After swapping"<<endl;
	cout<<"a: "<<x<<"  b: "<<y<<endl;
	
	
	char c1,c2;
	cout<<"Enter two characters"<<endl;
	cin>>c1>>c2;
	cout<<"a: "<<c1<<"  b: "<<c2<<endl;
	swap1(c1,c2);
	cout<<"After swapping"<<endl;
	cout<<"a: "<<c1<<"  b: "<<c2<<endl;
	
	
	double d1,d2;
	cout<<"Enter two doubles"<<endl;
	cin>>d1>>d2;
	cout<<"a: "<<d1<<"  b: "<<d2<<endl;
	swap1(d1,d2);
	cout<<"After swapping"<<endl;
	cout<<"a: "<<d1<<"  b: "<<d2<<endl;

}


