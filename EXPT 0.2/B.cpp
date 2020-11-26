#include<iostream>
using namespace std;
class Student{
	int id;
	string name,clas;
	public:
		void getdata()
		{
			cout<<"Enter name"<<endl;
			cin>>name;
			cout<<"Enter id"<<endl;
			cin>>id;
			cout<<"Enter class"<<endl;
			cin>>clas;
		}
		void display()
		{
			cout<<"Name: "<<name<<" Id: "<<id<<" Class: "<<clas<<endl;
		}
};
class Sports:public virtual Student{

    protected:
	int Smarks;
	public:
		void getdata()
		{
			cout<<"Enter Sports marks"<<endl;
			cin>>Smarks;
		}
		void display()
		{
			cout<<"Sports MArks: "<<Smarks;
		}
};

class test:public virtual Student{
	protected:
	float sub[6];
	public:
		void getdata()
		{
			cout<<"Enter 6 subjects marks"<<endl;
			for(int i=0;i<6;i++)
			    cin>>sub[i];
		}
		void display()
		{
			cout<<"Subject marks are"<<endl;
			for(int i=0;i<6;i++)
			   cout<<"\t"<<sub[i];
			cout<<endl;   
		}
};
class result:public test,public Sports{
	float mainresult;
	public:
		void calculateres(){
			mainresult=0;
			for(int i=0;i<6;i++)
			   mainresult+=sub[i];
			mainresult +=Smarks ; 
			mainresult= (mainresult/615)*100;  
		}
		void getdata()
		{
			Student::getdata();
			test::getdata();
			Sports::getdata();
		}
		void display()
		{
			Student::display();
			Sports::display();
			cout<<"\nResult is: "<<mainresult<<endl;
			
		}
}; 
int main()
{
          int n;
		  cout<<"Enter no of students"<<endl;
		  cin>>n;
		  result *r = new result[n];
		  
		  for(int i=0;i<n;i++)
		  {
	          r[i].getdata();
	          r[i].calculateres();
		  }
		  for(int i=0;i<n;i++)
		  {
		  	cout<<"-----------------------------------------------"<<endl;
		  	r[i].display();
		    cout<<"-----------------------------------------------"<<endl;
		  }
		    
		  	
}


