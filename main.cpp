#include <iostream>
#include <vector>

using namespace std;


void swap(vector<int>& vect){
    int i = vect.size()-1-1;
    int j = 0;
    int pivot = vect[vect.size()-1];
    cout << "The pivot value is: " << pivot<< endl;
//    cout << "The j item is:" << vect[j]<< endl;
//    cout << "The i item is:" << vect[i]<< endl;
    int pov_index;
    while(i >= j){
//        cout<< "Whlile loop initilized"<< endl;

        if (vect[j]> pivot && vect[i]< pivot){
//            cout << "The value: " << vect[j] << "is being swapped with:"<< vect[i]<< endl;
            int temp = vect[i];
            pov_index = j+1;
//            cout<<1<< endl;
            vect[i] = vect[j];
            vect[j] = temp;
            j = j+1;
            i=i-1;
        }
        else if (vect[j]> pivot && vect[i]> pivot){
//            cout << "The value(j): " << vect[j] << "is bigger than pivot but"<< vect[i] << "is also bigger"<< endl;

//            cout << "Moving index of:" << vect[i]<< "to :"<< vect[i-1]<< endl;
//            cout<<2<< endl;
            i = i-1;
        }
        else if (vect[j]< pivot && vect[i]< pivot){

//            cout << "The value(j): " << vect[j] << "is less than pivot but"<< vect[i] << "is also smaller"<< endl;
//            cout << "Moving index of:" << vect[j]<< "to :"<< vect[j+1]<< endl;
//            cout<<3<< endl;
            j = j+1;
        }
        else if(vect[j] == vect[i]){
//            cout << "You have reached the end of the program."<< endl;
        }
        else{
//            cout<< "Error!!";
        }

    }

//    cout << "The program is now finished"<< endl;
//    cout<< "The value at pov_index is:"<< vect[pov_index]<< endl;
    int temp2 = vect[pov_index];
    cout << "Location" << pov_index<< endl;
    vect[pov_index] = vect[vect.size()-1];
    vect[vect.size()-1] = temp2;

//    cout << vect[0]<< endl;
//    cout << vect[1]<< endl;
//    cout << vect[2]<< endl;
//    cout << vect[3]<< endl;
//    cout << vect[4]<< endl;
//    cout << vect[5]<< endl;
//    cout << vect[6]<< endl;

}

void median_of_three(vector<int>& vect){
    int lo = vect[0];
    int hi = vect[vect.size()-1];
    int mid = vect[(vect.size()-1)/2];
    int temp;
//    cout << "The low value is: " << lo << endl;
//    cout << "The median value is: " << mid << endl;
//    cout << "The high value is: " << hi << endl;

    if ((lo < mid && mid < hi) || (hi < mid && mid < lo)){
//        cout << "The median is : " << mid << endl;
//        cout << "The middle item of value: " << mid << "is moving to the end and is swapping with the value: " <<vect[vect.size()-1 ] <<   endl;
        vect[(vect.size()-1)/2] = vect[(vect.size()-1)];
//        cout << "The mid vaue is : " << vect[(vect.size()-1)/2] << endl;
        vect[vect.size()-1] = mid;
//        cout << "The end value is : " << vect[vect.size()-1] << endl;
    }
    else if ((mid < lo && lo < hi) || (hi < lo && lo < mid)){
//        cout << "The median is : " << lo << endl;
        temp = vect[vect.size()-1];
//        cout << "The first item of value: " << lo << "is moving to the end and is swapping with the value" <<vect[vect.size()-1 ] <<   endl;
        vect[0] = vect[vect.size()-1 ];
//        cout << "The start vaue is : " << vect[0] << endl;

        vect[vect.size()-1] = lo;
//        cout << "The end value is : " << vect[vect.size()-1] << endl;

    }
    else{
//        cout << "The median is : " << hi << endl;
        vect[vect.size()-1] = hi;
//        cout << "Taking the high value " <<  endl;
//        cout << "The value is staying put " <<  endl;
    }
//    cout << "Low value is:  " << vect[0] <<  endl;
//    cout << "Mid value is:  " << vect[(vect.size()-1)/2] <<  endl;
//    cout << "High value is:  " << vect[vect.size()-1] <<  endl;
//    cout << "Value at pivot posistion is:" << vect[vect.size()-1] << endl;
    swap(vect);


}



void quicksort(vector<int>& vect){
//    median_of_three(vect);

}


int main() {
    vector<int> vect; //3
    int i;
    while(cin >> i){
        vect.push_back(i);
    };
//    vector<int> vect3 = {3, 1, 4, 5, 2, 6}; //4

//    vector<int> vect1 = { 3, 7, 9, 2, 6, 5}; //5
//    vector<int> vect2 = { 8, 2, 1, 5, 4}; // 4
//    vector<int> vect4 = { 6,4,9,2,6,4}; // 4

    median_of_three(vect);
    return 0;
}
