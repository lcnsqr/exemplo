#include <iostream>
#include "box.h"

using namespace std;

int main(int argc, char **argv){
  box::Box<double> mybox(atof(argv[1]), atof(argv[2]), atof(argv[3]));
  cout << "Volume da caixa: " << mybox.volume() << endl;
  return 0;
}

