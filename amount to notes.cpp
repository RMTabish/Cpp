#include<iostream>
using namespace std;
int main()
{
	int amt,curr,r500,r100,r50,r20,r10,r5,r1;
	cout << "enter the amount" << endl;
	cin >> amt;
	cout << "enter the currency " << endl;
	cin >> curr;
	switch (curr)
	{
	case 500:
		r500 = amt /500;
		if (r500 <= 200)

		{
			r500 = r500;
			amt = amt % 500;
			r100 = amt / 100;
			amt = amt % 100;
			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;
		}
		else if (r500 > 200)
		{
			r500 = 200;
			int r = (amt / 500) - 200;
			amt = (amt+r % 500) ;
			r100 = amt / 100;
			amt = amt % 100;
			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;
	
		}

		break;
	case 100:
		r100 = amt / 100;
		if (r100 <= 200)

		{
			r500 = amt / 500;
			amt = amt % 500;

			r100 = amt / 100;
			amt = amt % 100;

			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;
			
		}
		else if (r100 > 200)
		{
			r500 = amt / 500;
			amt = amt % 500;
			r100 = 200;

			int r = (amt / 100) - 200;
			amt = (amt+r % 100) ;

			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;
		

		}
		break;
	case 50:
		r50 = amt / 50;
		if (r50 <= 200)

		{
			r500 = amt / 500;
			amt = amt % 500;

			r100 = amt / 100;
			amt = amt % 100;

			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;

		}
		else if (r50 > 200)
		{
			r500 = amt / 500;
			amt = amt % 500;
			r100 = amt/100;
			amt = amt % 100;

			r50 = 200;
			int r = (amt / 50) - 200;
			amt = (amt+r % 50) ;
            r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;


		}
		break;
	case 20:
		r20 = amt / 20;
		if (r20 <= 200)

		{
			r500 = amt / 500;
			amt = amt % 500;

			r100 = amt / 100;
			amt = amt % 100;

			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;

		}
		else if (r20 > 200)
		{
			r500 = amt / 500;
			amt = amt % 500;
			r100 = amt/100;
			amt = amt % 100;
			r50 = amt / 50;
			amt = amt % 50;
			r20 = 200;
			int r = (amt / 20) - 200;
			amt = (amt +r% 20) ;

            r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;


		}
		break;
	case 10:
		r10 = amt / 10;
		if (r10 <= 200)

		{
			r500 = amt / 500;
			amt = amt % 500;

			r100 = amt / 100;
			amt = amt % 100;

			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;

		}
		else if (r10 > 200)
		{
			r500 = amt / 500;
			amt = amt % 500;
			r100 = amt / 100;
			amt = amt % 100;
			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt/20;
			amt = amt % 20;
			r10 = 200;
			int r = (amt / 10) - 200;
			amt = (amt+r % 10);

			
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;


		}
		break;
	case 5:
		r5 = amt / 5;
		if (r5 <= 200)

		{
			r500 = amt / 500;
			amt = amt % 500;

			r100 = amt / 100;
			amt = amt % 100;

			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;

		}
		else if (r5 > 200)
		{
			r500 = amt / 500;
			amt = amt % 500;
			r100 = amt / 100;
			amt = amt % 100;
			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt/10;
			amt = amt % 10;
			r5 = 200;
			int r = (amt / 5) - 200;
			amt = (amt +r% 5) ;

			
			r1 = amt;


		}
		break;
	case 1:
		r1 = amt / 1;
		if (r1 <= 200)

		{
			r500 = amt / 500;
			amt = amt % 500;

			r100 = amt / 100;
			amt = amt % 100;

			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt / 10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			r1 = amt;

		}
		else if (r1 > 200)
		{
			r500 = amt / 500;
			amt = amt % 500;
			r100 = amt / 100;
			amt = amt % 100;
			r50 = amt / 50;
			amt = amt % 50;
			r20 = amt / 20;
			amt = amt % 20;
			r10 = amt/10;
			amt = amt % 10;
			r5 = amt / 5;
			amt = amt % 5;
			int r = (amt / 1) - 200;
			amt = (amt+r % 1) ;


			
			r1 = amt;


		}
		break;
}

cout<<"RS 500 :"<<r500<<endl;
cout<<"RS 100 :"<<r100<<endl;
cout<<"RS 50 :"<<r50<<endl;
cout<<"RS 20 :"<<r20<<endl;
cout<<"RS 10 :"<<r10<<endl;
cout<<"RS 5 :"<<r5<<endl;
cout<<"RS 1 :"<<r1<<endl;


return 0;

}
