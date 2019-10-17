#include<iostream>

using namespace std;

class Shape{
    public:
        int height;
        int width;

        Shape(){
            cout<<"\nShape Constructor";
        }

        void getParam(int h,int w){
            height = h;
            width = w;
        }
        ~Shape(){
            cout<<"\nShape Destructor";
        }

};

class Paint{
    public :
        Paint(){    
            cout<<"\nPaint Constructor";
        }
        int getCost(int area){
            return area*5;

        } 

        ~Paint(){
            cout<<"\nPaint Destructor";
        }
};

class Rectangle : public Shape,public Paint{
    public:
        Rectangle(int h,int w){
            height = h;
            width = w;
            cout<<"\nRectangle Constructor";
        }

        int getArea(){
            return height*width;
        }

        ~Rectangle(){
            cout<<"\nRectangle Destructor";
        }
};

class Triangle : public Shape, public Paint{
    public:
        Triangle(int h,int w){
            height = h;
            width = w;
        }

        int getArea(){
            return (height*width)/2;
        }
};





int main(){
    int area;
    int cost;
    Rectangle r(10,15);
   // Triangle t(2,5);

    area = r.getArea();
    cost = r.getCost(area);
    cout<<"\nArea of Rectangle : "<<area;
    cout<<"\nCost of paint : "<<cost;

    // area = t.getArea();
    // cost = t.getCost(area);
    // cout<<"\nArea of Triangle : "<<area;
    // cout<<"\nCost of paint : "<<cost;

}