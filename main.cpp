#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x; //asking price
	int y; //selling price
	bool result;
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>x >>y;
	    
	    if(y > x)
	        cout <<"Profit" <<endl;
	        
	    else if(y == x)
	        cout <<"Neutral" <<endl;
	        
	    else
	        cout <<"Loss" <<endl;
	   
	}
	return 0;
}
