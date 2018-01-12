#include <iostream.h>
//using namespace std;
struct MyStruct {

  MyStruct(int f) : field(f) {
  }

  int field;

};

int main() {

  MyStruct ms(3);

  //std::cout << ms.field << std::endl;
  cout << ms.field << endl;

}
