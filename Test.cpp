/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Oriya Alperin>
 * 
 * Date: 2021-03
 */

#include "doctest.h"
#include <iostream>
#include "Board.hpp"
#include "Direction.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

TEST_CASE("post and read") {
    ariel::Board board;
	board.post(24,0,Direction::Horizontal,"looking for a new job?");
    CHECK(board.read(24,5,Direction::Horizontal,12)=="ng for a new");
    board.post(5,16,Direction::Vertical,"Yael-Math teacher, 📞 050-5050505");
    CHECK(board.read(21,16,Direction::Vertical,7)=="r, 📞 05");
    board.post(10,29,Direction::Horizontal,"our pappy Lilo got lost 🐕" );
    CHECK(board.read(15,30,Direction::Horizontal,16)=="_M_____________o");
    board.post(11,1,Direction::Horizontal,"AirPods were found in the city center,returned by signs" );
    CHECK(board.read(11,0,Direction::Horizontal,19)=="_AirPods were found");
    board.post(14,25,Direction::Vertical,"To Bar&Ariel's wedding ↑" );
    CHECK(board.read(0,0,Direction::Vertical, 8)=="________");
    board.post(10,17,Direction::Horizontal,"ulan - praty DJ!");
    CHECK(board.read(10,17,Direction::Horizontal,23)=="mulan - party DJ! pappy");
    board.post(15,34,Direction::Horizontal,"guitar classes");
    CHECK(board.read(15,15,Direction::Horizontal,20)=="_t________o________g");
    board.post(32,14,Direction::Horizontal,"show must go on!");
    CHECK(board.read(25,16,Direction::Vertical,12)=="_050-50O0505");
    board.post(16,40,Direction::Horizontal,"vintage clothes");
    CHECK(board.read(16,34,Direction::Horizontal,9)=="u_____vin");
    board.post(16,32,Direction::Horizontal,"getting old?");
    CHECK(board.read(16,34,Direction::Horizontal,15)=="old? age clothes");
    board.post(30,45,Direction::Vertical,"falafel");
    CHECK(board.read(32,34,Direction::Horizontal,5)=="lafel");
    board.post(0,25,Direction::Vertical,"the perfect gift");
    CHECK(board.read(10,22,Direction::Horizontal,8)=="- ptrty ");
    board.post(11,32,Direction::Horizontal,"WandaVision,Disney+");
    CHECK(board.read(11,23,Direction::Horizontal,16)=="th city WandaVis");
    board.post(0,41,Direction::Vertical,"♥ coding?");
    board.post(0,41,Direction::Vertical,"");
    CHECK(board.read(0,41,Direction::Vertical,1)=="♥");
    CHECK(board.read(2,41,Direction::Vertical,10)=="coding? io");
    board.post(11,32,Direction::Horizontal,"enjoy your work? I don't think so");
    board.post(2,0,Direction::Horizontal,"will you marry me?");
    CHECK(board.read(2,9,Direction::Horizontal,17)=="marry me??I don't");
    CHECK(board.read(7,10,Direction::Horizontal,32)=="______e________f_______________g");
    CHECK(board.read(9,50,Direction::Vertical,9)=="_o+____o_");
    CHECK(board.read(29,25,Direction::Vertical,7)=="wedoing");
    board.post(19,19,Direction::Horizontal,"Dr Jhon|Before & After");
    CHECK(board.read(19,34,Direction::Vertical,6)=="it&r c");
    CHECK(board.read(19,15,Direction::Horizontal,6)=="_h__Dr");


    
}



/* Add more test cases here */
