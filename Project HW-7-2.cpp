#include <iostream>

using namespace std;

main() {
	
	int m,n,k,p;
	cout << " Please enter your number " << "\n" << ":" ;
	cin >> m;
	cout << ":";

	cin >> n;
	k=0;
	 if ( m>0 && n>0){
	   for (p=m; p>=n; p-=n){  
	    	
	      	k+=1;	
		    }   
   	     cout << " division is " << k << " and " << " modulus is "<< p ;
   	    }  
		     
	 else {
	 cout << "error!";
	}
 }	