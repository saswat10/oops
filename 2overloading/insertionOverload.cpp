#include<bits/stdc++.h>
using namespace std;

class Complex{

    private:
        int real;
        int img;
    
    public:

        /* 
         as this function is taking two 
         different types of parameters
         hence it should be friend function
        */
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }


        // if we make the function void then we cannot chain output
        friend ostream& operator<<(ostream &o, Complex &c1);

};


// return by reference
ostream& operator<<(ostream &o, Complex &c1){
    o<<c1.real<<"+ i"<< c1.img;
    return o;
}


int main(){
    Complex c1(10, 5);
    cout << c1;
    // also can be written as
    operator<<(cout, c1);
    return 0;
}