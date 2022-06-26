#include <iostream>
#include <string>
using namespace std;
/*
   Displays an 'art' drawing.
*/            
int main()
{ 
   string s1 = " *   *   *   *   *   * ";
   string s2 = "   *   *   *   *   *   ";
   string s3 = "__________________________________\n";
   string s4 = "_________________________________________________________\n";

   cout << s4 << s1 << s3 << s2 << s3;
   cout << s1 << s3 << s2 << s3;
   cout << s1 << s3 << s2 << s3;
   cout << s1 << s3 << s2 << s3;
   cout << s4 << s4 << s4 << s4 << s4;

   return 0;

}
