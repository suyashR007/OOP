#include<iostream> 
using namespace std; 

class Base 
{ 
protected: 
   int x; 
public: 
  virtual void fun() = 0; 
  Base(int i) { x = i; } 
}; 
  
class Derived: public Base 
{ 
    int y; 
public: 
    Derived(int i, int j):Base(i) { y = j; } 
    void fun() { cout << "x = " << x << ", y = " << y; } 
}; 
  
int main()
{
	Derived d(6, 3); 
    d.fun(); 
    return 0; 
}

