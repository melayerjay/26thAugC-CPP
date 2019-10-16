#include<iostream>

using namespace std;

class Box{
    //public:
        int length;
        int breadth;
        int height;

    public:
        static int count;
        Box(){
            cout<<"\nIn Constructor";
            length = 1;
            breadth = 1;
            height = 1;
            count++;
        }

        Box(int l,int b,int h){
            cout<<"\nIn Parameterized Constructor";
            length = l;
            breadth = b;
            height = h;
            count++;
        }

        ~Box(){
            cout<<"Object Destroyred";
            count--;
        }

        void printBox(){
            cout<<"\nDimensions are: "<<length<<"\t"<<breadth<<"\t"<<height<<"\n";
        }

        void add(Box b){
            Box temp;    
            temp.length = this->length + b.length;
            temp.breadth = this->breadth + b.breadth;
            temp.height = this->height + b.height;

            temp.printBox();
        }

        void compare(Box b){
            float vol1,vol2;
            vol1 =  this->length*this->height*this->breadth;
            vol2 =  b.length*b.breadth*b.height;

            if(vol1 > vol2){
                cout<<"This is Greater";
            }else{
                cout<<"That is Greater";
            }
        }
};

int Box::count = 0;
 

// Box add(Box a,Box b){
//             Box temp;
//             temp.length = a.length + b.length;
//             temp.breadth = a.breadth + b.breadth;
//             temp.height = a.height + b.height;
            
//             return temp;
// }

int main(){

    int arr[5];

    Box arr1[5];
    Box sum;
    Box b1(20,20,30),b2(10,20,30);

    b1.printBox();
    b2.printBox();

   // b1.add(b2);

    b2.compare(b1);

    b1.count = 5;
    cout<<"\nCount: "<<b1.count;
    cout<<"\nCount: "<<b2.count<<"\n";


    return 0;
}