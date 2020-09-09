/*
  A palindromic number reads the same both ways. The largest palindrome made 
from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>;

using namespace std;

bool palindromeControl(int number);

int main(){
	
	 int large_palindrome_number=0;
	 
	 for(int i=100;i<=1000;i++){
	 	
	 	for(int j=100;j<=1000;j++){
	 		
	 		if(palindromeControl(i*j)){
	 			
	 			large_palindrome_number=i*j;
			 }	 		
		 }
	 }
	 	 
	cout<<large_palindrome_number;
	
	return 0;
}

bool palindromeControl(int number){
	
	bool palindrome_accept=true;
	
	int step=0;
	
	for(int i=10;number%i>1;i*10){
		
		step=step+1;
	}
	
	int palindrome[step];
	
	int palindrome_reverse[step];
	
	for(int i=0;i<step;i++){
		
		int dividing=1;
		
		int dividing2=1;
		
		for (int j=1;j<step;j++){
			
			dividing*=10;
		}		
		palindrome[i]=number%dividing2;
		
		number=number%dividing;		
	}
	
	for(int i=0;i<step;i++){
		
		if(palindrome[i]=!palindrome[step-1-i]){
			palindrome_accept=false;
		}
	}

	return palindrome_accept;	
}
