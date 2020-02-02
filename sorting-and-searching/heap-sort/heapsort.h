#ifndef HEAPSORT_H_
#define HEAPSORT_H_
#include<vector>
#include<iostream>
extern std::vector<int> heapvec;
extern int heapsize;
void initheap();
int getparent(int n);
int getchild(int n);
void insert(int n);
int pop_val();
void bubbleup(int n);
void bubbledown(int n);
void swapn(int parent, int child);

#endif