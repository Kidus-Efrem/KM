//C++ PROGRAM THAT CALCULATES AND DISPLAYS THE BODY MAX INDEX
#include <iostream>
using namespace std;

int main(){
    float Height, Weight, Gender;
    

    cout<<"Enter your height: "<< endl;
    cin>> Height;

    cout<<"Enter your weight: "<<endl;
    cin>> Weight;

    cout<<"your BMI is: "<< Weight/(Height*Height)<<endl;
    return 0;
}