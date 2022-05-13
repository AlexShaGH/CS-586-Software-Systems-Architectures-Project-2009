// ATMComponent.cpp : Defines the entry point for the console application.
// Test driver for ATM1 and ATM2 components

#include "stdafx.h"
#include "iostream"
#include "ATM1.h"
#include "ATM2.h"

#include <conio.h>
#include <ctype.h>

using namespace std; 

int _tmain(int argc, _TCHAR* argv[])
{
	char ch,ch1;

	ch='0';

	// ATM selection
	while ((ch !='1') && (ch !='2')) {
		cout<< "  Please enter 1 for ATM1 or 2 for ATM2" << endl;
		ch = _getch();
	}

	switch (ch)// branch according to selected ATM
	{
		case '1':// ATM1
			{
				ATM1* atm1 = new ATM1();
				int p,y,a,d,w,x;

				system("cls");
				cout<< "                          ATM-1" << endl;
				cout<< "                  MENU of Operations" << endl;
				cout<< "          0. card(int,int,int)" << endl;
				cout<< "          1. login(int)" << endl;
				cout<< "          2. pin(int)" << endl;
				cout<< "          3. deposit(int)" << endl;
				cout<< "          4. withdraw(int)" << endl;
				cout<< "          5. balance()" << endl;
				cout<< "          6. exit()" << endl;
				cout<< "          q. Quit the demo program" << endl;
				cout<< "  Please make a note of these operations" << endl;
				cout<< "           ATM-1 Execution" << endl;
				ch1='1';
				while (ch1 !='q') {
					cout<< "  Select Operation: "<<endl;
					cout<<"0(card),1(login),2(pin),3(deposit),4(withdraw),5(balance),6(exit)"<<endl;
					ch1 = _getch();

					switch (ch1) { 
					case '0':   //card
						cout<<"  Operation:  card(int p, int y, int a)"<<endl;
						cout<<"  Enter value of the parameter p:"<<endl;
						cin>>p;
						cout<<"  Enter value of the parameter y:"<<endl;
						cin>>y;
						cout<<"  Enter value of the parameter a:"<<endl;
						cin>>a;
						atm1->card(p,y,a);
						break;

					case '1':  //login
						cout<<"  Operation:  login(int y)"<<endl;
						cout<<"  Enter value of the parameter y:"<<endl;
						cin>>y;
						atm1->login(y);
						break;

					case '2':  //pin
						cout<<"  Operation:  pin(int x)"<<endl;
						cout<<"  Enter value of the parameter x"<<endl;
						cin >> x;
						atm1->pin(x);
						break;

					case '3':  // deposit
						cout<<"  Operation:  deposit(int d)"<<endl;
						cout<<"  Enter value of the parameter d:"<<endl;
						cin >> d;
						atm1->deposit(d);
						break;

					case '4':  // withdraw
						cout<<"  Operation:  withdraw(int w)"<<endl;
						cout<<"  Enter value of the parameter w:"<<endl;
						cin >> w;
						atm1->withdraw(w);
						break;

					case '5':  // Balance
						cout<<"  Operation:  balance()"<<endl;
						atm1->balance();
						break;

					case '6':  // exit
						cout<<"  Operation:  exit()"<<endl;		
						atm1->exit();
						break;
					};// end switch
				}; //end while
			} // end ATM1 case
			break;
		case '2':// ATM2
			{
				ATM2* atm2 = new ATM2();
				string p, y, x;
				float a,d,w;

				system("cls");
				cout<< "                          ATM-2" << endl;
				cout<< "                  MENU of Operations" << endl;
				cout<< "          0. CARD(string,string,float)" << endl;
				cout<< "          1. login(string)" << endl;
				cout<< "          2. PIN(string)" << endl;
				cout<< "          3. DEPOSIT(float)" << endl;
				cout<< "          4. WITHDRAW(float)" << endl;
				cout<< "          5. BALANCE()" << endl;
				cout<< "          6. exit()" << endl;
				cout<< "          q. Quit the demo program" << endl;
				cout<< "  Please make a note of these operations" << endl;
				cout<< "           ATM-2 Execution" << endl;
				ch1='1';
				while (ch1 !='q') {
					cout<< "  Select Operation: "<<endl;
					cout<<"0(CARD),1(login),2(PIN),3(DEPOSIT),4(WITHDRAW),5(BALANCE),6(exit)"<<endl;
					ch1 = _getch();

					switch (ch1) { 
						case '0':   //card
							cout<<"  Operation:  CARD(string p, string y, float a)"<<endl;
							cout<<"  Enter value of the parameter p:"<<endl;
							cin>>p;
							cout<<"  Enter value of the parameter y:"<<endl;
							cin>>y;
							cout<<"  Enter value of the parameter a:"<<endl;
							cin>>a;
							atm2->CARD(p,y,a);
							break;

						case '1':  //login	
							cout<<"  Operation:  login(string y)"<<endl;
							cout<<"  Enter value of the parameter y:"<<endl;
							cin>>y;
							atm2->login(y);
							break;

						case '2':  //pin
							cout<<"  Operation:  PIN(string x)"<<endl;
							cout<<"  Enter value of the parameter x"<<endl;
							cin >> x;
							atm2->PIN(x);
							break;

						case '3':  // deposit
							cout<<"  Operation:  DEPOSIT(float d)"<<endl;
							cout<<"  Enter value of the parameter d:"<<endl;
							cin >> d;
							atm2->DEPOSIT(d);
							break;

						case '4':  // withdraw
							cout<<"  Operation:  WITHDRAW(float w)"<<endl;
							cout<<"  Enter value of the parameter w:"<<endl;
							cin >> w;
							atm2->WITHDRAW(w);
							break;

						case '5':  // Balance
							cout<<"  Operation:  BALANCE()"<<endl;
							atm2->BALANCE();
							break;

						case '6':  // exit
							cout<<"  Operation:  exit()"<<endl;		
							atm2->exit();
							break;
					};// end switch
				}; //end while
		}
		break;
	}

	return 0;
}

