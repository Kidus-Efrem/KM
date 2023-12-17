//C++ PROGRAM THAT CALCULATES AND DISPLAYS THE BODY MAX INDEX
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    float Height, Weight, Bmi;
    string body_type;
    char Gender;

    cout<<"Enter your Gender, M for male and F for female: "<<endl;
    cin>>Gender;

    cout<<"read the height: "<< endl;
    cin>> Height;

    cout<<"Read the weight: "<<endl;
    cin>> Weight;

    Bmi= Weight/(Height*Height);
    
    if (Bmi >= 30){
        body_type = "obese";
    }
    
   else if(Gender == 'm' || Gender =='M'){
            if (Bmi < 20.5){
                 body_type ="UNDER WEIGHT";
            }

            else if (Bmi <25.9){
                body_type = "NORMAL WEIGHT";
            }

            else if (Bmi < 29.9){
                body_type = "OVER WEIGHT";
            }


    }

     else if(Gender == 'f' || Gender =='F'){
            if (Bmi < 18.5){
                 body_type ="UNDER WEIGHT";
            }

            else if (Bmi <24.9){
                body_type = "NORMAL WEIGHT";
                      }

            else if (Bmi< 29.9){
                body_type = "OVER WEIGHT";
            }
    }
    cout<<"your gender is: "<<Gender<<endl;
    cout<<"your BMI is: "<<Bmi <<endl;
    cout<<"your body type is: "<<body_type<<endl;
    return 0;
}