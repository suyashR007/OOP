#include<iostream>
using namespace std;

template<class T>
void div(T a,T b)
{
	try{
	
	if(b==0)
	{
		throw b;
	}
    else {
    	cout<<"Res: "<<(a/b)<<endl;
	}
   }
   catch (T b){
   	cout<<"Rethrowing"<<endl;
   	throw ;
   }
}
int main()
{
	int a,b;
	float x,y;
	cout<<"Enter two int nos"<<endl;
	cin>>a>>b;
	cout<<"Enter two float nos"<<endl;
	cin>>x>>y;
	
	try{
		div<int>(a,b);
		div<float>(x,y);
		
	}
	catch(int a)
	{
		cout<<"Caught!! Denominator is zero for integers||"<<endl;
	}
	catch(float b)
	{
		cout<<"Caught!! Denominator is zero for floats||"<<endl;
	}
}

