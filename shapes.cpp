#include <iostream>

/*Write a program box.cpp that asks the user to input width and height and prints a
 solid rectangular box of the requested size using asterisks.
Also, print a line Shape: between user input and the printed shape (to separate input from output).*/

std::string box(int width, int height)
{
    std::string box;
    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++)
            box+="*";
        box+="\n";
    }
}
//nested loop
/*Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular 
checkerboard of the requested size using asterisks and spaces (alternating).

Example:
Input width: 11
Input height: 6

Shape:
* * * * * *
 * * * * * 
* * * * * *
 * * * * *
* * * * * *
 * * * * * 
*/

std::string checkerboard(int width, int height)
{
    std::string checkerboard;
    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++)
            
}

/*Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.

Example:
Input size: 8

Shape:
*      *
 *    *
  *  *
   **
   **
  *  *
 *    *
*      *
*/

/*Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

Example:
Input side length: 6

Shape:
*
**
***
****
*****
******
*/
std::string lower(int length)
{
    std::string low;
    int tempWidth = 1;
    for(int i = 0; i < length; i++){
        for (int j = 0; j < tempWidth; j++)
            low = low + "*";
        tempWidth++;
    }
    return low;
}
/*Write a program upper.cpp that prints the top-right half of a square, given the side length.

Example:
Input side length: 5

Shape:
*****
 ****
  ***
   **
    *
*/

/*Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.

However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!

Example 1:
Input width: 12
Input height: 5

Shape:
************
 **********
  ********
   ******
    ****
Example 2:
Input width: 12
Input height: 7

Impossible shape!

spaces = 0;
stars = width*/

/*Write a program checkerboard3x3.cpp that asks the user to input width and height and prints a checkerboard of 3-by-3 squares. (It should work even if the input dimensions are not a multiple of three.)

Example 1:
Input width: 16
Input height: 11

Shape:
***   ***   ***
***   ***   ***
***   ***   ***
   ***   ***   *
   ***   ***   *
   ***   ***   *
***   ***   ***
***   ***   ***
***   ***   ***
   ***   ***   *
   ***   ***   **/