#include <iostream>

using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle(int, int);
    void set_values (int,int);
    int area (void);
};

void Rectangle::set_values(int a, int b){
	width = a;
	height = b;
}

int Rectangle::area(){
	return width * height;
}

Rectangle::Rectangle(int a, int b){
	set_values(a, b);
}

int main()
{
	Rectangle rect(3,4);
	cout << rect.area();
}
