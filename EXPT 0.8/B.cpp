#include <iostream>
#include <list>   
#include<cstdlib>
using namespace std;

void display(list <int> & lst)
{
	list <int> :: iterator p;
	
	for(p=lst.begin(); p!=lst.end(); ++p)
		cout<< *p <<" ";		
	cout<<"\n";
}
int main()
{
	list <int> list1;		//empty list
	list <int> list2;	//empty list 
	
	int n;
	
	cout<<"\nEnter 3 elements for list1:\n";
	for(int i=0;i<3;i++)
	{
		cin>>n;
		list1.push_back(n);
	}
	
	cout<<"\nList 1 contents : ";
	display(list1);
	
	cout<<"\nEnter 3 elements for list2:\n";
	for(int i=0;i<3;i++)
	{
		cin>>n;
		list2.push_back(n);
	}
	
	cout<<"\nList 2 contents : ";
	display(list2);	
	
	list1.push_front(5);
	list1.push_back(9);
	
	cout<<"\nUpdated List 1 contents : ";
	display(list1);
	
	list2.pop_front();	//remove element at the front of list2
	
	cout<<"\nUpdated List 2 contents : ";
	display(list2);
	
	list <int> lista, listb;
	
	lista = list1;
	listb = list2;
	
	
	list1.merge(list2);	
	
	cout<<"\nMerged unsorted List 1 contents with list2 : ";
	display(list1);
	

	lista.sort();
	listb.sort();
	
	lista.merge(listb);
	
	cout<<"\nMerged sorted lists: ";
	display(lista);
	
	
	lista.reverse();
	
	cout<<"\nReversed Lista contents : ";
	display(lista);
	
	return 0;
}


