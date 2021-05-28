#include <iostream> 
#include <deque> 
  
using namespace std; 
 
void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
    deque <int> deck; 
	int x;
	cout<<"\nDEQUE";
	cout<<"\nEnter 5 elements:\n";
	for(int i=0;i<5;i++){
		cin>>x;
		deck.push_back(x);
	} 
    cout << "The deque deck is : "; 
    showdq(deck); 
  
    cout << "\ndeck.size() : " << deck.size(); 
    cout << "\ndeck.max_size() : " << deck.max_size(); 
  
    cout << "\ndeck.at(2) : " << deck.at(2); 
    cout << "\ndeck.front() : " << deck.front(); 
    cout << "\ndeck.back() : " << deck.back(); 
  
    cout << "\ndeck.pop_front() : "; 
    deck.pop_front(); 
    showdq(deck); 
  
    cout << "\ndeck.pop_back() : "; 
    deck.pop_back(); 
    showdq(deck); 
  
    return 0; 
}

