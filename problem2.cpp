/*
 Each new term in the Fibonacci sequence is generated by adding the 
previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

 By considering the terms in the Fibonacci sequence whose values 
do not exceed four million, find the sum of the even-valued terms

*/

#include <iostream>;

using namespace std;

int main(){

	int number1=1;
	
	int number2=2;
	
	int evenValued=0;
	
	bool control=true;
	
	while(number2<4000000&&number1<4000000){
		
		if(control){			
			number1+=number2;
			
			control=false;
			
			if(number1%2==0){
				evenValued+=number1;
			}			
		}
		
		else{
			number2+=number1;
			
			control=true;
			
			if(number2%2==0){
				evenValued+=number2;
			}
		}		
	}	
	cout<<evenValued+2;
	
	return 0;
}
