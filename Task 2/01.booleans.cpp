// 01.booleans.cpp
// Alejandro Cerezo Contreras 28-09-2023
// Description

#include <iostream>
using namespace std;

int main() {
  // a. true and true
  cout << "true and true is " << (true and true) << endl;

  // b. false and true
  cout << "false and true is " << (false and true) << endl;

  // c. 1 = 1 and 2 = 1
  cout << "1 = 1 and 2 = 1 is " << ((1 == 1) and (2 == 1)) << endl;

  // d. "test" = "test"
  cout << " test = test is " << ("test" == "test") << endl;

  // e. 1 = 1 or 2 ≠ 1
  cout << "1 = 1 or 2 = 1 is " << ((1 == 1) or not (2 == 1)) << endl;

  // f. true and 1 = 1
  cout << "true and 1 = 1 is " << (true and (1 == 1)) << endl;

  // g. "test" = "testing"
  cout << "\"test\" = \"testing\" is " << ("test" == "testing") << endl;

  // h. 1 ≠ 0 and 2 = 1
  cout << "1 ≠ 0 and 2 = 1 is " << (!(1 == 0) and (2 == 1)) << endl;

  // i. "" = ''
  cout << " \"\" = '' is " << ("" == "") << endl;

  // j. "test" = 1
  // cout << ("test" == 1) << endl;
  // It has no sense


  // k. not (true and false)
  cout << "not (true and false) is " << (!((true and false))) << endl;

  // l. not (1 = 1 and 0 ≠ 1)
  cout << "not (1 = 1 and 0 ≠ 1) is " << (!((1 == 1) and !(0 == 1))) << endl;

  // m. not (10 = 1 or 100 = 100)
  cout << "not (10 = 1 or 100 = 100) is " << (!((10 == 1) or (100 == 100))) << endl;

  // n. not (1 ≠ 10 or 3 = 4)
  cout << " not (1 ≠ 10 or 3 = 4) is " << (!(!(1 == 10) or (3 == 4))) << endl;

  // o. not ("testing" = "testing" and "Zed" = "Cool Guy")
  cout << "not (\"testing\" = \"testing\" and \"Zed\" = \"Cool Guy\") is " << (!(("testing" == "testing") and ("Zed" == "Cool Guy"))) << endl;

  // p. 1 = 1 and not ("testing" = 1 or 1 = 0)
  //cout << ((1 == 1) and (!("testing" == 1 or 1 == 0))) << endl;
  // It has no sense

  // q. "chunky" = "bacon" and not (3 = 4 or 3 = 3)
  cout << "\"chunky\" = \"bacon\" and not (3 = 4 or 3 = 3) is " << (("chunky" == "bacon") and (!((3 == 4) or (3 == 3)))) << endl;

  // r. 3 = 3 and not ("testing" = "testing" or "Ruby" = "Fun")
  cout << "3 = 3 and not (\"testing\"= \"testing\" or \"Ruby\" = \"Fun\")is " << ((3 == 3) and (!(("testing" == "testing") or ("Ruby" == "Fun")))) << endl;

  cout << "What is the difference between an algorithm and a program? Explain it in few lines." << endl;
  cout << "An algorithm is a step-by-step procedure for solving a problem and a \nprogram is a specific implementation of an algorithm in a programming language." << endl;
  return 0;
}