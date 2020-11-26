#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s=0;
	cout.width(5);
	cout<<"n";
	cout.width(15);
	cout<<"Inverse_of_n";
	cout.width(15);
	cout<<"Sum_of_terms"<<endl;
	for(int i=1;i<=10;i++)
	{
		s=s+1/(float)i;
		cout.width(5);
		cout<<i;
		cout.width(15);
		cout.precision(5);
		cout.setf(ios::scientific,ios::floatfield);
		cout<<(1/(float)i);
		cout.precision(4);
		cout.setf(ios::fixed,ios::floatfield);
		cout.width(15);
		cout<<s<<endl;
	}
	
}

