 #ifndef __FLAVOR_H
 #define __FLAVOR_H 201609

 #include <iostream>
 #include <string>
 #include <vector>

 using namespace std;

 class Flavor {
   public:
     void add_Flavor(string flav);

     string flavor_to_string(int flavor_index);

     int number_of_flavors();

   private:
     vector <string> flavors = {"Vanilla", "Chocolate", "Cookies and Cream", "Raspberry Swirl"};
 };
 #endif
