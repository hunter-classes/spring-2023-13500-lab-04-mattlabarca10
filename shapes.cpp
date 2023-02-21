#include <iostream>
/*
*****
*****
*****
*/

std::string box(int width, int height)
{
    std::string strWidth = std::to_string(width);  
    std::string strHeight = std::to_string(height);
    std::string header = "Width: " + strWidth;
    header+= " \nHeight: " + strHeight; 
    header+= "\nShape: \n";
    std::string box;
    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++)
            box+="*";
        box+="\n";
    }
    return header + box;
}

/*
* * * * * *
 * * * * * 
* * * * * *
 * * * * *
* * * * * *
 * * * * * 
*/


std::string checkerboard(int width, int height)
{
    int ind = 0;
    std::string checkerboard;
    std::string strWidth = std::to_string(width);  
    std::string strHeight = std::to_string(height);
    checkerboard+="\nWidth: " + strWidth;
    checkerboard+="\nHeight: " + strHeight;
    checkerboard+= "\nShape: \n";
    for(int i = 0; i < height; i++){
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
    }
        
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

std::string cross(int size)
{
    std::string cross;
    std::string strSize = std::to_string(size);
    cross+="\nSize: " + strSize;
    cross+= "\nShape: \n";
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j==i || j==size-1-i)
                cross+="*";
            else  
                cross+=" ";
        }
        cross+="\n";
    }
    return cross;
}


/*
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
    std::string strLength = std::to_string(length);
    low+="Length: " + strLength;
    low+= "\nShape: \n";
    int tempLen = 1;
    for(int i = 0; i < length; i++){
        for (int j = 0; j < tempLen; j++)
            low+="*";
        low+="\n";
        tempLen++;
    }
    return low;
}


/*
*****
 ****
  ***
   **
    *
*/

std::string upper(int length)
{
    std::string up;
    std::string strLength = std::to_string(length);
    up+="Length: " + strLength;
    up+= "\nShape: \n";
    int tempLen = length;
    for(int i = 0; i < length; i++){
        for (int j = 0; j < tempLen; j++)
            up+="*";
        up+="\n";
        tempLen--;
    }
    return up;
}

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

std::string trapezoid(int width, int height)
{
    std::string trap;
    std::string strWidth = std::to_string(width);  
    std::string strHeight = std::to_string(height);
    trap+="\nWidth: " + strWidth;
    trap+="\nHeight: " + strHeight;
    trap+= "\nShape: \n";
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(height*2 > width){
                return "Impossible Shape!";
            }
            else if(j<i || j>width-i-1){
                trap+=" ";
            }
            else
                trap+="*";
        }
        trap+="\n";
    }
    return trap;
}


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

std::string checkerboard3x3(int width, int height)
{
    std::string check;
    std::string strWidth = std::to_string(width);  
    std::string strHeight = std::to_string(height);
    check+="\nWidth: " + strWidth;
    check+="\nHeight: " + strHeight;
    check+= "\nShape: \n";
    std::string line1;
    std::string line2;
    std::string temp;
    for(int i = 0; i < width; i++){
        if(i<3){
            line1+="*";
            temp = "*";
        }
        else if(i%3==0 && temp == "*"){
            line1+=" ";
            temp = " ";
        }
        else if(i%3==0 && temp == " "){
            line1+="*";
            temp = "*";
        }
        else if(temp=="*")
            line1+="*";
        else  
            line1+= " ";
    }
    std::cout << line1 << "line 1\n";
    for(int i = 0; i < width; i++){
        if(i<3){
            line2+=" ";
            temp = " ";
        }
        else if(i%3==0 && temp == "*"){
            line2+=" ";
            temp = " ";
        }
        else if(i%3==0 && temp == " "){
            line2+="*";
            temp = "*";
        }
        else if(temp=="*")
            line2+="*";
        else  
            line2+= " ";
    }
    temp = line1;
    for(int i = 0; i < height; i++){
        if(i<3){
            check+=line1+"\n";
        }
        else if(i%3==0 && temp == line1){
            check+=line2+"\n";
            temp = line2;
        }
        else if(i%3==0 && temp == line2){
            check+=line1+"\n";
            temp = line1;
        }
        else if(temp==line1)
            check+=line1+"\n";
        else  
            check+=line2+"\n";
    }
    return check;
}