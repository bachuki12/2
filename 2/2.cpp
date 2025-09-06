#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class lake {
private:
    string lake_name;
    float lake_depth;
    float lake_area;

public:
    lake();
    void setData(string, float, float);
    void aboutlake();
};

/// default lake parameters 

lake::lake() {
    lake_name = "Farnavaz";
    lake_depth = 2073.0;
    lake_area = 37.5;
}

// set lake parameters 
void lake::setData(string name, float depth, float area) {
    lake_name = name;
    lake_depth = depth;
    lake_area = area;

}
// get lake parameters 
void lake::aboutlake() {
    cout << lake_name<<" lake is "<<lake_depth<<"m depth and it's area is "<<lake_area<<"cm^2" << endl;

}


int main(){
    lake lake1; //creating class lake object name lake 1 
    lake1.aboutlake(); //reading class lake default values 
    string name; // creating wariable named name which means lake name 
    float depth, area; // creating wariable depth and area of lake  


    return 0;
}
