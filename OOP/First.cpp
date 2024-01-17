#include <stdio.h>

class Rectangle {
  private:
  int length;
  int breadth;
  public:
  void setLength(int length) {
    if(length < 0)
      this->length = 0;
    else 
      this->length = length;
  }
  int getLength() {return length; }
  void setBreadth(int breadth) k{
    if(breadth < 0) 
      this->breadth = 0;
    else 
      this->breadth = breadth;
  }
  int getBreadth() {return breadth;}
  int getArea() {
    return length*breadth;
  }
  int getPerimeter() {
    return 2*(length+breadth);
  }
};

int main() {
  Rectangle *r = new Rectangle;
  r->setLength(-100);
  r->setBreadth(200);
  int area = r->getArea();
  printf("Area = %d\n", area);
  printf("Perimeter = %d", r->getPerimeter());

  return 10;
}