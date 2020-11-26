#include <iostream> 
using namespace std; 

class base { 
public: 
	void A() { cout << "A->A\n"; } 
    virtual void B() { cout << "A->B\n"; } 
	virtual void C() { cout << "A->C\n"; } 
    void D() { cout << "A->D\n"; } 
}; 

class derived : public base { 
public: 
	void A() { cout <<"D->A \n"; } 
	void B(){ cout << "D->B\n"; } 
	void C(int x) { cout <<"D->C\n"; 
	} 
}; 

int main() 
{  base *b1;
   base b2;
   b1 = &b2;
   cout<<"Base functions is called"<<endl;
   b1->A();
   b1->B();
   b1->C();
   b1->D();
   derived d;
   b1 = &d;
   cout<<"virtual(dervied functions is called)"<<endl;
   b1->A();
   b1->B();
   b1->C();
   b1->D();
}  

