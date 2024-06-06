#include <iostream>

using namespace std;

class Shape
{
public:
    double dim1, dim2;

    Shape(double dim1, double dim2)
    {
        this  -> dim1 = dim1;
        this  -> dim2 = dim2;
    }

    virtual double area()
    {
        return 0;
    }


};



class Triangle : public Shape
{
public:

    Triangle(double dim1, double dim2)
    : Shape(dim1, dim2)

    {

    }

    double area()
    {
        double areaT = (double)1/2 * dim1 * dim2;
        return areaT;
    }

//    Triangle() {}

};



class Rectangle : public Shape
{
public:

    Rectangle(double dim1, double dim2)
    :Shape(dim1,dim2)
    {

    }

    double area()
    {
        double areaR = dim1 * dim2;
        return areaR;
    }
};


int main()
{
    double dim1, dim2;
    cout << "Please enter dim1 and dim2 value : ";
    cin >> dim1 >> dim2;

//    Triangle t(dim1, dim2);
//    double areaT = t.area();
//    cout << areaT << endl;

//    Shape *s;

    Triangle t(dim1, dim2);
    Shape *s;

    s = &t;
    double areaT = s -> area();
    cout << "Triangle Area = " << areaT << endl;

    Rectangle r(dim1,dim2);

    s = &r;
    double areaR = s -> area();
    cout << "Rectangle Area = " << areaR << endl;



}
