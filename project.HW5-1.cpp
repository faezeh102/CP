#include <iostream>
using namespace std;

main() {
	
	int wage;
	
	cout << " please enter your wage : " << "\n" << "\n";
	cin >> wage;
	
	if (wage < 6000000 ) {	
	}
	
	else if ( wage >= 6000000  &&  wage < 8000000  ) {
	    wage = wage - ( 5 * wage / 100 );
	}
	
	else if ( wage >= 8000000 && wage < 10000000 ) {
		wage = wage - ( 10 * wage / 100 );
	}
	
	else if ( wage >= 10000000 && wage < 14000000) {
		wage = wage - ( 15 * wage / 100 );
	}
	
	else if ( wage >= 14000000 && wage < 18000000 ) {
		wage = wage - ( 20 * wage / 100 );
	}
	
	else if ( wage >= 18000000 && wage < 25000000) {
		wage = wage - ( 25 * wage / 100 );
	}
	
	else if ( wage >= 25000000) {
		wage = wage - ( 35 * wage / 100 );
	}
    
    cout << "\n" << " your wage is: " << wage << " $ ";
}