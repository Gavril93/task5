#include <iostream> 

using namespace std;

int main()
{
	int x[3], y[3];
	double t, step, xb, yb;
	double countPoints = 10;
	step = 1 / countPoints;
	t = -step;
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i];
		cin >> y[i];
	}
	for (int i = 0; i <= countPoints; i++)
	{
		t += step;
		xb = (1 - t)*(1 - t)*x[0] + 2 * (1 - t)*t*x[1] + t * t*x[2];
		yb = (1 - t)*(1 - t)*y[0] + 2 * (1 - t)*t*y[1] + t * t*y[2];
		cout << xb << "  " << yb << endl;
	}
	system("pause");
	return 0;
}