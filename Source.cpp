#include <iostream>

using namespace std;

int perimeter(int square_length){
	int square_perimeter = 4 * square_length;
	return (square_perimeter);
}

float perimeter(float triangle_side_1, float triangle_side_2, float triangle_side_3) {
	float triangle_perimeter = triangle_side_1 + triangle_side_2 + triangle_side_3;
	return (triangle_perimeter);
}

float perimeter(float redius) {
	float pie = 3.14;
	float circle_perimeter = 2 * pie * redius;
	return circle_perimeter;
}

int main() {
	int square_length;
	//Square
	cout << "======= Perimeter of Square ======= \n";

	cout << "Enter the length of Square: ";
	cin >> square_length;

	cout << endl << "Perimeter of Square is : " << perimeter(square_length);

	//Triangle
	cout << "\n======= Perimeter of Triangle =======\n";

	float triangle_side_1, triangle_side_2, triangle_side_3;
	cout << "Enter the Length of 1st side or Triangle: ";
	cin >> triangle_side_1;
	cout << "Enter the Length of 2nd side of Triangle: ";
	cin >> triangle_side_2;
	cout << "Enter the Length of 3rd side of triangle: ";
	cin >> triangle_side_3;

	cout << endl << "Perimeter of Triangle is: " << perimeter(triangle_side_1, triangle_side_2, triangle_side_3);

	//Circle 
	cout << "\n======= Perimeter of Circle =======\n";

	float redius;
	cout << "Enter the Radius of Circle: ";
	cin >> redius;

	cout << endl << "Perimeter of circle of given redius: " << perimeter(redius);

	return 0;
}