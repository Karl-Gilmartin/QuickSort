#include <iostream>
#include <vector>

void swap(std::vector<int>& vect, int pov_index){
    int i = vect.size()-1-1;
    int j = 0;
    int pivot = vect[vect.size()-1];
    std::cout << "The pivot value is: " << pivot<< std::endl;
    while(i >= j){
        if (vect[j]> pivot && vect[i]< pivot){
            int temp = vect[i];
            vect[i] = vect[j];
            vect[j] = temp;
            j = j+1;
            i=i-1;
        }
        else if (vect[j]> pivot && vect[i]> pivot){
            i = i-1;
        }
        else if (vect[j]< pivot && vect[i]< pivot){
            j = j+1;
        }
    }
    int temp2 = vect[pov_index];
    std::cout << "Location: " << pov_index << std::endl;
//    vect[pov_index] = vect[vect.size()-1];
//    vect[vect.size()-1] = temp2;
}

void median_of_three(std::vector<int>& vect){
    int lo = vect[0];
    int hi = vect[vect.size()-1];
    int mid = vect[(vect.size()-1)/2];
    int temp;
    int pov_index = 0;
    if ((lo < mid && mid < hi) || (hi < mid && mid < lo)){
        vect[(vect.size()-1)/2] = vect[(vect.size()-1)];
        vect[vect.size()-1] = mid;
        pov_index = (vect.size()-1);
    }
    else if ((mid < lo && lo < hi) || (hi < lo && lo < mid)){
        temp = vect[vect.size()-1];
        vect[0] = vect[vect.size()-1];
        vect[vect.size()-1] = lo;
        pov_index = 0;
    }
    else{
        vect[vect.size()-1] = hi;
        pov_index = (vect.size()-1);
    }
    swap(vect, pov_index);
}

int main() {
    std::vector<int> vect;
    int i;
    while(std::cin >> i){
        vect.push_back(i);
    };
    vect.reserve(vect.size()); // reserve space for the vector
    median_of_three(vect);
    return 0;
}
