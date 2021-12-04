//
//  main.cpp
//  IrwinCelesteUnit8Project2b
//
//  Created by Celeste Irwin on 12/3/21.
//
//Celeste Irwin
//CIS 1202 800
//12-03-2021


#include <iostream>
#include <math.h>

using namespace std;

template <typename T>
T half(T number)
{
    return number/2;
}

int half(int number)
{
    return static_cast<int>(round(number/2.0));
}

int main(int argc, const char * argv[])
{
    double a= 7.0;
    float b= 5.0f;
    int c = 3;
    
    cout<<half(a) <<endl;
    cout<<half(b) <<endl;
    cout<<half(c) <<endl;
    
    return 0;
}


