#include<iostream>
using namespace std;
class Sum;
class alpha{
	int a;
	float b;
	protected:
	alpha(int a,float b)
	{
		cout<<endl<<"Alpha Constructed"<<endl;
		 this->a = a;
		 this->b = b;
	}
	void display()
	{
		cout<<endl<<"ALPHA"<<endl;
		cout<<"\ta :"<<a<<"\tb : "<<b<<endl;
	}
	~alpha()
	{
		cout<<"ALPHA DESTROYED"<<endl;
	}
};

class beta:protected alpha{
	int a;
	double b;
	protected:
	beta(int a,double b,int c,float e):alpha(c,e)
	{
		cout<<endl<<"Beta Constructed"<<endl;
		 this->a = a;
		 this->b = b;
	}
	~beta()
	{
		cout<<"Beta DESTROYED"<<endl;
	}
	void display()
	{
		cout<<endl<<"BETA"<<endl;
		cout<<"\ta :"<<a<<"\tb : "<<b<<endl;
	}
};
class Sum{
	int a,b,c,f;
	float d;
	double e;
	public:
		Sum(int a,int b,float d,double e,int c,int f)
		{
			cout<<endl<<"SUM Constructed"<<endl;
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			this->e = e;
			this->f = f;
		}
		~Sum()
		{
			cout<<"SUM destroyed"<<endl;
		}
		void display(){
			cout<<endl<<"SUM = "<<(a+b+c+d+e+f)<<endl;
		}
};
class Gamma:protected beta //Multilevel Inheritance
{
	int a;
	float b;
	Sum s; //Containership
	public:
	Gamma(int a, int b,int c,float d,int e,double f):beta(c,d,e,f),s(a,b,d,f,e,c) //Constructors for mutiple Inheritance are called in order they are derivrd
	{
		cout<<endl<<"Gamma Constructed"<<endl;
		this->a = a;
		this->b = b;
	}
	~Gamma()
	{
		cout<<"GAMMA DESTROYED"<<endl;
	}
	void display()
	{
		alpha::display();
		beta::display();
		
		cout<<endl<<"GAMMA"<<endl;
		cout<<"\ta :"<<a<<"\tb : "<<b<<endl;
		s.display();
	}
};

int main()
{
	cout<<"Below is an exmaple of Use on constructors and order of execution of "<<endl<<"\t\t Constructors in Multilevel Inheritance along with Containership :"<<endl;
	Gamma g(1,2,3,4,5,6);
	g.display();
	
}


