#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real;
    int img;


    // here the + operator is overloaded
    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    Complex operator-(Complex c){
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }    
};