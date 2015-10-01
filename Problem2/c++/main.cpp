//MALCOLM NAVAROO                                                              
//CIS544 - OOP c++                                                             
//main.cpp                                                                     
//This is the main file - it creates a Worker object and calls it to run assignment
//check Worker.cpp for more details
     
#include <iostream>
using namespace std;
#include "Worker.h"

int main()
{
  //INIT WORKER OBJ + TELL ACCOUNTANT TO GO TO WORK
  Worker w;
  w.accountantGoToWork();

  return 0;
}
