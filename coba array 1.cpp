#include <iostream>
using namespace std;
int main (){
	
	char nama[5] = "alif";
	
	for (char x:nama){
		if (x=='a'||x=='A'){
		cout << "*" ;
	} 
	else { 
		cout << x;
	}
}
