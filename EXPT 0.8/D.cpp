#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <int> st;
	while(1){
		int ch;
		cout<<"\n\n1.Push\n2.Pop\n3.Element on top\n4.Display all\n5.Exit\n";
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"\nEnter element: ";
				int e;
				cin>>e;
				st.push(e);
				break;
			}
			case 2:{
				if(st.empty())	{ 
				   printf("\nEmpty");
				}
				else{
				cout<<endl<<st.top()<<" is popped"<<endl;
				st.pop();
				}
				break;
			}
			case 3:{
				if(st.empty()){ 
				   printf("\nEmpty");
				}else
			    cout<<"Element on top is : "<<st.top()<<endl;
				break;
			}
			case 4:{
				if(st.empty()){ 
				   printf("\nEmpty");
				}else{
				cout<<"\nStack is: ";	
			    stack<int> s=st;
				while(!s.empty()){
				   cout<<" "<<s.top();
				   s.pop();	
				}
				break;
			}
			case 5: exit(1);
			default:
				cout<<"\ninvalid choice";
			}
		}	
	}
}


