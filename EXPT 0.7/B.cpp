#include<iostream>
#include<iomanip>
#include<exception>
#include<fstream>
using namespace std;
void social(char *name,int age, char div)
{
	int m=0,n,s=0;
	if(name==NULL)
	{
		throw(name);
		return;
	}
	if(div!='A'&&div!='B' )
	{
		throw(div);
		return;
	}
	cout<<"Enter no of subjects"<<endl;
	cin>>n;
    cout<<"Enter Marks of "<<n<<" subjects"<<endl;
    for(int i=0;i<n;i++)
       cin>>m,s=s+m;
	if(n==0)
	{
		throw(n);
		return;
	}
    	
	cout<<"Name: "<<setw(15)<<right<<name<<endl;;
	cout<<"Age: "<<setw(15)<<right<<age<<endl;
	cout<<"Div: "<<setw(15)<<right<<div<<endl;
	cout<<"Per: "<<setw(13)<<right<<(s/(n*100))*100<<" %"<<endl<<endl<<endl;
}

int main()
{
	char *name=NULL;
	int age;
	char div;
	name = new char[20];
	cout<<"enter name"<<endl;
	gets(name);
	cout<<"Enter age"<<endl;
	cin>>age;
	cout<<"Enter Division"<<endl;
	cin>>div;
	ofstream File(name);
		
		File<<name<<endl;
		File<<age<<endl;
		File<<div<<endl;
	try{
	    social(name,age,div);
		ifstream file(name);
		file.exceptions(ifstream::badbit|ifstream::failbit);
		
			char a[100];
			cout<<endl<<"Reading file"<<endl;
			while(file.getline(a,100,'\n')){
				cout<<a<<endl;
		}
		
		
			
	}
	catch(char *ptr)
	{
		cout<<"Null pointer caught"<<endl;
	}
	catch(int i)
	{
		cout<<"Denomiator is zero"<<endl;
		
	}
	catch(char c){
		cout<<"Character error caught"<<endl;
		
	}
    catch(const ifstream::failure& e)
	{
		cout<<"Exception:"<<e.what();
	}
}


