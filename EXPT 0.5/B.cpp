#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <conio.h>
using namespace std;
class Directory
{
	char name[40];
	long long int tel_num;
		public:
	void getdata();
	void showdata();
	char *get_name()
{
 	return name;
}
void update(char *nm,long long int telno)
{
	tel_num=telno;
	strcpy(name,nm);
}
};
void Directory :: getdata()
{
	cout<<"Enter Name : ";
	cin.ignore();
	cin.getline(name,40);
	cout<<"Enter Phone No :" ;
	cin>>tel_num;
}
void Directory:: showdata()
{
	
	cout<<setw(20)<<left<<"name"<<setw(20)<<right<<"phone number"<<endl;
	cout<<setw(20)<<left<<name<<setw(10)<<right<<"-"<<tel_num<<endl;

}
int main()
{
	Directory user;
	fstream file;
	file.open("PHONE.txt", ios::in | ios::out | ios:: trunc);
	char ch,nm[20];
	long long int telno;
	int choice,found=0, cnt=0;
	while(1)
	{
		cout<<"1) Add New Record\n";
		cout<<"2) Display All Records\n";
		cout<<"3) Update Telephone No\n";
		cout<<"4) Exit.\n";
		cout<<"Make your choice : ";
		cin>>choice;
	switch(choice)
	{
	case 1 : 
		user.getdata();
		cin.get(ch);
		file.write((char *) &user, sizeof(user));
			break;
	case 2 : 
		file.seekg(0,ios::beg);
		cout<<"\n"<<setw(10)<<"NAME"<<setw(20)<<"TELEPHONE NO."<<endl;
		while(file.read((char *) &user, sizeof(user)))
		{
		if(!file.eof())
		user.showdata();
		}
		file.clear();
			break;
	case 3 :
		cout<<"\n\nEnter Name : ";
		cin>>nm;
		file.seekg(0,ios::beg);
		found=0;
		while(file.read((char *) &user, sizeof(user)))
		{
		cnt++;
		if(!strcmp(nm,user.get_name()))
		{
		found=1;
			break;
		}
	}
	file.clear();
	if(found==0)
		cout<<"\n\n---Record Not found---\n";
	else
	{
		int location = (cnt-1) * sizeof(user);
		cin.get(ch);
	if(file.eof())
		file.clear();
		cout<<"Enter New Telephone No : ";
		cin>>telno;
		file.seekp(location);
		user.update(nm,telno);
		file.write((char *) &user, sizeof(user));
		file.flush();
	}
	break;
	case 4 :
		file.close();
		goto end;
		default: cout<<"\aPlease make a correct choice!";
		}
			cout<<"\n\n\n";
		}
		end: exit(1);
	return 0;
	}

