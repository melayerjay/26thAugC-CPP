#include<iostream>

using namespace std;

class Shape{
    public:
        int height;
        int width;

        void getParam(int h,int w){
            height = h;
            width = w;
        }

};

class Paint : public Shape{
    public :

        int getCost(){
            return height*width*5;
        } 
};

class Rectangle :public Paint{
    public:
        Rectangle(int h,int w){
            height = h;
            width = w;
        }

        int getArea(){
            return height*width;
        }
};

int main(){
    Rectangle r(10,15);

    cout<<"\n Cost is : "<<r.getCost();
    
}