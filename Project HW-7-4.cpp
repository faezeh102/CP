#include <iostream>

using namespace std;

  main() {

   int n,m,i,t;
   cout << " please enter number  :) " << "\n" << ":";
   cin >> n;
   cout << ":";
   cin >> m;
    if (n>0 && m>0){
    	while(n!=m){
    		if(n>m){
    			n-=m;
			}
    			else{
				m-=n;
				}		
		    }
    	cout << " your answer is : " << n << "\t" << ":)";
   }
         else {
     	      cout << "error!" << "\t" << ":(";
	 }
}