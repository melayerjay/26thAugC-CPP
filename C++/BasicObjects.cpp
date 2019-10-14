#include<iostream>

using namespace std;


class Box{
    //public:
        int length;
        int breadth;
        int height;

    public:
        void getArea(){
            cout<<length*breadth*height;
        }

        void getDimension();

        void printBox(){
            cout<<"\nDimensions are: "<<length<<"\t"<<breadth<<"\t"<<height<<"\n";
        }
};

void Box::getDimension(){
    cout<<"Enter Dimension: ";
    cin>>length>>breadth>>height;
}


int main(){
    int a;
    Box b1,b2;

    b1.getDimension();
    // b1.length = 10;
    b1.printBox();


    b2.getDimension();
    b2.printBox();

b1.printBox();
    return 0; 
}