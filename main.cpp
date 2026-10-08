#include <iostream>
using namespace std;

int main()
{

   /* Type your code here. */
   int r = 0;
   int g = 0;
   int b = 0;

   int min_rgb = 0;

   // input stream
   // 130'\n'
   // 50 '\n'
   // 130'\n'
   //

   // ->130'\n'
   // 50 '\n'
   // 130'\n'
   cin >> r; // 130 extraced stored in r

   min_rgb = r;

   // ->'\n'
   // 50 '\n'
   // 130'\n'
   cin >> g; // 50 stored in g

   if (g < min_rgb)
   {
      min_rgb = g;
   }

   // ->'\n'
   // 130'\n'
   cin >> b; // 130 stored in b
   if (b < min_rgb)
   {
      min_rgb = b;
   }

   // Inputstram has remaining newline character
   // ->'\n'

   r = r - min_rgb;
   g = g - min_rgb;
   b = b - min_rgb;

   cout << r << ' '; //endl;
   cout << g << ' '; // endl;
   cout << b << endl;
   return 0;
}

/*

Given values for red, green, and blue, remove the gray part.

Ex: If the input is:

130 50 130
the output is:

80 0 80

Find the smallest value, and then subtract it from all three values, thus removing the gray.

Note: This page converts rgb values into colors.

*/