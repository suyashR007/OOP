#include<iostream>
using namespace std;

int bsrch(int a[], int high,int low,int x){
	int mid=(low+high)/2;
	while(low<=high){
		if(a[mid]==x)
			return mid;
		if(a[mid]>x)
			low= mid+1;
		else
			high=mid-1;
		
		return -1;
	}

}


 int main(){
 	int a[20],n,sch;
 	cout<<"SIZE"<<endl;
 	cin>>n;
 	cout<<"Elements"<<endl;
 	for(int i=0;i<n;i++)
 		cin>>a[i];
 	cout<<"SEARCH=";
 	cin>>sch;
 	int result=bsrch(a,n,0,sch);
 	if(result==-1)
 		cout<<"Element NOT THERE\n";
 	else
 		cout<<"POSTION="<<++result;
 	
 	return 0;
 	
 }

