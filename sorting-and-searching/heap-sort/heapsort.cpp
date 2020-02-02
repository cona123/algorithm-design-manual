#include "heapsort.h"
int heapsize = 0;
std::vector<int> heapvec;
void initheap() {

}
int getparent(int n) {
  if(n == 0) {
    return -1;
  } else {
    return (n - 1)/2;
  }
}
int getchild(int n) {
  return n*2 + 2;
}
void insert(int val) {
  if(heapsize < heapvec.size()) {
    heapvec[heapsize] = val;
  } else {
    heapvec.push_back(val);
  }
  bubbleup(heapsize);
  heapsize++;



}
int pop_val() {
  if(heapsize == 0) {
    return INT8_MIN;
  } else {
    int ret = heapvec[0];
    heapsize--;
    if(heapsize != 0) {
      heapvec[0] = heapvec[heapsize];
      bubbledown(0);
    }
    return ret;
  }
}
void bubbleup(int n) {
  if(n == 0) {
    return;
  } else {
    int nparent = getparent(n);
    if(heapvec[nparent] > heapvec[n]) {
      swapn(nparent, n);
      bubbleup(nparent);
    }
  }
}
void bubbledown(int n) {
  int childpos = getchild(n);
  if(childpos - 1 > heapsize - 1) {
    return;
  } else {
    int comparepos = 0;
    if(childpos > heapsize - 1) {
      comparepos = childpos - 1;
    } else {
      comparepos = heapvec[childpos - 1]>heapvec[childpos]?childpos:childpos -1;
    }
    if(heapvec[n] > heapvec[comparepos]) {
      swapn(n, comparepos);
      bubbledown(comparepos);
    }
  }
}
void swapn(int parent, int child) {
  int temp = heapvec[parent];
  heapvec[parent] = heapvec[child];
  heapvec[child] = temp;
}