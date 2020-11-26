#include<iostream>
using namespace std;
class unary{
	int i;
	public:
	unary (){i=0;}	
	unary(int j)    
	{
		i=j;
	}
	unary operator ++ ();        
	unary operator ++ (int j);   
	unary operator -- ();        
	unary operator -- (int j);	
	
	void display ()
	{
		cout<<i<<endl;
	}
};
unary unary::operator ++()
{
	unary temp;
	temp.i=++i;
	return temp;
}
unary unary::operator ++(int j)
{
	unary temp;
	temp.i=i++;
	return temp;
}
unary unary::operator --()
{
	unary temp;
	temp.i=--i;
	return temp;
}
unary unary::operator --(int j)
{
	unary temp;
	temp.i=i--;
	return temp;
}
int main()
{
	unary a;
	int num;
	cout<<"enter the number to see operations \n";
	cin>>num;
	unary b(num);
    cout<<"a= ";a.display();cout<<"b= ";b.display();
	cout<<"prefix increment:a=++b\n";
	a=++b;
	cout<<"a= ";a.display();cout<<"b= ";b.display();
    cout<<"postfix increment:a=b++\n";
    a=b++;
    cout<<"a= ";a.display();cout<<"b= ";b.display();
	cout<<"prefix decrement:a=--b\n";
	a=--b;
	cout<<"a= ";a.display();cout<<"b= ";b.display();
    cout<<"postfix decrement:a=b--\n";
    a=b--;
    cout<<"a= ";a.display();cout<<"b= ";b.display();
	
	return 0;
}


