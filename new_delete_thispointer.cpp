#include<iostream>
using namespace std;
class Complex
{
    private:
    float real;
    float imaginary;
    public:
    void get_data()
    {
        cout<<"the real part of the number is "<<real<<endl;
        cout<<"the imaginary part of the number is "<<imaginary<<endl;
    }
    void set_data(double r,double imag)
    {
        this->real=r;  //use of this pointer
        this->imaginary=imag;
    }
};
int main()
{
    Complex c1;
    Complex* (ptr)=&c1;  //use of pointer
    ptr->set_data(20,10);
    ptr->get_data();
    cout<<endl;
    Complex c2;
    Complex* ptr1=new Complex; //use of new keyword
    ptr1->set_data(40,20);
    ptr1->get_data();
    cout<<endl;
    Complex c3;
    int size=5;
    Complex* ptr2=new Complex[size]; //allocating memory for array with pointers and new keyword
    (ptr2)->set_data(60,120);
    ptr2->get_data();
}