/*
Toms carpet clearning service charges:
 * $25 per small room
 * $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days

 * This program will ask the user to specify the number of
 * small and large rooms that they would like cleaned and 
 * provide an estimate

*/



#include <iostream>

int main() {
    
    const int smallRoomCost {25};
    const int largeRoomCost {35};
    const float salesTax {0.06};
    
    std::cout << "Please enter the number of small rooms you would like cleaned:" << std::endl;
    int smallRooms {0};
    std::cin >> smallRooms;
    
    std::cout << "Number of small rooms: " << smallRooms << std::endl;

    std::cout << "Please enter the number of large rooms you would like cleaned:" <<std::endl;
    int largeRooms {0};
    std::cin >> largeRooms;
    
    std::cout << "Number of large rooms: " << largeRooms << std::endl;
    
    float total {0};
    float tax {0};
    total = smallRoomCost * smallRooms + largeRoomCost * largeRooms;
    tax = total * salesTax;
    total += tax;
    
    
    
    std::cout << "Total bill for cleaning services: \n Price per large room: $" << largeRoomCost;
    std::cout << "\nPrice per small room: $" << smallRoomCost; 
    std::cout << "\nLarge rooms: " << largeRooms << "\nSmall rooms: "<< smallRooms;
    std::cout << "\nCost: " << total - tax;
    std::cout << "\nTax: " << tax;
    std::cout << "\nTotal: " << total;
    
}