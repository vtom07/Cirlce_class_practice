#include <iostream>
#include "Circle.h"
using namespace std;
void Circle::Set_Circle(int r,int x_c,int y_c)
{
	Set_radius(r);
	Set_X(x_c);
	Set_y(y_c);
}
Circle::Circle(int r, int x_c, int y_c)
{
	Set_Circle(r, x_c, y_c);
}
void Circle::Set_radius(int r)
{
	radius = (r >= 0) ? r : 0;
}
void Circle::Set_X(int x_c)
{
	x = (x_c >= 0) ? x_c : 0;
}
void Circle::Set_y(int y_c)
{
	y = (y_c >= 0) ? y_c : 0;

}
int Circle::Get_radius()const
{
	return radius;
}
int Circle::Get_x()const
{
	return x;
}
int Circle::Get_y()const
{
	return y;
}
void Circle::print_info()const
{
	cout << "The radius is   -- : "<<radius << " , x is  -- : "<< x <<"  , y is  -- : "<< y << endl;
}
double Circle::Get_perimeter()const
{
	return radius * Pi * 2;
}

int main()
{
	double per;
	int r;
	int x;
	int y;
	int size = 0;
	cout << "Enter the amount of circles you want to have :";
	cin >> size;
	Circle*circle = new Circle[size];
	for (int i = 0; i < size; i++)
	{


		cout << "insert the  radius x and y of the circle :" << endl;
		cout << "insert radius ";
		cin >> r;
		cout << endl;
		cout << "insert x ";
		cin >> x;
		cout << endl;
		cout << endl;
		cout << "insert y ";
		cin >> y;
		cout << endl;
		circle[i].Set_Circle(r, x, y);
		circle[i].print_info();
		per = circle[i].Get_perimeter();
		cout << "the perimeter is : " << per << endl;
	}
	delete(circle);

}