/*
  PROBLEM:
  If we list all natural numbers that are the required multiples of 3 or 5 of 10, we get 3, 5, 6, and 9. 
The sum of these floors is 23.

  Find the sum of all multiples of 3 or 5 of a submitted number.
*/
//kjnkjn
#include <iostream>

using namespace std;
bool multiples(int x);

int main() {
	
	int number;
	
	cin>>number;
	
	int multiplesTotal=0;
	    
    for (int i=1;i<number;i++){
    	if(multiples(i)){    		
    		multiplesTotal+=i;	   		
		}		
	}
	
	cout<<"Sum of multiples of 3 and 5 ="<<multiplesTotal;
	
    return 0;
}

bool multiples(int x){
	if(x%3==0||x%5==0){
		return true;
	}
	else{
		return false;
	}
}
