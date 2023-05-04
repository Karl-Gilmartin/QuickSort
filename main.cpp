#include <iostream>
#include <vector>

using namespace std;

void median_of_three(vector<int>& vect){
    int lo = vect[0];
    int hi = vect[vect.size()-1];
    int mid = vect[(vect.size()-1)/2];
    int temp;
    cout << "The low value is: " << lo << endl;
    cout << "The median value is: " << mid << endl;
    cout << "The high value is: " << hi << endl;

    if ((lo < mid && mid < hi) || (hi < mid && mid < lo)){
        cout << "The median is : " << mid << endl;
        cout << "The middle item of value: " << mid << "is moving to the end and is swapping with the value: " <<vect[vect.size()-1 ] <<   endl;
        vect[(vect.size()-1)/2] = vect[(vect.size()-1)];
        cout << "The mid vaue is : " << vect[(vect.size()-1)/2] << endl;
        vect[vect.size()-1] = mid;
        cout << "The end value is : " << vect[vect.size()-1] << endl;
    }
    else if ((mid < lo && lo < hi) || (hi < lo && lo < mid)){
        cout << "The median is : " << lo << endl;
        temp = vect[vect.size()-1];
        cout << "The first item of value: " << lo << "is moving to the end and is swapping with the value" <<vect[vect.size()-1 ] <<   endl;
        vect[0] = vect[vect.size()-1 ];
        cout << "The start vaue is : " << vect[0] << endl;

        vect[vect.size()-1] = lo;
        cout << "The end value is : " << vect[vect.size()-1] << endl;

    }
    else{
        cout << "The median is : " << hi << endl;
        vect[vect.size()-1] = hi;
        cout << "Taking the high value " <<  endl;
        cout << "The value is staying put " <<  endl;
    }
    cout << "Low value is:  " << vect[0] <<  endl;
    cout << "Mid value is:  " << vect[(vect.size()-1)/2] <<  endl;
    cout << "High value is:  " << vect[vect.size()-1] <<  endl;
    cout << "Value at pivot posistion is:" << vect[vect.size()-1] << endl;


}




int main() {
    vector<int> vect = { 3,8,7,5,9,2,1 }; //3
    vector<int> vect3 = {3, 1, 4, 5, 2, 6}; //4

    vector<int> vect1 = { 3, 7, 9, 2, 6, 5}; //5
    vector<int> vect2 = { 8, 2, 1, 5, 4}; // 4

    median_of_three(vect3);
    return 0;
}
