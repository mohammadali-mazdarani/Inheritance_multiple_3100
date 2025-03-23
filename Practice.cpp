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

// //####################################
class class_d1 : public class_b{

protected : 

int number_1_protected_class_d1 ;

public : 

void method_1_public_class_d1_set_number_1_protected_class_d1( int input_number_1_method_1_public_class_d1 )
 ;

} ;


// // ############################

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
* This method dont receive and don't sent any value.
* This method set display class_b with cout.

*/

void class_b :: method_2_public_class_b_display(){

cout << "class_b" << endl ;

cout << "--------------" << endl ;

}

// //#############################

// & Method's for class_d1:

void class_d1 :: method_1_public_class_d1_set_number_1_protected_class_d1( int input_number_1_method_1_public_class_d1 ){

number_1_protected_class_d1 = input_number_1_method_1_public_class_d1 ;

} ;

//--------------------------