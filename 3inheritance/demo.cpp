#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        void setLength(int l);

        void setBreadth(int b);

        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};

class Cuboid:public Rectangle{
    private:
        int height;
    public:
        Cuboid(int h){
            height = h;
        }
        int getHeight(){
            return height;
        }
        void setHeight(int h){height = h;}
        int volume(){return getLength()*getBreadth()*height;}
};

// implementation of the rectangle class
Rectangle:: Rectangle(){
    length = 1;
    breadth = 1;
}