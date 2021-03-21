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

TEST_CASE("Good post") {
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

TEST_CASE("Bad inputs") {
    ariel::Board board;
    CHECK_THROWS(board.post(-1,2,Direction::Horizontal, "first negative Hor"));
    CHECK_THROWS(board.post(5,-9,Direction::Horizontal, "second negative Hor"));
    CHECK_THROWS(board.post(-6,-8,Direction::Horizontal, "two negative Hor"));
    CHECK_THROWS(board.post(-32,7,Direction::Vertical, "first negative Ver"));
    CHECK_THROWS(board.post(34,-19,Direction::Vertical, "first negative Ver"));
    CHECK_THROWS(board.post(-6,-8,Direction::Vertical, "two negative Ver"));
    CHECK_THROWS(board.read(2,0,Direction::Vertical,-8));   //negative length
    CHECK_THROWS(board.read(-3,5,Direction::Vertical,10));  //read first negative Ver
    CHECK_THROWS(board.read(12,-25,Direction::Vertical,30));  //read second negative Ver
    CHECK_THROWS(board.read(14,13,Direction::Vertical,22));  //read two negative Ver
    CHECK_THROWS(board.read(-25,-41,Direction::Horizontal,23)); //read two negative Hor
    CHECK_THROWS(board.read(-33,1,Direction::Horizontal,18)); //read first negative Hor 
    CHECK_THROWS(board.read(27,-44,Direction::Horizontal,2)); //read second negative Hor 
    CHECK_THROWS(board.read(-9,15,Direction::Vertical,-7));  //read first length negative Ver
    CHECK_THROWS(board.read(10,-16,Direction::Vertical,-4));  //read second length negative Ver
    CHECK_THROWS(board.read(18,3,Direction::Vertical,-22));  //read two length negative Ver 
    CHECK_THROWS(board.read(-5,-39,Direction::Horizontal,14)); //read two length negative Hor
    CHECK_THROWS(board.read(-50,3,Direction::Horizontal,-5)); //read first length negative Hor 
    CHECK_THROWS(board.read(9,-17,Direction::Horizontal,-9)); //read second length negative Hor 

    
}


/* Add more test cases here */
