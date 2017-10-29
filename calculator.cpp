#include<iostream>

using namespace std;

class Calculator
{
	int n1,n2;
	
	public:
		void getData(int n1,int n2);
		void add();
		void sub();
		void mul();
		void div();
};

void Calculator::getData(int n1,int n2)
{
	this->n1=n1;
	this->n2=n2;
}

void Calculator::add()
{
cout<<"\nAddition : "<<n1+n2;
}

void Calculator::sub()
{
cout<<"\nSubtraction : "<<n1-n2;
}

void Calculator::mul()
{
cout<<"\nMultiplication : "<<n1*n2;
}

void Calculator::div()
{
cout<<"\nDivision : "<<n1/n2;
}



int main()
{
	Calculator cal;
	int opt;
	int n1,n2;
	while(true)
	{
		cout<<"\n\nCalculator (Menu) :\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\nChoose option :";
		cin>>opt;
		
		if(opt>4||opt<1)
			return 0;
			
		cout<<"\nEnetr no 1:";
		cin>>n1;
		cout<<"\nEnetr no 2:";
		cin>>n2;
		cal.getData(n1,n2);
		switch(opt)
		{
			case 1:
				cal.add();
				break;
			case 2:
				cal.sub();
				break;
			case 3:
				cal.mul();
				break;
			case 4:
				cal.div();
				break;
		}
	}
	return 0;	
}


