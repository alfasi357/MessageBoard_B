#include <iostream>
#include <unordered_map>
#include <string>
#include <limits.h>
#include "Direction.hpp"

using namespace std;

namespace ariel{
class Board{ 
public:   
    unsigned int x;
    unsigned int y;
    unsigned int max_x;
    unsigned int max_y;
    unsigned int min_x;
    unsigned int min_y;
    unordered_map<unsigned int, unordered_map<unsigned int, char>> point;
        Board(){
        x = 0;
        y = 0;
        max_x = 0;
        max_y = 0;
        min_x = UINT_MAX;
        min_y = UINT_MAX; 
            };
 void post(unsigned int y, unsigned int x, Direction d, std::string str);
 string read( unsigned int y,  unsigned int x, Direction d, unsigned int num);
void show();
};
}