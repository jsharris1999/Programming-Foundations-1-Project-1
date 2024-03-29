#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Variables for Calculations
	float RadiusLarge = 0;
	float RadiusSmall = 0;
	float Height = 0;
	float RadiusLargeSQ = 0;
	float RadiusLargeCU = 0;
	float RadiusSmallSQ = 0;
	float RadiusSmallCU = 0;
	float VolumeLarge = 0;
	float SurfaceLarge = 0;
	float VolumeSmall = 0;
	float SurfaceSmall = 0;
	float VolumeCylinder = 0;
	float SurfaceCylinder = 0;
	float VolumeTotal = 0;
	float SurfaceTotal = 0;
	const float Gold = 19.32;
	const float Silver = 10.50;
	const float Steel = 8.05;
	float MassGold = 0;
	float MassSilver = 0;
	float MassSteel = 0;

	//User Inputs Variables
	cout << "Please enter the Radius of the Larger Sphere in cm: ";
	cin >> RadiusLarge;
	cout << "You have entered " << RadiusLarge << "." << endl;
	cout << "Please enter the Radius of the Half Sphere/Cylinder in cm: ";
	cin >> RadiusSmall;
	cout << "You have entered " << RadiusSmall << "." << endl;
	cout << "Please enter the Height of the Cylinder in cm: ";
	cin >> Height;
	cout << "You have entered " << Height << "." << endl;

	//Calculates The Two Radii Squared and Cubed
	RadiusLargeSQ = RadiusLarge * RadiusLarge;
	RadiusLargeCU = RadiusLarge * RadiusLarge * RadiusLarge;
	RadiusSmallSQ = RadiusSmall * RadiusSmall;
	RadiusSmallCU = RadiusSmall * RadiusSmall * RadiusSmall;
	//cout << RadiusLargeSQ << endl;
	//cout << RadiusLargeCU << endl;
	//cout << RadiusSmallSQ << endl;
	//cout << RadiusSmallCU << endl;

	//Calculates the Volume and Surface Area of the Two Spheres
	VolumeLarge = (4 * M_PI * RadiusLargeCU) / 3;
	SurfaceLarge = (4 * M_PI * RadiusLargeSQ);
	VolumeSmall = ((4 * M_PI * RadiusSmallCU) / 3)/2;
	SurfaceSmall = (4 * M_PI * RadiusSmallSQ)/2;
	cout << "The Volume of the Larger Sphere is: " << VolumeLarge << " cubic cm." << endl;
	cout << "The Surface Area of the Larger Sphere is: " << SurfaceLarge << " square cm." << endl;
	cout << "The Volume of the Half Sphere is: " << VolumeSmall << " cubic cm." << endl;
	cout << "The Surface Area of the Half Sphere is: " << SurfaceSmall << " square cm." << endl;

	//Calculates the Volume and the Surface Area of the Cylinder
	VolumeCylinder = (M_PI * Height * RadiusSmallSQ);
	SurfaceCylinder = (2 * M_PI * Height * RadiusSmall) + (2 * M_PI * RadiusSmallSQ);
	cout << "The Volume of the Cylinder is: " << VolumeCylinder << " cubic cm." << endl;
	cout << "The Surface Area of the Cylinder is: " << SurfaceCylinder << " square cm." << endl;

	//Calculates the Volume and the Surface Area of the Toy Top
	VolumeTotal = VolumeLarge + VolumeSmall + VolumeCylinder;
	SurfaceTotal = SurfaceLarge + SurfaceSmall + SurfaceCylinder;
	cout << "The Volume of the Toy Top is: " << VolumeTotal << " cubic cm." << endl;
	cout << "The Surface Area of the Toy Top is: " << SurfaceTotal << " square cm." << endl;

	//Calculates the Mass of the Toy Top if it were made out of Gold, Silver, or Steel
	MassGold = Gold * VolumeTotal;
	MassSilver = Silver * VolumeTotal;
	MassSteel = Steel * VolumeTotal;
	cout << "If the Toy Top was made out of Gold, its mass would be: " << MassGold << " grams." << endl;
	cout << "If the Toy Top was made out of Silver, its mass would be: " << MassSilver << " grams." << endl;
	cout << "If the Toy Top was made out of Steel, its mass would be: " << MassSteel << " grams." << endl;
}