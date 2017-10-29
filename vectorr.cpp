#include<iostream.h>
#include<string.h>
#include<conio.h> 
template<class T> 
class vector
{

T *v; int size; public:

vector(int m); void create(T *a); void modify(int); void multiply(int); void display();
};

template<class T>

vector< T > :: vector(int m)
{

v=new T[size=m]; for(int i=0;i<size;i++) v[i]=0;

}

template<class T>

void vector<T>::create(T*a)
{
for(int i=0;i<size;i++)
{
cin>>a[i];
v[i]=a[i];
}
}

template<class T>

void vector<T>::modify(int k)
{
v[k]=v[k]+10;
}

template<class T>
void vector<T>::multiply(int k)

{

for(int i=0;i<size;i++) v[i]=v[i]*k;
}

template<class T>

void vector<T>::display()
{
cout.setf(ios::showpoint);
cout<<"\n(";
for(int i=0;i<size;i++) cout<<v[i]<<", "; cout<<")\n";
}

int main()

{

vector <float> v1(5); vector <int> v2(5); float *x;

int *y; int i; int s;

cout<<"Enter the float vector element :\n"; v1.create(x);
cout<<"Enter the Interger vector element :\n"; v2.create(y);
cout<<"enter the element u want to modify in float vector :"; cin>>i;
v1.modify(i);

v1.display();

cout<<"\nenter the element u want to modify in int vector :"; cin>>i;
v2.modify(i);

v2.display();

cout<<"\nenter the number to calculate the scalar product :"; cin>>s;
v1.multiply(s);

v2.multiply(s);

cout<<"\nthe Float vector after scalar product is as follows :"; v1.display();
cout<<"\nthe integer vector after scalar product is as follows :"; v2.display();
getch();

return(0);
}
