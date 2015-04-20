///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include<string>


using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int , int ) ;
	void print();
	friend bool operator>(Fraction &,Fraction &);
	void add(Fraction&, int);
	void add(int, Fraction&);

};

bool operator>(Fraction &x, Fraction &y)
{
	int xx, yy;
	xx = x.num / x.denom;
	yy = y.num / y.denom;

	return(xx > yy);
}

void Fraction::add(Fraction &v, int x)
{
	v.num = v.num+ v.denom*x;
	v.print();
cout << endl;
}

void Fraction::add(int x, Fraction &v)
{
	v.num = v.num + v.denom*x;
	v.print();
	cout << endl;
}
	
void Fraction::print()
{
	cout << num << "/" << denom;
}

Fraction::Fraction(int n,int d): num(n), denom(d)
{

}

int main()
{  
	
	Fraction frac1(2, 3);
	Fraction frac2(1, 2);
	
	if (frac1 > frac2)
	{
		frac1.print();
		cout << " is greater than ";
		frac2.print();
	}
	else
	{
		frac2.print();
		cout << " is greater than ";
		frac1.print();
		cout << endl << endl;
	}
	
	frac1.add(2,frac1);
	frac1.add(frac1, 3);
	frac2.add(frac2, 2);
	frac2.add(2, frac2);




	return 0;

}