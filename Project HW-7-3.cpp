#include <iostream>

using namespace std;

 main (){
 	
 	int n,p,t,i;
 	
 	cout << "please enter your number :)" << "\n" << ":";
 	
 	cin >> n;
 	
	 for (i=1 ; i<=n ; i++){	 
 	    if(n%i==0){
 		
 			p=i;
 			t+=p;
 			
		 } 
	 }
	        cout << " your answer is : " << t << " " << ":)" ;
}    