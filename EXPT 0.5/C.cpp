#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;
class Student{
	char name[100],branch[100],address[100];
	long long int rollno;
public:
	Student()
	{
		strcpy(name,"");
		strcpy(branch,"");
		strcpy(address,"");
		rollno=0;
	}
	void getinfo(){
		fflush(stdin);
		cout<<"Enter your name"<<endl;
		gets(name);
		cout<<"Enter branch"<<endl;
		gets(branch);
		cout<<"Enter addresss"<<endl;
		gets(address);
		cout<<"Enter roll_no"<<endl;
		cin>>rollno;
	}


	void display()
	{
	
		cout<<left<<setw(15)<<"name"<<setw(15)<<"branch"<<setw(25)<<"address"<<setw(15)<<"roll no"<<endl;
		cout<<left<<setw(15)<<name<<setw(15)<<branch<<setw(25)<<address<<setw(4)<<right<<rollno<<endl;
	
	}
	char *getName()
	{
		return name;
	}
	long long int getRn()
	{
		return rollno;
	}

};
int main()
{
	Student *s[100];
	int n=0;
	while(1){
		int c;
		cout<<endl<<setw(4)<<right<<"1-"<<left<<"Add Students data";
		cout<<endl<<setw(4)<<right<<"2-"<<left<<"Search Students data";
		cout<<endl<<setw(4)<<right<<"3-"<<left<<"Update Students data";
		cout<<endl<<setw(4)<<right<<"4-"<<left<<"Exit"<<endl;
		cin>>c;
		switch(c){
			case 1:{
				
               s[n] = new Student();
                s[n]->getinfo();
				
				
				
                
				ofstream F(s[n]->getName(),ios::trunc|ios::binary);
				F.clear();
			   
				F.write((char *)&(*s[n]),sizeof(*s[n]));
				s[n]->display();
				n++;
				break;
			}
			case 2:
			{
                Student temp;
				char name[100];
				cout<<"Enter name"<<endl;
				cin.ignore();
				gets(name);	
				ifstream F(name);
				if(F.good()){
					
					F.read((char *)&temp,sizeof(temp));
					temp.display();
					

				}
				else{
					cout<<" this stdudent is not there in our record"<<endl;
				}
				break;
			}
			case 3:
			{

				char name[100];
				long long int roll;
				cout<<"Enter rollno"<<endl;
				cin>>roll;
				int i=0;
				for(i=0;i<n;i++)
				{
					if(s[i]->getRn()==roll)
					{
						strcpy(name,s[i]->getName());
						break;
					}
				}
				
				ofstream F(name,ios::trunc);
				if(F.good()){
					cout<<"You may change any detail except Name"<<endl;
					s[i]->getinfo();
					F.write((char *)&(*s[i]),sizeof(*s[i]));
					
					rename(name,s[i]->getName());
				}
				else{
					cout<<"No such Student has been recorded"<<endl;
				}

				break;
			}
			default:
			exit(0);

		}
	}
}

