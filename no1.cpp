#include <iostream>

using namespace std;

int main()
{
	long n;
	int a1,a2,a3,a4,a5,a6,a7,a8;
    cout<<"Input	: ";
    	cin>>n;
    if(n/99999999>0)
    	cout<<"Output	: Invalid Length";
	else if(n/9999999>0)
    {
    	a1 = n/10000000;
    	a2 = n/1000000%10;
    	a3 = n/100000%10;
    	a4 = n/10000%10;
    	a5 = n/1000%10;
    	a6 = n/100%10;
    	a7 = n/10%10;
    	a8 = n%10;
    	if(a1==a8 && a2==a7 && a3==a6 && a4==a5)
    		cout<<"Output	: Palindrom";
    	else
    		cout<<"Output	: Bukan Palindrom";
	}
	else if(n/999999>0)
	{
		a1 = n/1000000;
		a2 = n/100000%10;
		a3 = n/10000%10;
		a4 = n/1000%10;
		a5 = n/100%10;
		a6 = n/10%10;
		a7 = n%10;
		if(a1==a7 && a2==a6 && a3==a5)
    		cout<<"Output	: Palindrom";
    	else
    		cout<<"Output	: Bukan Palindrom";
	}
    else
    	cout<<"Output	: Invalid Length";
	
    return 0;
}
