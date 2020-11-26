#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
	int num;
	fstream f1,f2,f3;
	f1.open("File1",ios::in|ios::out|ios::trunc);
	f2.open("File2",ios::in|ios::out|ios::trunc);
	f3.open("File3",ios::in|ios::out|ios::trunc);
	cout<<"Enter 5 numbers in a file"<<endl;
	for(int i=0;i<5;i++){
		cin>>num,f1<<num<<endl;
	}
	cout<<"Enter 3 numbers in file\n";
	for(int i=0;i<3;i++){
		cin>>num,f2<<num<<endl;
	}
	long a,b;
	f1.seekg(0);
	f2.seekg(0);
	f1>>a;
	f2>>b;
	while(!f1.eof()){
		f3<<a<<endl;
		f1>>a;
	}
	while(!f2.eof()){
		f3<<b<<endl;
		f2>>b;
	}
	cout<<"....................................................."<<endl;
	f3.seekg(0);
	int arr[8];
	int i=0;
	while(f3>>arr[i]){
		i++;
	}
	f3.close();
	for(int k=0;k<i;k++){
		cout<<arr[k]<<endl;
	}
	for(int j=0 ;j<i;j++){
		for(int k=0;k<i-1-j;k++){
		
			if(arr[k+1]<arr[k]){
				int t=arr[k+1];
				arr[k+1]=arr[k];
				arr[k]=t;
			}
		}
	}
	f3.open("File3",ios::trunc|ios::out|ios::in);
	for(int k=0;k<i;k++)
	f3<<arr[k]<<endl;
	cout<<"in ascending order\n";
	f3.seekg(0);
	while(f3>>a){
		cout<<a<<"\t";
	}
	f1.close();
	f2.close();
	f3.close();
}

