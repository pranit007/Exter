
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;


class phone
{
  string ph;
    int flag=0;
    char nm[20];
    fstream file;
public :

void getdata()
{
  
    file.open("phonebook.txt" , ios::out | ios::app );
   cout<<"\n Entre the name to app in phone book :";
	cin>>nm;
 	file<<setw(15)<<nm;
	cout<<"Entre the phone no(10 digit ) :";
 	cin>>ph;
	file<<setw(15)<<ph<<"\n";
        
	file.close();
}


void dispaly()
{string str;
	file.open("phonebook.txt", ios::in );
	cout<<"\n  All contacts :\n";
	cout<<"NAMES                CONTACT NO,"<<endl;
	file.seekg(0,ios::beg);
   	while(!file.eof())
	{
		getline(file,str);
		cout<<str<<endl;
	}

	file.close();
}

void searchnm()
{ 
	string temp,temp1; 
  	string name;

	cout<<"\n ENtre the name to search phone no. : ";
	cin>>temp;

    file.open("phonebook.txt" , ios::in );

	while(!file.eof())
		{
 			file>>name;
	
			{
				if(name==temp)
					{
						getline(file,temp1);
						flag=1;	
						break;
					}
				
			}
		}
if(flag==1)
	{
	    	cout<<" \n Contact no :"<<temp1<<endl;
	}
else
{
 	cout<<"\n not found in phonebook";
 }
flag=0;
file.close();

}

void searchph()
{
	string temp , temp1;
	string phone;

		cout<<"\n Enter the Phone no to be search :";
		cin>>phone;
		
file.open( "phonebook.txt", ios::in );

	while(!file.eof())
		{	file>>temp1;
			file>>temp;
			//getline(file,temp1) ;
				if(phone==temp)
					{
						flag=1;
						break;
					}
				
		}


if(flag==1)
{
		cout<<"\n Name :"<<temp1<<endl;
}
else
{
	cout<<"\n Contact not found ";
}
flag=0;
file.close();
}

void changeno()
{
	string no,temp1,temp2,now,t3;
 cout<<"\n Enter the no : ";
 cin>>no;

 file.open("phonebook.txt", ios::in | ios::out  );

  while(!file.eof())
		{ file>>temp1;        // it takes name 
              t3=temp1;
			file>>temp2;     // it takes no :
			//cout<<"temp1 = "<<temp1<<"      temp2 = "<<endl;
		 	if(temp2==no)
				{
					flag=1;
					
					break; 					
				}
		}
if(flag==1)
{ cout<<"Enter the new no to replace :";
  cin>>now;
   file.seekp(-10 , ios::cur)	;			// to get pointer 10 places back on the phone no 
    file<<now;
}
else
{
  cout<<"\n Number in not present in phonebook ";
}

flag=0;
file.close();

}



};

int main()
{
  phone p;

int ch, exit=1;

   do{
		cout<<"\n 1. TO add contact \n 2. Display all contact \n 3.Search by name  \n 4.Search by phoneNO \n 5.Change Phone NO : \n 6.exit \n Entre the choice : ";
 		cin>>ch;

 	   switch (ch) 
		{
			case 1 : p.getdata();
					break;
			case 2 : p.dispaly();
					break;
			case 3 : p.searchnm();
					break;
			case 4 : p.searchph();
					break;
			case 5 : p.changeno();
					break;
			
			case 6 : exit=0;
					break;
			default :
				cout<<"\n Entre the correct choice :";
				
   		}  
    	}while(exit==1);

}
