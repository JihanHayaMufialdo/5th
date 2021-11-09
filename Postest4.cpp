#include <iostream>
using namespace std;
int main(){
	
	int n,u;
	float x[n],t=0,r;
	
	cin >> n;
	for (int a=0;a<n;a++){
		cin >> x[a];
		t+=x[a];
	}
	 
	r=t/n;
	u=t*4000; 
	
	cout << "Rata-Rata : " << r << " ETH" << endl;
	cout << "Total ETH : " << t << " ETH" << endl;
	cout << "Dalam USD : " << "$" << u << endl;
}
