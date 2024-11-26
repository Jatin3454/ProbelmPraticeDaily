
#include<iostream>
using namespace std;
class Complex {
    public:
    //calculate square
    void square(int s){
        cout<<"Area of Square"<<(s+s)<<endl;;
    }
    void rectangle(int l,int b){
        cout<<"Area of rectangle"<<(l+b)<<endl;
    }
    void circle(double r){
        cout<<"Area of circle"<<(3.14*r*r);
    }
    void cube(int a){
        cout<<"volume of Cube"<<(a*a*a);
    }
    void volume(double r,int h){
        cout<<"Area of rectangle"<<(3.14*r*h);
    }
};
int main(){
    Complex c1;
    int side,length,breadth,heigth;
    double radius;
    //Square
    cout<<"Enter the side of square"<<endl;;
    cin>>side;
    c1.square(side);
    //rectangle
    cout<<"Enter the side of rectangle";
    cin>>length>>breadth;
    c1.rectangle(length,breadth);
     
     //volume
     cout<<"Enter the r and h";
     cin>>radius>>heigth;
     c1.volume(radius,heigth);
}