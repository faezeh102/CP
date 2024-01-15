#include <iostream>

using namespace std;

 int power(int n , int m)
 {
 	int p=1;
 	for (int i=1; i<=n; i++){
	
	  p*=m;
	   
	 }
	 return p;
 }
 
 main()
 {
 	int t , k;
 	cout << " Enter  the number \n :"; 
 	cin >> t;
 	cout << " :";
	cin >> k;
 	cout << "\n answer : " << power(k,t);
 }