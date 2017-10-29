#include<iostream>

using namespace std;
class personal
{
	string name,age,dob,mail;
	public:
		void accept()
		{
			cout<<"\nEnter Name:";
			cin>>name;
			cout<<"\nEnter Age:";
			cin>>age;
			cout<<"\nEnter Date of Birth in DD//MM//YEAR:";
			cin>>dob;
			cout<<"\nEnter Mail Address:";
			cin>>mail;
		}
		void display()
		{
			for(int i=0;i<80;i++)
			cout<<"-";
			cout<<"\nName:"<<name;
			cout<<"\nAge:"<<age;
			cout<<"\nDate of Birth:"<<dob;
			cout<<"\nMail_Address:"<<mail<<endl;
		}
};
class academic
{
	int ten,twel;
	public:
		void accept1()
		{
			cout<<"\nEnter SSC marks:";
			cin>>ten;
			cout<<"\nEnter HSC marks:";
			cin>>twel;
		}
		void display1()
		{
			for(int i=0;i<80;i++)
			cout<<"-";
			cout<<"\nSSC marks:"<<ten;
			cout<<"\nHSC marks:"<<twel<<endl;
		}
};
class professional:public personal,public academic
{
	string eid,exp,desg;
	double sal;
	public:
		void get()
		{
		    cout<<"\nEnter Emplyoee_ID:";
			cin>>eid;
			cout<<"\nEnter Salary:";
			cin>>sal;
			cout<<"\nEnter designation:";
			cin>>desg;
			cout<<"\nEnter Eperience:";
			cin>>exp;	
		}
		void display2()
		{
			for(int i=0;i<80;i++)
			cout<<"-";
			cout<<"\nEmplyoee_ID:"<<eid;
			cout<<"\nSalary:"<<sal;
			cout<<"\nDesignation:"<<desg;
			cout<<"\nExperience "<<exp<<" years"<<endl;
		}
};
int main()
{
	professional p;
	p.accept();
	p.accept1();
	p.get();
	cout<<"\n******************BIODATA**********************<<endl;
	p.display();
	p.display1();
	p.display2();
	return 0;
}

