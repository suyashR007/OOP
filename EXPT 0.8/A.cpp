//Program Using Vector

 #include<iostream>
 #include<vector>
 using namespace std;
 
 int main()
 {
 	vector<int>v;
 	while(1){
 		cout<<"\n1.CREATE\n2.DISPLAY\n3.SIZE\n4.ADD_AT_END\n5.DELETE_LAST\n6.DELETE_RANGE_OF_ELEMENTS\n7.EXIT\n";
 		int in;
 		cin>>in;
 		switch(in)
 		{
 			case 1:
 				{
 					int x,n;
 					cout<<"Enter number of Elements\n";
 					cin>>n;
 					cout<<"Enter the Elements to be inserted\n";
 					for(int i=0;i<n;i++)
 						{
 							cin>>x;
 							v.push_back(x);
							 }	
					break;
				 }
			
			case 2:
				{
					for(int i=0;i<v.size();i++)
						cout<<" "<<v[i];
					break;
				}
			case 3:
				{
					cout<<"SIZE OF VECTOR:"<<v.size();
					break;
				}
			case 4:
				{
					int z;
					cout<<"Enter the Element to be added"<<endl;
					cin>>z;
					v.push_back(z);
					break;
				}
			case 5:
				{
					cout<<"Element DELETED\n";
					v.pop_back();
					break;
				}
			case 6:
				{
					int q,p;
					cout<<"Enter the RANGE\n";
					cin>>q>>p;
					v.erase(v.begin()+q-1,v.begin()+p);
					break;
				}
			case 7:
				exit(1);
			default:
				cout<<"INVALID INPUT\n";
		 }
	 }
 }
 
 
 
 
 
