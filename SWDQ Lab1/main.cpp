#include <iostream>                                             //include standard input output library
using namespace std;                                            //allows use of std:: features without prefix

//BASE CLASS FOR ALL SHAPES
class Shape
{
    public:
        // pure virtual function providing interface framework.
        virtual int getArea() = 0;
        void setWidth(int w)                                    //setter for the width of the shape
        {
            width = w;
        }
        void setHeight(int h)                                   //setter for the height of the shape
        {
            height = h;
        }
    protected:
        int width;                                              //shared variable for width
        int height;                                             //shared variable for height
};

//TRIANGLE CLASS
class Triangle: public Shape                                    //triangle inherits from shape
{
    public:
        //implements the purevirtual function to calculate triangle area
        int getArea()
        {
            return (width * height)/2;                          //formula for triangle area
        }
};

//CIRCLE CLASS
class Circle : public Shape                                     //circle inherits from Shape
{
    private:
        int radius;                                             //circle requires a radius value instead of height and width

    public:
        void setRadius(int r)                                   //setter for circle radius
            {
                radius = r;
            }
        // function to calculate the area of a circle using pi*r^2
        int getArea()
        {
            return 3.14 * radius * radius;                      //formula for circle area
        }
};

int main(void)
{
    //triangle calculation
    Triangle Tri;                                               //create triangle object
    Tri.setWidth(5);                                            //set width to 5
    Tri.setHeight(7);                                           //set height to 7

    cout << "Total Triangle area: " << Tri.getArea() << endl;   //print the area of the object.

    //circle calculation
    Circle C;                                                   //create circle object
    C.setRadius(5);                                             //set radius to 5

    cout << "Circle area: " << C.getArea() << endl;             //print the area of the object

    return 0;                                                   //successful program termination
}
