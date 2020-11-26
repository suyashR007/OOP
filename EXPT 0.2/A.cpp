#include<iostream>
using namespace std;
class Student{
	private:
		int id;
		string name,dob;
	protected:
		void getdata()
		{
			int id;
			string name,dob;
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"enter dob"<<endl;
			cin>>dob;
			this->id=id;
			this->dob = dob;
			this->name = name;
		}
		void display()
		{
			cout<<"Name: "<<name<<" ID: "<<id<<" DOB:"<<dob<<endl;
		}
	
	
};
class Medical:protected Student{
	
	string college;
	string currsemester;
	string specialisation;	
	public :
		void getdata()
		{
			Student::getdata();
			
			string college;
	        string currsemester;
	        string specialisation;
			cout<<"Enter College"<<endl;
			cin>>college;
			cout<<"Enter Semester"<<endl;
			cin>>currsemester;
			cout<<"Enter Specialisation"<<endl;
			cin>>specialisation;
			this->college = college ;
			this->currsemester = currsemester;
			this->specialisation = specialisation;
			
		}
		void display()
		{
			Student::display();
			cout<<"college: "<<college<<" Current Sem : "<<currsemester<<" Specialisation:"<<specialisation<<endl;
		}
};
class Arts:protected Student{
	string college;
	string currsemester;
	string specialisation;
    public:
		void getdata()
		{
			Student::getdata();
			string college;
	        string currsemester;
	        string specialisation;
			cout<<"Enter College"<<endl;
			cin>>college;
			cout<<"Enter Semester"<<endl;
			cin>>currsemester;
			cout<<"Enter Specialisation"<<endl;
			cin>>specialisation;
			this->college = college ;
			this->currsemester = currsemester;
			this->specialisation = specialisation;
			
		}
		void display()
		{
			Student::display();
			cout<<"college: "<<college<<" Current Sem : "<<currsemester<<" Specialisation:"<<specialisation<<endl;
		}
};	


