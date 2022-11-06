#include "MuSoenMath.h"
using namespace std;

void main() {

	matrix3 Translate(3, 5, 1);
	matrix3 Rotate(30);
	matrix3 Scale(2, 2);
	vector3 v(1, 1);

	vector3 p = v * Translate * Rotate * Scale;

	cout << "p = v * Translate * Rotate * Scale" << endl << "p = ";

	cout << p.vec3[0][0] << ", ";
	cout << p.vec3[0][1] << ", ";
	cout << p.vec3[0][2];
}