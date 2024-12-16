#include <iostream>
#include <vector>


using namespace std;

struct Orchard {
  int year;     // The year the orchard was established
  string id;    // The orchard's ID
  string type;  // The type of fruit grown
  int num;      // The number of fruit harvested last year
};


int main() {

  // ----------------------------------------------------------//

  // ERASING AN INT

  // Create a vector of integers
  vector <int> numApples = {5, 27, 18, 1, 105, 67, 13};

  // Print out the values
  cout << "ORIGINAL VECTOR OF INTS:" << endl;
  for (int i = 0; i < numApples.size(); ++i) {
    cout << "    " << numApples.at(i) << endl;
  }

  // Remove the last element
  numApples.pop_back();

  // Print out the values
  cout << "NEW VECTOR OF INTS:" << endl;
  for (int i = 0; i < numApples.size(); ++i) {
    cout << "    " << numApples.at(i) << endl;
  }

  cout << endl;


  // ----------------------------------------------------------//

  // ERASING A DOUBLE

  // Create a vector of doubles
  vector <double> prices = {1.99, 3.45, 2.15, 12.75};

  // Print out the values
  cout << "ORIGINAL VECTOR OF DOUBLES:" << endl;
  for (int i = 0; i < prices.size(); ++i) {
    cout << "    " << prices.at(i) << endl;
  }

  // Remove the second element
  prices.erase(prices.begin()+1); 

  // Print out the values
  cout << "NEW VECTOR OF DOUBLES:" << endl;
  for (int i = 0; i < prices.size(); ++i) {
    cout << "    " << prices.at(i) << endl;
  }

  cout << endl;

  


  // ----------------------------------------------------------//

  // ERASING A STRING

  // Create a vector of strings
  vector <string> lyrics = {"Hail", "To", "The", "Victors", "Valiant"};

  // Print out the values
  cout << "ORIGINAL VECTOR OF STRINGS:" << endl;
  for (int i = 0; i < lyrics.size(); ++i) {
    cout << "    " << lyrics.at(i) << endl;
  }

  // Remove the first element
  lyrics.erase(lyrics.begin()+0);

  // Print out the values
  cout << "NEW VECTOR OF STRINGS:" << endl;
  for (int i = 0; i < lyrics.size(); ++i) {
    cout << "    " << lyrics.at(i) << endl;
  }

  cout << endl;

  

  // ----------------------------------------------------------//

  // ERASING A STRUCT

  // Create some orchard data
  Orchard sector1 = {1954, "A13", "bartlett pear", 12980};
  Orchard sector2 = {2002, "B05", "gala apple", 3492};
  Orchard sector3 = {1983, "A65", "tart cherry", 35211};
  Orchard sector4 = {1983, "C25", "fuji apple", 25038};

  // Put the data into a vector
  vector <Orchard> allOrchards;
  allOrchards.push_back(sector1);
  allOrchards.push_back(sector2);
  allOrchards.push_back(sector3);
  allOrchards.push_back(sector4);

  // Print out the type and number for all sectors
  cout << "ORIGINAL VECTOR OF STRUCTS:" << endl << endl;
  for (int i = 0; i < allOrchards.size(); ++i) {
      cout << "    type:   " << allOrchards.at(i).type << endl;
      cout << "    number: " << allOrchards.at(i).num << endl;
      cout << endl;
  }

  // Erase third element
  allOrchards.erase(allOrchards.begin()+2);

  // Print out the type and number for all sectors
  cout << "NEW VECTOR OF STRUCTS:" << endl << endl;
  for (int i = 0; i < allOrchards.size(); ++i) {
      cout << "    type:   " << allOrchards.at(i).type << endl;
      cout << "    number: " << allOrchards.at(i).num << endl;
      cout << endl;
  }

  cout << endl;


  // ----------------------------------------------------------//

  // ERASING A VECTOR

  // Create some matrix data
  vector <vector <int> > matrix;
  for (int i = 1; i < 10; ++i) {
    vector <int> row; 
    for (int k = 1; k < 6; ++k) {
      row.push_back(10*i + k);
    }
    matrix.push_back(row);
  }


  // Print out the matrix
  cout << "ORIGINAL VECTOR OF VECTORS:" << endl << endl;
  for (int iRow = 0; iRow < matrix.size(); ++iRow) {
    for (int iCol = 0; iCol < matrix.at(iRow).size(); ++iCol) {
      cout << matrix.at(iRow).at(iCol) << " ";
    }
    cout << endl;
  }
  cout << endl;

  // Remove the fifth row
  matrix.erase(matrix.begin()+4);

  // Print out the matrix
  cout << "NEW VECTOR OF VECTORS:" << endl << endl;
  for (int iRow = 0; iRow < matrix.size(); ++iRow) {
    for (int iCol = 0; iCol < matrix.at(iRow).size(); ++iCol) {
      cout << matrix.at(iRow).at(iCol) << " ";
    }
    cout << endl;
  }

  cout << endl;





}