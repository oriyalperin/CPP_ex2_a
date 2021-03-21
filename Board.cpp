#include <iostream>
#include <string>
#include "Board.hpp"
#include "Direction.hpp"
using namespace std;
using namespace ariel;

void Board::post(unsigned int row, unsigned int column, Direction , string message )
{
    if(row<0 || column<0)
    {
        throw out_of_range("row and column must be positive");
    }
}

string Board::read(unsigned int row, unsigned int column, Direction , unsigned int length)
{
    return "hello\n";
}

void Board::show()
{
    printf("all posts\n");
}
