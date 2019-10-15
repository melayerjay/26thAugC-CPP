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

        friend void printBox(Box);

        friend Box add(Box ,Box);
};

void printBox(Box temp){
            cout<<"\nDimensions are: "<<temp.length<<"\t"<<temp.breadth<<"\t"<<temp.height<<"\n";
}   

Box add(Box a,Box b){
            Box temp;
            temp.length = a.length + b.length;
            temp.breadth = a.breadth + b.breadth;
            temp.height = a.height + b.height;
            
            return temp;
}

int main(){

    Box sum;
    Box b1(10,20,30),b2(10,20,30);

    printBox(b1);
    printBox(b2);
   // b2.printBox();

    sum = add(b1,b2);

   // sum.printBox();
    printBox(sum);
    return 0;
}