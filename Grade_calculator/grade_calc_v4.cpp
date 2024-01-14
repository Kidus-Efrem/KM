#include <iostream>
using namespace std;

int main() {
   float total_mark=0, total_result=0, num_of_tests, score_recieved, total_points, percentile;
   cout<<"how many exercises to input : ";
   cin>>num_of_tests;

    for(int i=1; i<num_of_tests; i++)
   {
   cout<<"score received for exersice "<<i<<" : ";
   cin>>score_recieved;
     total_result+=score_recieved;
    cout<<"total points for exercise "<<i<<" : ";
    cin>>total_points;
    total_mark+=total_points;
   }
    percentile= (total_result/total_mark)*100;

    cout<<"Your total is "<<total_result<< " out of "<<total_mark<<", or "<<percentile<<"%";
    return 0;

    
}
