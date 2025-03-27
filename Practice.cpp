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
class class_d1 : public class_b
{

    protected : 

        int number_1_protected_class_d1 ;

    public : 

        void method_1_public_class_d1_set_number_1_protected_class_d1( int input_number_1_method_1_public_class_d1 )
              ;
        void method_2_public_class_d1_display() ;

} ;

// // ############################

class class_d2 : public class_d1
{

    protected :
        int number_1_protected_class_d2 ;

    public :
        void method_1_public_class_d2_set_number_1_protected_class_d2( int input_number_1_method_1_public_class_d2 ) ;

        void method_2_public_class_d2_display() ;


} ;

// // ############################

class class_d3 : public class_d2
{

    private :
        int number_1_private_class_d3 ;

    public :
        void method_1_public_class_d3_set_input_number_into_number_1_private_class_d3( int input_number_1_method_1_public_class_d3) ;
    
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

void class_b :: method_1_public_class_b_set_number_1_protected_class_b( int number_1_input_method_1_protected_class_b) 
{


    number_1_protected_class_b = number_1_input_method_1_protected_class_b ;

} ;

/*

* Method name: method_2_public_class_b.
* This method dont receive and don't sent any value.
* This method set display class_b with cout.

*/

void class_b :: method_2_public_class_b_display()
{

    cout << "class_b" << endl ;

    cout << "--------------" << endl ;

}

// //#############################

// & Method's for class_d1:

/*
* Name of class_d1 : method_1_public_class_d1_set_number_1_protected_class_d1
* This class don't sent value and don't receive value.
* This class set input_number_1 in method_1_public class_d1 to number_1 protected class_d1.

*/

void class_d1 :: method_1_public_class_d1_set_number_1_protected_class_d1( int input_number_1_method_1_public_class_d1 )
{

    number_1_protected_class_d1 = input_number_1_method_1_public_class_d1 ;

} ;

/*

* Method name: method_2_public_class_d1.
* This method dont receive and don't sent any value.
* This method set display class_d1 with cout.

*/

void method_2_public_class_d1_display()
{

    cout << "class_d1" << endl ;

} ;

// //#############################

// & Method's for class_d2 :

/*

* Method_1 public class_d2
* Method name : method_1_public_class_d2_set_number_1_protected_class_d2.
* This method receive integer value and don't sent value.
* This method set number_1 protected class d2 with input number in method_1 public class_d2.

*/
void class_d2 :: method_1_public_class_d2_set_number_1_protected_class_d2( int input_number_1_method_1_public_class_d2 )
{

    number_1_protected_class_d2 = input_number_1_method_1_public_class_d2 ;

    /*

* Method name: method_2_public_class_d2.
* This method dont receive and don't sent any value.
* This method set display class_d2 with cout.

*/

} ;

void method_2_public_class_d2_display()
{

    cout << "class_d2" << endl ;

}

// //#############################

// & Method's for class_d3 :

/*

* Method_1 public class_d3
* Method name : method_1_public_class_d3_set_input_number_into_number_1_private_class_d3.
* This method receive integer value and don't sent value.
* This method set number_1 public class d3 with input number in method_1 public class_d3.

*/
