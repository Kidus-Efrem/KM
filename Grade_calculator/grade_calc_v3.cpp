#include <iostream>
using namespace std;

int main() {
    int count=0;
    while(count <4){
    float final_result, mid_result, total_mark;

    if(count != 0){
        cout << "you Entered the wrong result. try again"<< endl;
    }

    // Input: Read the total_mark from the user
    cout << "Enter result for mid exam [0-40]: ";
    cin >> mid_result;

    cout << "Enter result for final exam [0-60]: ";
    cin >> final_result;

    if(mid_result > 40 || mid_result <0 || final_result>60 || final_result <0){
        count +=1;
        continue;
    }
    total_mark = final_result + mid_result;
    // Convert total_mark to letter grade based on the specified scale
    if (total_mark >= 90) {
        cout << "Letter Grade: A+" << endl;
    } else if (total_mark >= 80) {
        cout << "Letter Grade: A" << endl;
    }else if (total_mark >= 75) {
        cout << "Letter Grade: B+" << endl;
    }
    else if (total_mark >= 60) {
        cout << "Letter Grade: B" << endl;
    } else if (total_mark >= 55) {
        cout << "Letter Grade: C+" << endl;
    } else if (total_mark >= 45) {
        cout << "Letter Grade: C" << endl;
    }else if (total_mark >= 30) {
        cout << "Letter Grade: D" << endl;
    } else {
        cout << "Letter Grade: F" << endl;
    }
    break;
    }
    
    return 0;
}
