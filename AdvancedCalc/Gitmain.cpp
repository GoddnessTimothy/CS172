#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
using namespace std;
int main(int argc, const char * argv[])
{
//changes from windows

	/*
	d = vt
	Distance
	Velocity
	Time

	2.  Quadratic Formula
	x = a^2 +2ab +b^2
	K^2 means k*k

	3.  Circle cube, sphere, Pyramid
	4.  Frustum, Cylinder

	5.  5a + (3-b)^3 -7c^4 +8(3c-d)
	6.  Quadratic forumla
	7.  sqaureRoot(a^2 +b^2+c^2)

	Formula Reference:
	pi = 3.14159

	Circle
	Area = pi * r^2
	Circumference = 2 * pi * r
	Sphere:

	Volume = (4/3) * pi ^3 * r
	Surface Area = 4 * pi * r^2
	Cube:
	Volume: a^3; a is the edge
	Surface Area = 6a^2
	Perimeter of a cube = 12a;  12 edges in a cube
	Right Rectangular Pyramid:
	l = base length
	w = base width
	h = pyramid height
	Surface Area:  lw +l * radical ((w/2)^2+h^2) + w * radical ((l/2)^2 + h^2)
	Volume = (1wh/3)
	Cylinder:
	Volume = pi * r^2 * h
	Surface Area = (2 * Pi * r * h) + (2*pi * r^2)
	*/

	//pi will always be this value.  Constants do not change
	const double pi = 3.14159;
	const string volumeSuffix = " Cubed";
	const string SASuffix = " Squared";

	string solveDistanceUnits;
	string cubeUnits;
	string pyrUnits;

	//Values
	double cylinderRadius;
	double cylinderHeight;
	double sphereRadius;
	double circleRadius;
	double cubeEdge;
	double a, b, c;
	double quadA, quadB, quadC, quadD;
	double quadAnsNeg;
	double time;
	double speed;
	double pyrHeight;
	double pyrWidth;
	double pyrLength;
	double pyrA, pyrB, pyrC;
	double frustum_R;
	double frustum_r;
	double frustumHeight;
	double frustumA;
	double q, w, e, r;
	double solveA, solveB, solveC, solveD, solveE;


	///Solvers and formulas
	double circleArea; //Done!
	double circleCircumference; //Done!
	double sphereSA; //Done!
	double sphereVolume; //Done!
	double cylinderSA;//Done!
	double cylinderVolume;//Done!
	double cubeVolume;//Done!
	double cubePerimeter;//Done!
	double cubeSA;//Done!
	double quadratic;//Done!
	double pyrVolume;//Done!
	double pyrSA;//Done!
	double distance;//Done!
	double frustum;
	double solve;

	/*TODO
	Frustum
	*/

	/*Do not have to show the greeting everytime the program loops.  Only need to show it once!
	Second cout statement does not show in console.  Used '\n' for new line instead.  Same functionality
	Able to show muti-line text without using multiple cout statements.  Must have start and end quotes for each new line of text
	*/

	cout << "Hello! I am an advanced Mathematics Calculator v0.1!\n"
		"Note: I hardcoded the value of pi to be '3.14159'\n"
		"Please also note that you are not limited to some of the suggested units in [].  They are there as examples." << endl;
	cout << endl << endl;
	//Neat feature menu.  Easy to maintain.
	cout << "List of features:\n"
		"\tArea of a circle\n"
		"\tCircumference of a circle\n"
		"\tSurface Area of a sphere\n"
		"\tVolume of a sphere\n"
		"\tVolume of a cylinder\n"
		"\tSurface area of a cylinder\n"
		"\tSurface area of a cube (NEW!)\n"
		"\tPerimeter of a cube (NEW!)\n"
		"\tQuadratic Equation Calculator(NEW!)\n"
		"\tDistance forumula calculator(NEW!)";
	cout << endl << endl;

	//Program starts here and loops infinitely until the user triggers the else statement, enters a non-double or negative value
	while (true) {
		//Calculate the Area of a circle
		cout << endl;
		cout << "===============Area of a circle====================" << endl;
		cout << "Enter the radius: ";
		cin >> circleRadius;
		if (circleRadius <= 0.0){
            cout<<"You must have a positive value!"<<endl;
            cin.get();
            break;
		}
		circleArea = pi * pow(circleRadius, 2.0);
		cout << "The area of the circle is: " << circleArea << endl;


		//Calculate the circumference of a circle
		cout << "===============Circumference of a circle=============" << endl;
		cout << "Enter the radius: " << endl;
		cin >> circleRadius;
		if (circleRadius <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		circleCircumference = 2.0*pi*circleRadius;
		cout << "The circumference of the circle is: " << circleCircumference << endl;


		//Calculate the surface area of a sphere
		cout << "================Surface area of a sphere===============" << endl;
		cout << "Enter the radius: " << endl;
		cin >> sphereRadius;
		if (sphereRadius <= 0.0){
            cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		};
		//Surface Area = 4 * pi * r^2
		sphereSA = 4 * pi*pow(sphereRadius, 3.0);
		cout << "The surface area is: " << sphereSA << endl;


		//Calculate the volume of a sphere
		cout << "=================Volume of a sphere=====================" << endl;
		cout << "Enter the radius: " << endl;
		cin >> sphereRadius;

		if (sphereRadius <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}


		//Volume = (4 * pi * r^2)/3
		sphereVolume = 4 * pi * pow(sphereRadius, 3.0) / 3.0;
		cout << "The volume is: " << sphereVolume << endl;

		//Calculate Volume of cylinder
		cout << "===============Volume of a cylinder=======================" << endl;
		/*Cylinder:
		Volume = pi * r^2 * h
		Surface Area = (2 * Pi * r * h) + (2*pi * r^2)*/

		cout << "Enter the radius: " << endl;
		cin >> cylinderRadius;
		if (cylinderRadius <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cout << "Enter the height: " << endl;
		cin >> cylinderHeight;
		if (cylinderHeight <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cylinderVolume = cylinderHeight * pi * pow(cylinderRadius, 2.0);
		cout << "The volume is: " << cylinderVolume << endl;

		//Calculate surface area of cylinder
		cout << "================Surface Area of a cylinder===================" << endl;
		cout << "Enter the radius: " << endl;

		cin >> cylinderRadius;
		if (cylinderRadius <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cout << "Enter the height: " << endl;
		cin >> cylinderHeight;
		if (cylinderHeight <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cylinderSA = (2.0*pi*cylinderRadius*cylinderHeight) + (2.0*pi*pow(cylinderRadius, 2.0));
		cout << "The surface area is: " << cylinderSA << endl;

		//calculate volume of a cube
		cout << "===============Volume of a cube============================" << endl;
		/*Cube:
		Volume: a^3; a is the edge
		Surface Area = 6a^2
		Perimeter of a cube = 12a;  12 edges in a cube*/
		cout << "What units do you want to use?[feet,inches,meters]" << endl;
		cin >> cubeUnits;
		cout << "Number of edges[12 edges in a cube.  All equal length]: " << endl;
		cin >> cubeEdge;
		if (cubeEdge <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cubeVolume = pow(cubeEdge, 3.0);
		cout << "The volume of the cube is: " << cubeVolume << " " << cubeUnits << volumeSuffix << endl;

		//Surface area of cube
		cout << "=================Surface Area of a Cube========================" << endl;
		cout << "Number of edges: " << endl;
		cin >> cubeEdge;
		if (cubeEdge <= 0.0){
			cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cubeSA = 6 * pow(cubeEdge, 2.0);
		cout << "The surface area of the cube is: " << cubeSA << " " << cubeUnits << SASuffix << endl;

		//Perimeter of cube
		cout << "===============Perimeter of a cube============================" << endl;
		cout << "Number of edges: " << endl;
		cin >> cubeEdge;
		if (cubeEdge <= 0.0){
			cout << "The length cannot be negative or 0!" << cubeUnits << endl;
			cin.get();
			break;
		}
		cubePerimeter = 12 * cubeEdge;
		cout << "The perimeter of the cube is: " << cubePerimeter << " " << cubeUnits << endl;

		//Quadratic Equation
		cout << "===========Quadradic Equation Calculator===========================" << endl;
		/*Conditions
		denominator cannot be 0
		Value inside radical cannot be negative
		*/
		cout << "Please note that imaginary numbers are not yet supported.  If the value under the radical is negative, the program will exit.  Simarily, the denomiator cannot be equal to 0." << endl;
		cout << "Enter value of a" << endl;
		cin >> a;
		if (a == 0.0){
			cout << "value of 'a' cannot be equal to 0!" << endl;
			cin.get();
			break;
		}
		cout << "Enter value of b" << endl;
		cin >> b;

		cout << "Enter value of c" << endl;
		cin >> c;

		//Seperate into 3 parts to make things easier.
		quadA = -1 * b;
		quadB = sqrt(pow(b, 2) - 4 * a*c);
		quadC = 2 * a;
		quadD = pow(b, 2) - 4 * a*c;
		//value inside radical is negative
		if (quadB < 0.0){
            cin.get();
			break;
		}//demoninator is 0
		else if (quadC == 0.0){
			cout << "Denominator must be greater than 0!" << endl;
            cin.get();
			break;
			//Value under radical is negative
		}
		else if (quadD < 0.0){
			cout<<"You must have a positive value!"<<endl;
			cin.get();
			break;
		}

		quadratic = (quadA - quadB) / quadC;
		quadAnsNeg = (quadA + quadB) / quadC;
		cout << "Answer is " << quadratic << " and " << quadAnsNeg << endl;

		//Volume of pyramid
		cout << "=========Volume of a Pyramid============" << endl;
		cout << "What are the units? " << endl;
		cin >> pyrUnits;
		cout << "Enter the height: " << endl;
		cin >> pyrHeight;
		if (pyrHeight <= 0.0) {
		    cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cout << "Enter the length: " << endl;
		cin >> pyrLength;
		if (pyrLength <= 0.0) {
		    cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cout << "Enter the width: " << endl;
		cin >> pyrWidth;
		if (pyrWidth <= 0.0) {
            cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		pyrVolume = (pyrLength * pyrWidth * pyrHeight) / 3.0;
		cout << "The volume is: " << pyrVolume << " " << pyrUnits << volumeSuffix << endl;

		//surface area of pyramid
		cout << "===========Surface Area of Pyramid==========" << endl;
		//Surface Area:  lw +l * radical ((w/2)^2+h^2) + w * radical ((l/2)^2)

		//Values below cannot be negative!!
		cout << "Enter the length: " << endl;
		cin >> pyrLength;
		if (pyrLength <= 0.0) {
            cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cout << "Enter the width: " << endl;
		cin >> pyrWidth;
		if (pyrWidth <= 0.0) {
		    cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cout << "Enter the height " << endl;
		cin >> pyrHeight;
		if (pyrHeight <= 0.0){
            cin.get();
			break;
		}

		//Separate formula into 3 parts.  Then combine and output result.
		pyrA = (pyrLength * pyrWidth);
		pyrB = pow(pyrWidth / 2, 2) + pow(pyrHeight, 2.0);
		pyrC = pow(pyrLength / 2, 2) + pow(pyrHeight, 2.0);
		pyrSA = pyrA + (pyrLength * sqrt(pyrB)) + pyrWidth * sqrt(pyrC);
		cout << "The Surface Area is: " << pyrSA << " " << pyrUnits << SASuffix << endl;

        cout<<"===========Frustum============="<<endl;
        cout << "Please enter the height: " << endl;
        cin >> frustumHeight;
        if (frustumHeight < 0){
            cout<<"You must have a positive value!"<<endl;
            cin.get();
            break;
        }
        cout << "Please enter the radius of the small circle: " << endl;
        cin >> frustum_r;
        if (frustum_r < 0){
            cout<<"You must have a positive value!"<<endl;
            cin.get();
            break;}
        cout << "Please enter the radius of the larger circle: " << endl;
        cin >> frustum_R;
        if (frustum_R < 0){
            cout<<"You must have a positive value!"<<endl;
            cin.get();
            break;}
        // calculate volume of frustum
        frustumA = (pi * frustumHeight) * (pow(frustum_R,2) + frustum_R * frustum_r + pow(frustum_r,2));
        frustum = frustumA/3;
        //display
        cout << "The volume of the frustum is: " << frustum << endl;


		//Distance
		cout << "================Distance calculator========================" << endl;
		cout << "Enter the Units[km,m]; " << endl;
		cin >> solveDistanceUnits;
		cout << "Enter the speed[m/s,km/s]: " << endl;
		cin >> speed;
		if (speed<0.0) {
            cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		cout << "Enter the time[seconds]: " << endl;
		cin >> time;
		if (time <0.0) {
		    cout<<"You must have a positive value!"<<endl;
            cin.get();
			break;
		}
		distance = speed * time;
		cout << "Enter units[v/s]: " << endl;
		cin >> solveDistanceUnits;
		cout << "The distance is: " << distance << " " << solveDistanceUnits << "/" << "second" << endl;


		cout << "===============Custom Expression=================" << endl;
		cout << "5a + (3-b^2)^3 -7c^4 +8(3c-d)" << endl;
		//a,b,c,d =
		//q,w,e,r
		cout << "enter a: " << endl;
		cin >> q;
		cout << "enter b: " << endl;
		cin >> w;
		cout << "Enter c: " << endl;
		cin >> e;
		cout << "Enter d: " << endl;
		cin >> r;

		solveA = 5 * q;
		solveB = 3 - pow(w, 2);
		solveC = pow(solveB, 3);
		solveD = 7 * pow(e, 4);
		solveE = 8 * (3 * e - r);
		solve = solveA + solveC - solveD + solveE;
		cout << solve;
	}


	return 0;
}
