#include "heapsort.h"
int main() {
  insert(4);
  insert(7);
  insert(1);
  insert(2);
  insert(34);
  insert(23);
  insert(67);
  insert(37);
  insert(234);
  insert(78);
  insert(5);
  insert(89);

  while (heapsize!=0)
  {
    std::cout<< pop_val() << " ";
    /* code */
  }
  std::cout<<std::endl;
}