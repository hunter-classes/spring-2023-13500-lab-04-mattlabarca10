#include <iostream>

/*
*****
*****
*****
*/

std::string box(int width, int height)
{
    std::string box;
    box+="\nWidth: " + width;
    box+="\nHeight: " + height;
    box+= "\nShape: \n";
    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++)
            box+="*";
        box+="\n";
    }
    return box;
}

/*
* * * * * *
 * * * * * 
* * * * * *
 * * * * *
* * * * * *
 * * * * * 
*/

/*
std::string checkerboard(int width, int height)
{
    int ind = 0;
    std::string checkerboard;
    checkerboard+="\nWidth: " + width;
    checkerboard+="\nHeight: " + height;
    checkerboard+= "\nShape: \n";
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++){
            if(ind%2 == 0){
                checkerboard+="*";
                ind++;
            }
            else{
                checkerboard+=" ";
                ind++;
            }
        }
        checkerboard+="\n";
    return checkerboard;
}

std::string checkerboard2(int width, int height)
{
    std::cout << "Width: " << width << "\n";
    std::cout << "Height: " << height << "\n";
    std::string checkerboard;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++)
            if(i%2 == 0 && j%2 == 0|| i == 0 && j%2 == 0)
                checkerboard+="*";
            else if(i%2 == 0 && j%2 == 1|| i == 0 && j%2 == 1)
                checkerboard+=" ";
            else if(i%2 == 1 && j%2 == 0|| i == 1 && j%2 == 0)
                checkerboard += " ";
            else
                checkerboard += "*";
        checkerboard+="\n";
    }
    std::cout << "\nShape: \n" << checkerboard << "\n";
    return "";
}
*/
/*Write a program cross.cpp that asks the user to input the shape size, 
and prints a diagonal cross of that dimension.

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
/*
std::string cross(int size)
{
    std::string cross;
    cross+="\nSize: " + size;
    cross+= "\nShape: \n";
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            if(j==i || j==size-1-i)
                cross+="*";
            else  
                cross+=" ";
    }
    return cross;
}

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
/*
std::string lower(int length)
{
    std::string low;
    low+="Length: " + length;
    low+= "\nShape: \n";
    int tempWidth = 1;
    for(int i = 0; i < length; i++){
        for (int j = 0; j < tempWidth; j++)
            low = low + "*";
        tempWidth++;
    }
    return low;
}
*/

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