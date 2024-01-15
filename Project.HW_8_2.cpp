#include <iostream>

using namespace std;

 main() {
 	int A[5] , B[5];
 	int i;
 	
 	for(i=0 ; i<5 ; i++){
 		cout << "A" << (1+i) << ": ";
 		cin >> A[i] ;
		 cout << "\t  B" << (1+i) << ": ";
		cin >> B[i];
	 }
	  cout << " \n------------------\n";
	  
 	for(i=0 ; i<5 ; i++){
 		
	    cout << " \n A" << (1+i) << ": " <<B[i] <<" \n    \t B" << (1+i) << ": "<< A[i] ;
	   
 		
	 }
        cout << "\n ;) ";

}