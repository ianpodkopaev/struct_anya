
#include <iostream>
#include <cmath>
using namespace std;

struct point
{
public:
	void set_coord(int a, int b, int c)
	{
		x = a;
		y = b;
		z = c;
	}
	void bigger(point a, point b)
	{
		if (count(a) < count(b))
			cout << "tochka 1 blige k nachaly koordinat" << endl;
		else
			cout << "tochka 2 blige k nachaly koordinat" << endl;
	}
	double count(point a)
	{
		return(sqrt((pow((0-a.x), 2)) + (pow((0-a.y), 2)) - (pow((0-a.z), 2))));
	}
private:
	int x;
	int y;
	int z;
};
int main()
{
	int a, b, c, d, e, f;
	point toch1;
	point toch2;
	cin >> a >> b >> c >> d >> e >> f;
	toch1.set_coord(a, b, c);
	toch2.set_coord(d, e, f);
	toch1.bigger(toch1, toch2);

	return 0;
}

