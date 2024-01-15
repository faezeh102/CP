#include <iostream>

using namespace std;

 int gcd(int n , int m)
 {     
        while(n!=m)
	{
		n=n%m;
        m=n;
	}
    	 return n;	
 }
	
	
	main()
	{ 
	int x,y;
	cout << " Enter your number \n x:";
	cin >> x;
	cout << "y:";
	cin >> y;
	cout <<" \n gcd of " << x << " and " << y << " is : " << gcd(x,y);
	}