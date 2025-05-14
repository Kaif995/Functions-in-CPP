#include <iostream>
using namespace std;
void greeting(){ //void mean no data type!
	cout<<"hello guys"<<endl;
}
int radius(float pie,int c){
	
	float formula=c/(2*pie);

	return formula;
}
int main(){
	
	greeting();
	
	 float result = radius(3.142,67); // Store and use the returned value
    cout << "Radius formula result: " << result << endl; 
	return 0;
}



