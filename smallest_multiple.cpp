#include <iostream>;

using namespace std;

int main(){
	bool control=true;
	
	int smallest_multiple=1;
	
	bool control2=false;
	
	while(control){
		for(int i=1;i<21;i++){
			if(smallest_multiple%i != 0){
				control2=true;
				
			}
			
		}
		if(control2){
			smallest_multiple++;
		}
		else{
			control=false;
		}
		
	}
	cout<<smallest_multiple;
	
	return 0;
}
