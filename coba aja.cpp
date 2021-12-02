#include <iostream>
//#include <ncurses\ncurses.h>
using namespace std;

int main(){

//initscr();

	string arr[18][32];
	int x,y;
	
	//STORAGE OF THE MAP
	
	for( x=0; x<18; x++){
		for(y=0; y<32; y++){
			cout << arr[x][y];
		}
	}
 
 	//DESIGNING THE MAP
 	
 	for(x=0; x<18; x++){
		for(y=0; y<32; y++){	
		
			if(x==0||x==32){
				arr[x][y] = "#";
			}
			
			else if(y==0||y==32){
				arr[x][y] = "|";
			}
			
			else if(x==5||x==9){
				arr[x][y] = "#";
			}
			
//			else{
//				
//				arr[x][y] = ".";
//			}
		}
 	}
 	
 	//PRINTING THE MAP
 	
 	for(x=0; x<15; x++){
		for(y=0; y<15; y++){
			cout << arr[x][y] << " ";
		}
			cout << endl;
	}
	
//	refresh();
//	getch();
//	endwin();
}
	

