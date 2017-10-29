#include<iostream>
using namespace std;

class Complex
{
	float real,img;
	
	public:
	
	Complex()
	{
		real=0.0;
		img=0.0;
	}	
	
	
	Complex operator+(Complex a2)
	{
		Complex a;
		a.real=real+a2.real;
		a.img=img+a2.img;
		return a;
	}
	
	Complex operator-(Complex a2)
	{
		Complex a;
		a.real=real-a2.real;
		a.img=img-a2.img;
		return a;
	}
	
	Complex operator*(Complex a2)
	{
		Complex a;
		a.real=(real*a2.real)-(img*a2.img);
		a.img=(real*a2.img)+(img*a2.real);
		return a;
	}

	Complex operator/(Complex a2)
	{
		Complex a;
		a.real=((real*a2.real)+(img*a2.img)/(a2.real*a2.real)+(a2.img*a2.img));
		a.img=((img*a2.real)-(real*a2.img)/(a2.real*a2.real)+(a2.img*a2.img));
		return a;
	}
	friend istream &operator >>(istream &input, Complex &b);
	friend ostream &operator <<(ostream &output, Complex &b);
};

istream &operator >>(istream &input, Complex &b)
	{
		cout<<"\nEnter real part of complex no:";
		input>>b.real;
		cout<<"Enter imaginary part of complex no:";
		input>>b.img;
	}
	
 ostream &operator <<(ostream &output, Complex &b)
	{
		output<<"\nComplex number is:"<<b.real<<" + "<<b.img<<" i ";
		output<<"\n-------------------------------------------------";
	}

int main()
{
	char ch;
	Complex num1,num2,ans;
	cout<<"\nENTER FIRST COMPLEX NUMBER";
	cin>>num1;
	cout<<num1;
	
	cout<<"\nENTER SECOND COMPLEX NUMBER";
	cin>>num2;
	cout<<num2;
	
	do
	{
		cout<<"\n1.Addition(use +) \n2.Subtraction(use -) \n3.Multiplication(use *) \n4.Division((use /) \n5.Exit(use q)";
		cout<<"\nEnter your choice:";
		cin>>ch;
		
		switch (ch)
		{
			case'+': ans=num1 + num2;
					 cout<<ans;
					 break;
					 
			case'-': ans=num1 - num2;
					 cout<<ans;
					 break;
					 
			case'*': ans=num1 * num2;
					 cout<<ans;
					 break;
					 
			case'/': ans=num1 / num2;
					 cout<<ans;
					 break;
					 
			case'q': cout<<"You are out of program";
					 break;
					 
			default: cout<<"INVALID CHOICE:";
					 break;
		}
			
	}while(ch!='q');
}

