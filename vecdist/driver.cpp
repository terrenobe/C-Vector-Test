#include <iostream>
#include "vector.h"

using namespace std;

void foo() {
  Vector vfoo(5);
  cout << "about to leave foo" << endl;
}

int main() {
  Vector v(10);

  cout << "before" << endl;
  Vector *vecptr = new Vector(5);
  delete vecptr;

  // Vector *v_ptr = &v;
  // cout << v.getLength() << endl;
  // cout << v_ptr->getLength() << endl; 
  // cout << (*v_ptr).getLength() << endl; // ptr->member === (*ptr).member
  // return 0;

  cout << v.getLength() << endl;
  cout << v.at(5) << endl;
  // cout << v.length << endl;

  double myvalues[] = {10.1, 20.2, 30.3, 40.4};
  
  Vector v2(myvalues, 4);

  cout << v2.at(2) << endl;

  myvalues[2] = 100.1;

  cout << "v2[2] = " << v2.at(2) << endl;

  foo();
  Vector v3 = v2;

  cout << "v3[2] = " << v3.at(2) << endl;

  v2.setValue(2, 999.9);

  cout << "v3[2] = " << v3.at(2) << endl;

  cout << "about to exit" << endl;

  cout << v.getLength() << endl;

  v = v3; // v.operator=(v3);

  v2.setValue(0, 1000);
  Vector v4 = v3 + v2;  // v3.operator+(v2);

  cout << v4.at(0) << endl;
  cout << v4.at(1) << endl;

  cout << "new code!" << endl;

  Vector v5 = v4 + v2;

  cout << v5.at(0) << endl;
  
  // v2.setValue(0, 1000);
  
  // Vector v4 = v3 + v2;  // v3.operator+(v4)

  // cout << v4.at(0) << endl;
  // cout << v4.at(1) << endl;

  // end of scope

  //Code from the question
  Vector c(5);
  double values[] = {10.1, 20.2, 30.3, 40.4, 50.5};
  Vector d(values, 5);
  Vector e = c;
  c = d;
  c + d;
}
