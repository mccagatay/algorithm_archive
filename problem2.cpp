#include <iostream>;

using namespace std;

int main(){

	int number1=1;
	
	int number2=2;
	
	int evenValued=0;
	
	bool what=true;
	
	while(number2<4000000&&number1<4000000){
		
		if(what){			
			number1+=number2;
			
			what=false;
			
			if(number1%2==0){
				evenValued+=number1;
			}			
		}
		
		else{
			number2+=number1;
			
			what=true;
			
			if(number2%2==0){
				evenValued+=number2;
			}
		}		
	}	
	cout<<evenValued+2;
	
	return 0;
}
