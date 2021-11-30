#include <iostream>
using namespace std;
int main(){
	
	string bintang[10] =
	{
	"*",
	" *",
	"  *",
	"   *",
	"    *",
	"     *",
	"      *",
	"       *",
	"        *",
	"         *",
	};
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout << bintang[i];
		}
		cout << "\n";
	}
}

