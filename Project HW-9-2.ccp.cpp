#include <iostream>

using namespace std;

 main() {
 	int f[10];
 	int i,j,fmin,smin;
 	
	 cout << "enter 10 ELEMENT \n";
 	
	 for(i=0 ; i<10 ; i++){
	 	cout << (1+i) << ": ";
	 	cin >> f[i];
	 }
	 
	 fmin=f[0];
	 smin=f[0];
	 for(i=0 ; i<10 ; i++){
	 		if(f[i]<fmin){
					smin=fmin;
					fmin=f[i]; 
				 
			}
		}

	 cout << smin;
}