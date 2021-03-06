// CST116SRS05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

//to check whether the d1/m1/y1 is date prior to d2/m2/y2



bool check(int d1, int m1, int y1, int d2, int m2, int y2)
{
	if (y1<y2)

		return true;//yes d1 date comes before d2 date

	else if (y1>y2)

		return false;//dates entered are in reverse order

	else if (m1<m2)//both are equal years

	{

		return true;//yes d1 date comes before d2 date

	}

	else if (m2<m1)

		return false;//dates entered are in reverse order

	else if (d1<d2)

		return true;//yes d1 date comes before d2 date

	else return false;//nope, the dates entered are in reverse order

}

//check for leap year, for february dates

bool isLeap(int year)

{

	if (year % 100 == 0)

	{

		if (year % 4 == 0)

			return true;//it is leap

		else

			return false;//not a leap year

	}



	else if (year % 4 == 0)

	{

		return true;//leap year

	}

	return false;//not a leap year

}

void printDate(int &d1, int &m1, int &y1)

{

	//switch the month

	switch (m1) {

	case 1:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 31)//day is 31

		{

			d1 = 0;//set day as 0, since at the end of the function, it will be incremented to 1

			m1++;//increment month

		}

		break;

	case 2:

		if (d1 == 29)

		{

			if (isLeap(y1))

				cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

			d1 = 0;

			m1++;

		}

		else

			cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		break;

	case 3:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 31)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 4:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 30)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 5:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 31)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 6:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 30)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 7:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 31)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 8:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 31)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 9:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 30)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 10:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 31)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 11:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 30)

		{

			d1 = 0;

			m1++;

		}

		break;

	case 12:

		cout << setfill('0') << setw(4) << y1 << "-" << setfill('0') << setw(2) << m1 << "-" << setfill('0') << setw(2) << d1 << endl;

		if (d1 == 31)

		{

			d1 = 0;

			m1 = 1;

			y1++;

		}

		break;

	}

	d1++;//increment the day

}

//check if the two dates entered are same or not?

bool sameDate(int &d1, int &m1, int &y1, int &d2, int &m2, int &y2)

{

	if (y1 == y2 && m1 == m2 && d1 == d2)

		return true; //all fields are equal, means same date

	return false;//not same date

}

//print the dates

void print(const int d1, const int m1, const int y1, const int d2, const int m2, const int y2)

{

	//check if dates entered are in correct order

	bool isFirst = check(d1, m1, y1, d2, m2, y2);



	int d1_c = d1, d2_c = d2, m1_c = m1, m2_c = m2, y1_c = y1, y2_c = y2;



	if (isFirst)

	{

		//are in correct order

		while (!sameDate(d1_c, m1_c, y1_c, d2_c, m2_c, y2_c))

		{

			printDate(d1_c, m1_c, y1_c);

		}

	}

	else {

		//they are in opposite order means d2,m2,y2 comes before d1,m1,y1

		while (!sameDate(d1_c, m1_c, y1_c, d2_c, m2_c, y2_c))

		{

			printDate(d2_c, m2_c, y2_c);

		}

	}



}

int main()

{

	//cout<<"-------------------Date format: YYYY MM DD ------------------------------------------------------------"<<endl<<endl;

	int d1, m1, y1, d2, m2, y2;

	//cout<<"Enter first date."<<endl;

	cin >> y1 >> m1 >> d1;

	//cout<<"Enter second date."<<endl;

	cin >> y2 >> m2 >> d2;

	//print the between dates

	print(d1, m1, y1, d2, m2, y2);

	cin.get();//hold the console screen
    return 0;
}

