#include <iostream>
using namespace std;

  main() {
  	int i,j,t[10],tmpnum,n;
  	 
  	cout << "Enter 9 number \n";
  	
  	for(i=0 ; i<9 ; i++){
  		cout << (1+i) << ": ";
  		cin >> t[i];
	  }
  	
	  for(j=0 ; j<9; j++){
	  	for(i=0; i<9-j ; i++){
	  		if(t[i] > t[i+1]){
	  			tmpnum=t[i];
	  			t[i]=t[i+1];
	  			t[i+1]=tmpnum;
			  }
		  }
	  }
	  cout << "\n Numbers in ascending order \n";
	   
	   for(i=0; i<10; i++){
 	   	cout << (1+i) <<":"<< t[i]<< "\n";
	   }
	    
	   
	    cout << "Enter 1 number \n";
	    cin >> t[0];
	     for(j=0 ; j<9 ; j++){
		    for(i=0 ; i<9-j ; i++){
	  		 
			    if(t[i] > t[i+1]){
	  			tmpnum=t[i];
	  			t[i]=t[i+1];
	  			t[i+1]=tmpnum;
			  }
		  }
	  }
	  cout << "\n Numbers in ascending order \n";
	   
	   for(i=0 ; i<10 ; i++){
	   	cout << (1+i) <<":"<< t[i] << "\n";
	   }
}