#ifndef Circle_H
#define Circle_H
#include <iostream>
#define Pi 3.14
using namespace std;
class Circle {
	public:
		Circle(int = 0, int = 0, int = 0);
		void Set_Circle(int, int, int);
		void Set_radius(int);
		void Set_X(int);
		void Set_y(int);
		int Get_radius() const;
			int Get_x()const;
			int Get_y()const;
			void print_info()const;
			double Get_perimeter()const;
	private:
		int radius;
		int x;
		int y;
	};
#endif