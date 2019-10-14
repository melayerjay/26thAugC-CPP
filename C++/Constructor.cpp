#include<iostream>

using namespace std;

class Box{
    //public:
        int length;
        int breadth;
        int height;

    public:
        Box(){
            cout<<"\nIn Constructor";
            // cout<<"\nEnter Lenght: ";
            // cin>>length;
            // cout<<"\nEnter Breadth: ";
            // cin>>breadth;
            // cout<<"\nEnter Height: ";
            // cin>>height;

            length = 1;
            breadth = 1;
            height = 1;
        }

        Box(int l,int b,int h){
            cout<<"\nIn Parameterized Constructor";
            length = l;
            breadth = b;
            height = h;
        }

        ~Box(){
            cout<<"Object Destroyred";
        }

        void printBox(){
            cout<<"\nDimensions are: "<<length<<"\t"<<breadth<<"\t"<<height<<"\n";
        }

        Box add(Box a,Box b){
            Box temp;
            temp.length = a.length + b.length;
            temp.breadth = a.breadth + b.breadth;
            temp.height = a.height + b.height;
            
            return temp;
        }
};


int main(){

    Box b1;

    Box b2(10,20,30);

    b1.printBox();
    b2.printBox();

    return 0;
}