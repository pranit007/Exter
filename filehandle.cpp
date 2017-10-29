#include<iostream>
#include<fstream>
 using namespace std;
 
 int main()
 {	int roll;
	char name[10];
	float next;
 
 	cout<<"File Handling"<<endl;
 	ofstream fout("\Desktop\DSY");
 	cout<<"\nEnter roll number: "<<endl;
 	cin>>roll;
 	fout<<roll<<" ";
 	cout<<"\nEnter Name: ";
 	cin>>name;
 	fout<<name<<" ";
 	fout.close();
 
 	ifstream fin("(\Desktop\DSY");
 	fin>>roll;
 	fin>>name;
 
 	cout<<"\n This is the output from the file ! : "<<endl;
 	cout<<roll<<endl;
 	cout<<name<<endl;
 
 	return 0;
 }
