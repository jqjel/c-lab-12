#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "ships.h"

using namespace std;

// read through the Boats.txt file and store each boat in the boat struct
void loadShips(vector<Boat> &boats, ifstream& boat_data){
    // TODO: Write a function to read in the ship data into the boats vector
    
    Boat boat; 
  // Continue reading data until the end of the file is reached
    while (boat_data >> boat.name >> boat.flag >> boat.TEU >> boat.speed) {
    // Add this rover to the vector
        boats.push_back(boat);
    }
}


bool checkOneShip(const Boat& boat){
    //TODO: Write a function to verify the criteria for one boat
    // Remember, for US flagged entries, the flag will be "USA"
    if (3500 <= boat.TEU && boat.TEU <= 5500 && boat.flag == "USA" && boat.speed > 15) {
        return 1;
    }
    else {
        return 0;
    }
}

void removeShips(vector<Boat> &boats){
    // TODO: Write a function that removes the entries that don't meet the
    // requirements
    int i = 0;
    while (i < boats.size()) {
        if (checkOneShip(boats.at(i)) == 0) {
            boats.erase(boats.begin()+i);
        }
        else {
            ++i;
        }

    }

}

void printShips(vector<Boat> &boats, ofstream& os){
    // The printShips function is written for you, but look through it to see
    // how the information is printed
    for(int x = 0; x < boats.size(); ++x ){
        os << boats.at(x).name << "\t"
             << boats.at(x).flag << "\t"
             << boats.at(x).TEU << "\t"
             << boats.at(x).speed << endl;
    }
}
