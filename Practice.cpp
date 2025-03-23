#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */

/* 
* Description of program : 
* This program show Inheritance multiple.
*/

/*
* Branch's name:
* main : total program.
* write : write program.
* test_debug : test program and debug.
* Program write in write branch and test and debug in test_debug branch and total program in amin branch.
*/

// TODO Classes

// & class_b.
class class_b{

protected : 

int number_1_protected_class_b ;

public :

void method_1_public_class_b_set_number_1_protected_class_b( int number_1_input_method_1_protected_class_b) ;

void method_2_public_class_b_display() ;

};

//-------------------

int main(int argc, char** argv)
{

getch();
}

// TODO Method's for classes.

// & Method's for class_b:

/*
* method name : method_1_public_class_b.
* This method receive integer value and don't sent any value.
* This method set input value to method into number_1_protected_class_b.
*/

void class_b :: method_1_public_class_b_set_number_1_protected_class_b( int number_1_input_method_1_protected_class_b) {


number_1_protected_class_b = number_1_input_method_1_protected_class_b ;

} ;

/*
* Method name: method_2_public_class_b.

*/
//--------------------------