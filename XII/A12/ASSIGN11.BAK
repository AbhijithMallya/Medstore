/*			ASSIGNMENT 11
Topic : Stack
Description : Infix to Post Fix Evaluation
D.O.S : 			*/
// Infix ------> Postfix ------> Evaluation
/*Example:
  Input:-  (((2+3)*4)/5)
  Output:- Postfix---> 23+4*5/
	   Result----> 4

//Example: Infix -> (A - C ) * B  -> postfix  AC-B *
//If A = 6, B = 5, C = 3 Then  ------>( 6-3 ) X 5 -> 63-5* = 13

/*P.s.: Limitation of this Program
	If input is more than 1 digit number this program does not work
	Because of character array.
	Conversion can be done by little bit of modification
*/
/*
Alogorithm for Infix To Postfix Conversion :
Suppose X is an arithmatic expression written in the infix notation,
Then Algorithm finds the equivalent postfix expression Y.

1. Push ' ( ' onto Stack, and add ' ) ' to the end of X
2. Scan X from left to right and repeat steps 3 to 6 for each element
   of X until the Stack is empty .
3. If an operand is encountered, Add it to Y
4. If a Left Parenthesis is encountered, push it onto Stack
5. If an operator is encountered, then:
   a) Repeatedly pop from Stack and add to Y each operator( on
	the top of the Stack ) which has the same prcedence or higher
	precedence than operator.
   b) Add operator to Stack.
   // End of if
6. If a right parenthesis is encountered, then:
    a) Repeatedly pop from Stack and add to Y each operator( on
	the top of the Stack ) until a left parenthesis is encountered.
    b) Remove the left Parenthesis . Do not add it to Y.
   // end of if
//End of step 2
7. Exit.

*/
//Header Files
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <process.h>
#include <math.h>

// Funtion Declarations
int IsEmptyStack() ;
int IsFullStack() ;
void Push( char ) ;
char pop() ;
int Precedence( char ) ;
int IsOperator( char ) ;
int Evaluate( int, int, char );

char Stack [100] ;
int top = -1 ;
//To check Stack is empty or not
int IsEmptyStack()
{
	if( top == -1 ) //Maximum Capacity of Stack is 100
	 return 1 ;
	else
	 return 0  ;
}

//To check Stack is Full or not
int IsFullStack()
{
	if( top == 100) //Maximum Capacity of Stack is 100
	 return 1 ;
	else
	 return 0  ;
}
//Pushing an element into the Stack
void Push( char ele )
{
   if( IsFullStack() )
   {
	cout<<"Stack OverFlow " ;
	exit( 0 ) ;
   }
   else
   {
	top++ ;
	Stack[top] = ele ;
   }
}
//Poping an element from the Stack
char Pop()
{
    char temp = NULL ;
    if( IsEmptyStack() )
    {
	cout<<"Stack UnderFlow" ;
	exit(0) ;
    }
    else
    {
       temp = Stack[top] ;
       top-- ;
    }

    return temp ;
}
//Returns the precedence of an operator
int Precedence(char ch)
{
     switch( ch )
     {
	case '^' : return 3 ;
	case '*' :
	case '/' : return 2 ;
	case '+' :
	case '-' : return 1 ;
     }
}
// To check whether the character is an operator or not
int IsOperator( char ch )
{
	switch( ch )
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^': return 1 ; //Operator
		default: return 0 ; //Not an Operator
	}
}
//Function to perfoem an opration
int Evaluate( int num1, int num2, char ch)
{
 switch ( ch )
 {
  case '+' : return  num1 + num2 ;
  case '-' : return  num1 - num2 ;
  case '*' : return  num1 * num2 ;
  case '/' :    if( num2 == 0 )
		{
		    cout<<"Divide by zero Error ";
		    exit( 0 );
		}		 return  num1 / num2 ;
  case '^' : return  pow( num1, num2 ) ;
 }
}


//Main Function
void main()
{
clrscr() ;
 char Infix[100] ; // To store Infix Expression X
 char Postfix[100] ; // To store Postfix Expression Y
 int StrLen ; // For finding the length of the string
 int i = 0 ; // Starting Index For Scanning Infix Expression
 int j = 0 ; // Index For Postfix Expression
 int prec1, prec2 ;    //For checking precedences
 char ch ;

 cout<<"Enter a Valid Arithmatic Expression( Ex: (5+6*4) )\n\n\t" ;
 gets( Infix ); // For Inputting Infix EXpression

 Push( '(' );   //Intial condition Stack[0] = (
  StrLen = strlen( Infix );
  Infix[StrLen] = ')' ; //Initial condition

  //Scan until Stack is Empty
  while( !IsEmptyStack() )
  {
     if( isdigit( Infix[i] ) ) // To check for A, B, .....( Operands )
      {
	Postfix[j] = Infix[i] ; //Algorithm : Step No: 3
	j++ ;
      }

     if( Infix[i] == '(' )    //Algorithm : Step No: 4
      Push( '(' ) ;

      if( IsOperator( Infix[i] ) )     //Algorithm : Step No: 5
      {
	do
	{
		prec1 = 0 ; //to Disable Initial Conditions
		prec2 = 1 ;
		if( IsOperator( Stack[top] ) )
		{
		  prec1 = Precedence( Stack[top] ) ;
		  prec2 = Precedence( Infix[i] ) ;
		}

		if( prec1 >= prec2 )
			{
			Postfix[j] = Pop() ;
			j++ ;
			}
		else
			Push( Infix[i] ) ;
	}while( prec1 >= prec2 ) ;
     }//End of if

     if( Infix[i] == ')' )
     {
	do
	{
	       ch = Pop() ;
	       if( ch != '(' )
	       {
		Postfix[j] = ch ;
		j++ ;
	       }
	}while( ch != '(' ) ;
     }//End of if
      i++ ;        //For the next operator

  } //End of Outer Most While

  Postfix[j] = '\0' ;  //To terminate the String
	cout<<"\n\nEquivalent Postfix Expression\n\n\t   " ;
	puts ( Postfix ) ;

//========================End of Infix to Postfix==========================

//PostFix Evaluation
/*
Algorithm:
1. Read the next element
2. If element is Operand then
	Push the element into the Stack
3. If element is an Operator then
	Begin
		Pop two Operands from the Stack ( For Unary Operator Pop One
		Operand )
		Evalute the Expression formed by the two operands and the
		operator .
		Push the result of the expression in the Stack
	end
4. If no more elements then
	POP the result
   else
   go to step 1.
*/

j = 0 ; //Index for Postfix Array
int Opd1, Opd2 ; //FoR Storing two Operands Popped from the Stack
int Result = 0 ; // To store the Result of the operation
while( Postfix[j] != '\0' ) //Checking for End of pOSTFIX
{
  if( isdigit( Postfix[j] ) ) //Step No. 2
   Push( Postfix[j] ) ;

  if( IsOperator( Postfix[j] ) ) // Step No. 3
  {
	Opd2 = Pop() - 48  ;//Character to Integer Conversion
	Opd1 = Pop() - 48  ;//  Ascii value of '0' = 48
			    // Ex. Ascii 49 - 48 = 1
			    // 49 is the ASCII VAlue of 1
       Result = Evaluate( Opd1, Opd2, Postfix[j] )  ;

       Push( Result + 48 ) ;

  }
  j++ ;
}

 cout<<"\n\nResult of the Arithmatic Expression"<<Pop() - 48 ;
 getch() ;
}
//========================End of Postfix Evaluation======================
