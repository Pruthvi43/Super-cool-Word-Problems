#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // Problem 1: If Joeseph Sangem owes 20,000 dollars in debt, 
    // how much money would he have in his bank account if his debt switched into positive?
    cout << "Hello!" << endl;

    int debt = 20000;
    int absoluteValue = abs(debt);
    cout << "The absolute value of Joeseph Sangem's debt is $" << absoluteValue << endl;

// Problem 3: Shrish is running to catch the bus. The path is in the shape of a rectangle. 
// The length of the rectangle is 300 ft and the width is 200ft.
//  What is the distance of the fastest route he can take?

int value1 = 200;
int value2 = 300;

float hypotenuse = hypot(200,300);

cout << "The distance Shrish has to run to catch the bus at the fastest amount of time is " <<  hypotenuse << "feet" << endl;

// Problem 2: John Doe’s brain is enormous but his brain is in the shape of a cube. If his brain was 30 inches long, 
// what is the volume of his brain?

int length = 30;

float volume = pow(30,3);

cout << "John Doe's brin has the volume of " << volume << " cubic inches" << endl;



    // double sqrt_number = 15;
    // double squareRoot = sqrt(sqrt_number);
    // cout << "The square root of the number is " << squareRoot << endl;
    // return 0;
}