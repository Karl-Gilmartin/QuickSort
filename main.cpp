#include <iostream>
#include <vector>

using namespace std;


void partition(vector<int>& vect){
    int i = vect.size()-1-1;
    int j = 0;
    int pivot = vect[vect.size()-1];
    bool swap_e, swap_s;
    cout << "The pivot value is: " << pivot<< endl;
    while(i >= j){
        
        if(vect[i] >= pivot){
            // swap with next larger item
            swap_e = false;
            i = i-1;
            
        }
        else{
            swap_e = true;
        }
        if (vect[j] <= pivot){
            j = j+1;
            swap_s = false;
        }
        else{
            swap_s = true;
           
        }
        
        if (swap_s == true && swap_e == true){
            swap(vect[i], vect[j]);
            // swap them
        }
    }
    cout << "The pivot is at index:"<< j<< endl;
    swap(vect[j], vect[vect.size()-1]);
//    cout << vect[0]<< endl;
//    cout << vect[1]<< endl;
//    cout << vect[2]<< endl;
//    cout << vect[3]<< endl;
//    cout << vect[4]<< endl;
//    cout << vect[5]<< endl;

}
void swaps(int &i, int &j){
    cout << "swap start" << endl;
    int temp = i;
    i = j;
    j = temp;
}

void median_of_three(vector<int>& vect){
    int lo = 0;
    int hi = vect.size()-1;
    int mid = (vect.size()-1)/2;
    int temp;

    if ((vect[lo] < vect[mid] && vect[mid] < vect[hi]) || (vect[hi] < vect[mid] && vect[mid] < vect[lo])){
        //Mid is the median
        cout<< "mid is pivot";
        swap(vect[mid],vect[hi]);
    }
    else if ((vect[mid] < vect[lo] && vect[lo] < vect[hi]) || (vect[hi] < vect[lo] && vect[lo] < vect[mid])){
        // Low value is median
        cout<< "lo is pivot"<< endl;
        swap(vect[lo],vect[hi]);
    }
    else{
        // the pivot is the endpoint(hi)
    }

    partition(vect);

}
int main() {
//    vector<int> vect3; //4
//    vect3.push_back(3);
//    vect3.push_back(1);
//    vect3.push_back(6);
//    vect3.push_back(5);
//    vect3.push_back(2);
//    vect3.push_back(4);
    vector<int> vect;
    int i;
    while(cin >> i){
            vect.push_back(i);
        };

//    vector<int> vect1 = { 3, 7, 9, 2, 6, 5}; //5
//    vector<int> vect2 = { 8, 2, 1, 5, 4}; // 4
//    vector<int> vect4 = { 6,4,9,2,6,4}; // 4

    median_of_three(vect);
    return 0;
}
