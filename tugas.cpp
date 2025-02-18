#include <iostream>

using namespace std;

int main()
{
    long agk;
	int a,b,n1,n2,n3;
	int tg,bl,th;
	cout<<"Input		: ";
		cin>>agk;
	if(agk/999999999>0)
		cout<<endl<<"Output		: Invalid Length";
	else if(agk/99999999>0)
	{
		n1 = agk/1000000;
		a = n1/100;
		b = n1%100;
		n2 = agk/10000%100;
		n3 = agk%10000;
		if(a==1||a==2)
		{
			if(n2==11||n2==17||n2==18)
			{
				cout<<endl<<"Output"<<endl;
				if(a==1)
				{
					n1 = (a*10+9)*100+b;
					cout<<"Tahun Ajaran	: "<<n1<<endl;
				}
				else
				{
					n1 = a*1000+b;
					cout<<"Tahun Ajaran	: "<<n1<<endl;
				}
				if(n2==11)
					cout<<"Jurusan		: S1 Informatika"<<endl;
				else if(n2==17)
					cout<<"Jurusan		: S1 Desain Komunikasi Visual"<<endl;
				else
					cout<<"Jurusan		: S1 Sistem Informasi Bisnis"<<endl;
				cout<<"No Urut		: "<<n3;
			}
			else
				cout<<endl<<"Output		: Invalid Major";
		}
		else
			cout<<endl<<"Output		: Invalid Year";
	}
	else if(agk/9999>0)
	{
		if(agk/999999>0)
		{
			tg = agk/1000000;
			bl = agk/10000%100;
			th = agk%10000;
		}
		else
		{
			tg = agk/10000;
			bl = agk/100%100;
			th = agk%100+2000;
		}
		if((tg<1||tg>31) && (bl<1||bl>12))
			cout<<endl<<"Output		: Invalid Date and Month";
		else if((tg<1||tg>31) && (bl==1||bl==3||bl==5||bl==7||bl==8||bl==10||bl==12))
			cout<<endl<<"Output		: Invalid Date";
		else if((tg<1||tg>30) && (bl==4||bl==6||bl==9||bl==11))
			cout<<endl<<"Output		: Invalid Date";
		else if((tg>=1&&tg<=31) && (bl<1||bl>12))
			cout<<endl<<"Output		: Invalid Month";
		else if((bl==2 && (th%400==0||(th%400!=0&&th%100!=0&&th%4==0)) && (tg<1||tg>29)) || (bl==2 && (th%400!=0&&th%100==0 || (th%4!=0&&th%100!=0&&th%400!=0)) && (tg<1||tg>28)))
		{
			cout<<endl<<"Output		: Invalid Date";
		}
		else
		{
			cout<<endl<<"Output"<<endl;
			if(tg<10)
				cout<<"Tanggal		: 0"<<tg<<endl;
			else
				cout<<"Tanggal		: "<<tg<<endl;
			if(bl==1)
				cout<<"Bulan		: Januari"<<endl;
			else if(bl==2)
				cout<<"Bulan		: Februari"<<endl;
			else if(bl==3)
				cout<<"Bulan		: Maret"<<endl;
			else if(bl==4)
				cout<<"Bulan		: April"<<endl;
			else if(bl==5)
				cout<<"Bulan		: Mei"<<endl;
			else if(bl==6)
				cout<<"Bulan		: Juni"<<endl;
			else if(bl==7)
				cout<<"Bulan		: Juli"<<endl;
			else if(bl==8)
				cout<<"Bulan		: Agustus"<<endl;
			else if(bl==9)
				cout<<"Bulan		: September"<<endl;
			else if(bl==10)
				cout<<"Bulan		: Oktober"<<endl;
			else if(bl==11)
				cout<<"Bulan		: November"<<endl;
			else if(bl==12)
				cout<<"Bulan		: Desember"<<endl;
			cout<<"Tahun		: "<<th<<endl;
		}
	}
	else if(agk==0)
		cout<<endl<<"Output		: Invalid Date and Month";
	else
		cout<<endl<<"Output		: Invalid Length";
    return 0;
}
