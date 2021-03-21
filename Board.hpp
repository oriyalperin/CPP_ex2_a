#include <iostream>
#include <string>
#include "Direction.hpp"
namespace ariel{
    class Board{
        public:
            static void post(unsigned int row, unsigned int column, Direction, std::string message );
            static std::string read(unsigned int row, unsigned int column, Direction, unsigned int length);
            static void show();

    };
    
}