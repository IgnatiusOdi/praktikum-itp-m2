#include <iostream>

using namespace std;

int main()
{
	int n1,n2,n3;
    cout<<"Warna 1	: ";
		cin>>n1;
	if(n1>=1  &&  n1<=5)
	{
		cout<<"Warna 2	: ";
			cin>>n2;
		if(n2>=1  &&  n2<=5)
		{
			cout<<"Warna 3	: ";
				cin>>n3;
			if(n3>=1  &&  n3<=5)
			{
				if((n1==1 && n2==1 && n3==1) || (n1==2 && n2==2 && n3==2) || (n1==3 && n2==3 && n3==3) || (n1==4 && n2==4 && n3==4) || (n1==5 && n2==5 && n3==5))
					cout<<"Hasil	: Warna Kembar 3x";
				else if((n1==3 && n2==4 && n3==5) || (n1==3 && n2==5 && n3==4) || (n1==4 && n2==3 && n3==5) || (n1==4 && n2==5 && n3==3) || (n1==5 && n2==3 && n3==4) || (n1==5 && n2==4 && n3==3))
					cout<<"Hasil	: Brown";
				else if((n1==3 && n2==5 && n3==5) || (n1==5 && n2==3 && n3==5) || (n1==5 && n2==5 && n3==3))
					cout<<"Hasil	: Navy";
				else if((n1==2 && n2==3 && n3==5) || (n1==2 && n2==5 && n3==3) || (n1==3 && n2==2 && n3==5) || (n1==3 && n2==5 && n3==2) || (n1==5 && n2==2 && n3==3) || (n1==5 && n2==3 && n3==2))
					cout<<"Hasil	: Magenta";
				else if((n1==1 && n2==2 && n3==2) || (n1==2 && n2==1 && n3==2) || (n1==2 && n2==2 && n3==1))
					cout<<"Hasil	: Light Grey";
				else
					cout<<"Hasil	: Warna belum ditemukan!";
			}
			else
				cout<<"Hasil	: Warna tidak dikenali";
		}
		else
			cout<<"Hasil	: Warna tidak dikenali";
	}
	else
		cout<<"Hasil	: Warna tidak dikenali";
    return 0;
}
