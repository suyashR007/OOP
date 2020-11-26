#include<iostream>
	#include<iomanip>
	using namespace std;
	template<class T>
	class vector{
	    int n;
	    T *array;
		    public:
		          vector()
		          {
		          	n=0;
		          	array=NULL;
				  }
				  vector(int n)
				  {
				  	this->n = n;
				  	array = new T[n];
				  }
				  
				  friend istream& operator>>(istream &a,vector &v)
	{
		
		for(int i=0;i<v.n;i++)
		{
			a>>v.array[i];
		}
		return a;
	}
				  
	friend ostream& operator<<(ostream &a,vector &v)
	
	{
		
		for(int i=0;i<v.n;i++)
		{
			a<<v.array[i]<<setw(5);
		}
		
		return a;
	}
				  void modify()
				  {
				  	int pos,c;
					T num,ele;
					cout<<"1- Modify by position"<<endl;
					cout<<"2- Modify by value"<<endl;
				  	cin>>c;
					switch(c){
					case 1:
					cout<<endl<<"Enter the pos where u want to change the element"<<endl;
				  	cin>>pos;
				  	if(pos>=n)
				  	{
				  	   cout<<"Not possible"<<endl;
						return;	
					}
				  	cout<<"Enter new element"<<endl;
				  	cin>>num;
					array[pos-1]=num;
					break;
					case 2:
					cout<<endl<<"Enter the element to be changed"<<endl;
				  	cin>>ele;
				  	cout<<"Enter new element"<<endl;
				  	cin>>num;
				  	for(int i=0;i<n;i++)
				  	{
				  		if(array[i]==ele)
				  		{
				  		      array[i]=num;
							  break;
									
						}
					}
						
				  }
				  }
				 
	};
	
	
	
	int main()
	{
		
		int n;
		cout<<"Enter size"<<endl;
		cin>>n;
		vector<int> v  = vector<int>(n);
		
		cout<<"Enter integer Elements\n";
		cin>>v;
	    cout<<"Int Vector : ";
		cout<<v<<endl;
	    v.modify();
		cout<<"After Modification: ";
		cout<<v<<endl;
		vector<char> vc  = vector<char>(n);
		
		cout<<"Enter char Elements\n";
		cin>>vc;
		cout<<"Char Vector : ";
	    cout<<vc<<endl;;
	    vc.modify();
		cout<<"After Modification: ";
		cout<<vc;
	}

