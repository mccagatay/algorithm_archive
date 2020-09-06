/*
The prime factors of 13195 are 5, 7, 13 and 29.

Send what is the biggest prime factor of a number?

*/

#include <iostream>;

using namespace std;

int main(){
	
	int lagest_factor=1;
	
	int number;
	
	cin>>number;
	
	bool prime_factor=true;
	
	for(int i=3;i<number;i++){
		
		for(int j=2;j<i;j++){
			
			if(i%j==0){
				prime_factor=false;
			}
			
		}
		
		if(prime_factor){
			
			if(i>lagest_factor){
				lagest_factor=i;
			}
		}
		
		else{
			prime_factor=true;
		}		
	}
	
	cout<<lagest_factor;
	
	return 0;
}
