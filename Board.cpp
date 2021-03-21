#include <iostream>
#include <string>
#include "Board.hpp"
#include "Direction.hpp"
using namespace std;
using namespace ariel;

void Board::post(unsigned int row, unsigned int column, Direction d, string message )
{
    cout << "posting on board" << endl;  
}

string Board::read(unsigned int row, unsigned int column, Direction d, unsigned int length)
{
    return "reading\n";
}

void Board::show()
{
    cout << "current board" << endl;  
}
