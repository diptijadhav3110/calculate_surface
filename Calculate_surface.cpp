#include <iostream> 
using namespace std;

struct Point {
	int x, y;
};

int countBuildings(Point co_ordinates[], int no_of_buildings)
{
	
	int count = 1;

	
	Point curr_max = co_ordinates[0];
	for (int i = 1; i<no_of_buildings; i++)
	{
		
		if (co_ordinates[i].x > curr_max.y)
		{
			count++;
			curr_max = co_ordinates[i];
			
		}
		
	}

	return count*2;
}
 
int main()
{
	Point surface[] = { { 4, 0 }, { 4, -5 }, { 7, -5 }, {7,0} };
	Point p = { 1, 1 };

	
	int no_of_buildings = sizeof(surface) / sizeof(surface[0]);
	
	cout << "\n";
	
	cout <<"\n length of the surface exposed to sunlight is \t"<< countBuildings(surface, no_of_buildings);
	cout << "\n";
	return 0;
}
