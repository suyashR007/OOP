#include<iostream>
using namespace std;
class binary{
	int a;
	public:
		binary(){a=0;}
		binary(int x)
		{
			a=x;
		}
		binary operator *(binary x);
		friend binary operator +(int x,binary y);
		binary operator -(int x);
		
		void display()
		{
			cout<<a;
		}
};
binary binary::operator *(binary x)
{
	return binary(a*x.a);	
}
binary operator + (int x, binary y)
{
	return binary(x+y.a);
}
binary binary:: operator -(int y)
{
	return binary(a-y);
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers on which you want to perform operations\n";
	cin>>n1>>n2;
	binary X(n1),Y(n2);
	cout<<"before operations : ";
	cout<<"X=";X.display();cout<<"  Y=";Y.display();cout<<"\n";
	cout<<"X=5+Y: ";
	X=5+Y;
	cout<<"X=";X.display();cout<<"  Y=";Y.display();cout<<"\n";
	cout<<"X=X*Y: ";
	X=X*Y;
	cout<<"X=";X.display();cout<<"  Y=";Y.display();cout<<"\n";
	cout<<"X=Y-5 :";
	X=Y-5;
	cout<<"X=";X.display();cout<<"  Y=";Y.display();cout<<"\n";
	return 0;
}

