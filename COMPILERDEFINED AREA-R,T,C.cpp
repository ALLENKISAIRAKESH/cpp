#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
public:
    virtual void get_data() = 0; 
    virtual void display_area() = 0; 
};
class Rectangle : public Shape {
private:
    int length;
    int breadth;
public:
    void get_data() override {
        cin >> length >> breadth;
    }
    void display_area() override {
        int area = length * breadth;
        cout << "Area of the rectangle: " << area << endl;
    }
};
class Triangle : public Shape {
private:
    float base;
    float height;
public:
    void get_data() override {
        cin >> base >> height;
    }
    void display_area() override {
        float area = 0.5 * base * height;
        cout << "Area of the triangle: " << area << endl;
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    void get_data() override {
        cin >> radius;
    }
    void display_area() override {
        float area = M_PI * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }
};
int main() {
    Rectangle rect;
    Triangle tri;
    Circle circ;
    Shape* shapes[3] = {&rect, &tri, &circ};
    for (int i = 0; i < 3; i++) {
        shapes[i]->get_data();
        shapes[i]->display_area();
    }
    return 0;
}