class Engineering:protected Student{
	protected:
    	string college;
	    string currsemester;
	public:    
	    void getdata(string college,string currsemester,string specialisation)
		{
			this->college = college ;
			this->currsemester = currsemester;
		}
		void display()
		{
			Student::display();
			cout<<"College: "<<college<<" Current Sem : "<<currsemester<<" in Engineering"<<endl;
		}
	
};
class Mech:protected Engineering{
	string branch,rollno,section;
	public:
		void getdata()
		{
			Student::getdata();
			string rollno ,section;
			
			cout<<"Enter college: "<<endl;
			cin>>college;
			cout<<"Enter semester: "<<endl;		
			cin>>currsemester;
			branch = "Mechanical";
			cout<<"Enter rollno: "<<endl;
			cin>>rollno;
			cout<<"Enter section: "<<endl;
			cin>>section;
			this->rollno = rollno;
			this->section = section;
			
		}
		void display()
		{
			
			Engineering::display();
			cout<<"Branch: "<<branch<<" rollno : "<<rollno<<" section: "<<section<<endl;
		}
		
		
};
class Civil:protected Engineering{
	string branch,rollno,section;
	public:
	void getdata()
		{
			string rollno ,section;
			Student::getdata();
			cout<<"Enter college: "<<endl;
			cin>>college;
			cout<<"Enter semester: "<<endl;		
			cin>>currsemester;
			branch = "Civil";
			cout<<"Enter rollno: "<<endl;
			cin>>rollno;
			cout<<"Enter section: "<<endl;
			cin>>section;
			this->rollno = rollno;
			this->section = section;
			
		}
		void display()
		{
			
			Engineering::display();
			cout<<"Branch: "<<branch<<" rollno : "<<rollno<<" section: "<<section<<endl;
		}
		
		
};
class Computer:protected Engineering{
	string branch,rollno,section;
	public:
		void getdata()
		{
			string rollno ,section;
			Student::getdata();
			cout<<"Enter college: "<<endl;
			cin>>college;
			cout<<"Enter semester: "<<endl;		
			cin>>currsemester;
			branch = "Mechanical";
			cout<<"Enter rollno: "<<endl;
			cin>>rollno;
			cout<<"Enter section: "<<endl;
			cin>>section;
			this->rollno = rollno;
			this->section = section;
			
		}
		void display()
		{
			Engineering::display();
			cout<<"Computer: "<<branch<<" rollno : "<<rollno<<" section: "<<section<<endl;
		}
		
		
};
class ETC:protected Engineering{
	string branch,rollno,section;
	public:
		void getdata()
		{
			string rollno ,section;
			Student::getdata();
			cout<<"Enter college: "<<endl;
			cin>>college;
			cout<<"Enter semester: "<<endl;		
			cin>>currsemester;
			branch = "ETC";
			cout<<"Enter rollno: "<<endl;
			cin>>rollno;
			cout<<"Enter section: "<<endl;
			cin>>section;
			this->rollno = rollno;
			this->section = section;
			
		}
		void display()
		{
			Engineering::display();
			cout<<"Branch: "<<branch<<" rollno : "<<rollno<<" section: "<<section<<endl;
		}
		
		
};
int main()
{
	int N;
	cout<<"Enter the no of Students"<<endl;
	cin>>N;
	Arts *arts = new Arts[N];
	Arts *ap =arts;
	Medical *med= new Medical[N],*mp = med;
	Mech *mech = new Mech[N],*mc = mech;
	Civil *civil= new Civil[N],*cp = civil;
	Computer *comp= new Computer[N],*cm = comp;
	ETC *etc= new ETC[N],*ep=etc;
	int a,m,me,cv,et,co;
	a=m=me=cv=et=co=0;
	while(1)
	{
		int c;
		cout<<"1- Arts"<<endl;
		cout<<"2- Medical"<<endl;
		cout<<"3- Engineering"<<endl;
		cout<<"4-Display everything"<<endl;
    	cout<<"5-Exit"<<endl;		
		cin>>c;
		switch(c)
		{
			case 1:
				
				//
				//arts[a] = new Arts();
				
				arts->getdata();
				arts++;
				a++;
				break;
            case 2:
			
				
				
				med->getdata();
				med++;
				m++;
				break;
			case 3:
				char ch;
		        cout<<"a- Computer"<<endl;
		        cout<<"b- Civil"<<endl;
		        cout<<"c- Mechanical"<<endl;
			    cout<<"d-ETC"<<endl;	
				cin>>ch;
				switch(ch)
				{
					case 'a':
						
						
						
						comp->getdata();
						comp++;
						co++;
						break;
					case 'b':
						
						
						
						civil->getdata();
						civil++;
						cv++;
						break;
					case 'c':
						
						
						
						mech->getdata();
						mech++;
						me++;
						break;
					case 'd':
						
						
						etc->getdata();
						etc++;
						et++;
						break;			
				}
				break;
			case 4:
				cout<<"\t\t\t\tDISPLAY"<<endl;
				if(a>0)
				    cout<<"\t\tArts"<<endl;
			  	for(int i=0;i<a;i++)
			  	{
			  		cout<<"--------------------------------------------------------------------------------"<<endl;
			  	
					 (ap+i)->display();
			  	   cout<<"--------------------------------------------------------------------------------"<<endl;
				}
			    
			    if(m>0)
			         cout<<"\t\tMedicals"<<endl;
			    
				  for(int i=0;i<m;i++)
			  	{
			  		cout<<"--------------------------------------------------------------------------------"<<endl;
			  	      
					 (mp+i)->display();
			  	   cout<<"--------------------------------------------------------------------------------"<<endl;
				}
			    
				if(cv>0||co>0||me>0||et>0)
							cout<<"\t\tEngineering"<<endl;
				if(co>0)
				       cout<<" \t\t\t Computer"<<endl;
				for(int i=0;i<co;i++)
				{
					cout<<"--------------------------------------------------------------------------------"<<endl;
			  	    
					(cm+i)->display();
			  	    cout<<"--------------------------------------------------------------------------------"<<endl;
				
				}
			    
				if(cv>0)
				     cout<<" \t\t\t Civil"<<endl;
				for(int i=0;i<cv;i++)
				{
					cout<<"--------------------------------------------------------------------------------"<<endl;
			  	    
					(cp+i)->display();
			  	    cout<<"--------------------------------------------------------------------------------"<<endl;
				
				}
			     
				if(me>0)
				     cout<<" \t\t\t Mechanical"<<endl;
				for(int i=0;i<me;i++)
				{
					cout<<"--------------------------------------------------------------------------------"<<endl;
			  	    
					(mc+i)->display();
			  	    cout<<"--------------------------------------------------------------------------------"<<endl;
				
				}
			    
				if(et>0)
				      cout<<" \t\t\t ETC"<<endl;
				for(int i=0;i<et;i++)
				{
					cout<<"--------------------------------------------------------------------------------"<<endl;
			  	    
					(ep+i)->display();
			  	    cout<<"--------------------------------------------------------------------------------"<<endl;
				
				}
			
			
				break;
				default:
					exit(0);
				
		}
	}
	
}

