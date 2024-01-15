#include <iostream>

using namespace std;

  main() {
  	int n,i,t;
  	cout << " please enter your number " << "\n" << ":";
  	cin >> n;
  	t=0;
  	 for(i=2 ; i<=n ; i++){
  	 	if(n%i==0)
  	 	t+=i;
  	 }
        cout << "answer is :" <<  t <<"\t" << ":)";
}