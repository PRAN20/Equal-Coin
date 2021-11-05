#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin >> test;
	while(test--)
	{
	    long long x, y;
	    cin>>x>>y;
	    if (x ==0 && y%2==0)
	    {
	        cout << "YES"<<endl;
	        continue;
	    }
	    else if(x ==0 && y%2!=0)
	    {
	        cout<< "NO"<<endl;
	        continue;
	    }
	    if((x +2*y)%2==0)
	    {
	        cout << "YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
