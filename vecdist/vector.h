using namespace std;

class Vector {
 public:
  Vector(int l);
  Vector(double* v, int l);
  Vector(const Vector & other);
  void operator=(const Vector & other);
  Vector operator+(const Vector& other);
  ~Vector();
  int getLength();
  void setValue(int position, double val);
  double at(int position);

  int foo();
 private:
  double* values;
  int length;
};
 
