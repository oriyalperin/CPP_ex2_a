#include <iostream>
#include <string>
#include "Direction.hpp"
namespace ariel{
    class Board{
        public:
            static void post(unsigned int row, unsigned int column, Direction d , std::string message );
            static std::string read(unsigned int row, unsigned int column, Direction d, unsigned int length);
            static void show();

    };
    
}