#include <iostream>
#include <math.h>
#include <cctype>

using namespace std;

int main(){
    float total, total_sqrd, total3, num, stadard_deviation, average, variance, count;
    short int h ;
    float height, salary;
    char gender;


    do{
        cout<<"Enter your number and  -1 when done: ";
        cin>>num;
        if(num==-1){
            continue;
        }
        count+=1;
        total+=num;
        total_sqrd+=num*num;
        
    }while( num!=-1);

    cout<<"total is equal to:"<<total<<endl;

    average = total/count;
    variance =(total_sqrd-(total*total)/count)/count;
    stadard_deviation = sqrt(variance);


    cout<<"The average is equal to: "<<average<<endl;
    cout<<"The standard diviation is equal to: "<<stadard_deviation<<endl;

                                                   

    return 0;
}