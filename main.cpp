//~~~START:Fri, 30-Sep-2022, 13:18:54 IST
//~~~Author:Rajesh Pandian M | mrprajesh.co.in
#include <bits/stdc++.h>
using namespace std;
class A {
  int val;

    public:
  A(int v) : val(v) {}

  void print() { std::cout << "val:" << val << '\n'; }
};
int main(int argc, char* argv[]) {
  std::cout << "Hello Dear Programmer! \n\n --cpp\n";

  //~ size_t N = 1024;
  //~ size_t ii = 0;
  //~ try {
  //~ int* a = (int*) malloc (sizeof(int) * N);

  //~ for (ii = 0; ii < 100*N; ++ii) {
  //~ a[ii] = ii;
  //~ }
  //~ } catch (...) {
  //~ std::cout << "Exception! ";
  //~ }

  //~ std::cout << "Count:" << ii << '\n';

  A* a = new A(10);
  a->print();

  // A* b;
  // b->print();

  return 0;
}
