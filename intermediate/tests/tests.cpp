#include <iostream>
using namespace std;

void main()
{
   int i = 17;
   int j = 29;

   int* p1 = &i;
   cout << p1 << endl;
   cout << *p1 << endl;

   *p1 = 103;
   cout << i << endl;

   int* p2 = p1;
   *p2 = 107;
   cout << i << endl << *p1 << endl;

   i = 207;
   cout << *p1 << endl << *p2 << endl;

   p2 = &j;
   cout << *p2 << endl;
}