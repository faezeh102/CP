#include <iostream>

using namespace std;

 main() {
 	int num [10];
 	int max,min,i;
 	float total = 0.0, average;
 	
 	for (i=0 ; i<10 ; i++){
 		cout << "enter  your number "<< (1+i) <<" : ";
  		cin >> num[i];
	 }
	  max=num[0];
	 for(i=0 ; i<10 ; i++ ){
	 	if(num[i] > max ){
	 		max = num[i];
		 }
	 }
	 
    	min=num[0];
	   for(i=0 ; i<10 ; i++ ){
	 	if(num[i] < min ){
	 		min = num [i];
		 }
	 }
	 
		total = max+ min;
	
	    average = total / 2;
	
	cout << "\n sum of  number = " << total << "\n";
	cout << "\n average of  input number = " << average << "\n";
}