#include "iostream"
#include "cmath"

using namespace std;
int main()
{
	//Частина 1

	int a1 = 33;
	int b1 = 33; 
	float c1 = 7.4;
	float d1 = 8.9;
	//фОРМУЛА - <УЛО1>(<УЛО2>(a1<ОВ1>b1)<БЛО>(<УЛО3>(c1<ОВ2>d1)))
	bool res1 = !((a1 <= b1) ^ (!(c1 != d1)));
	cout << "res1: " << boolalpha << res1 << endl;
	cout<<"res1: "<<boolalpha<<res1<<endl;

	int a2 = 36;
	int b2 = 73;
	int c2 = 120;
	int d2 = 120;
	//фОРМУЛА - <УЛО1>(<УЛО2>(a1<ОВ1>b1)<БЛО>(<УЛО3>(c1<ОВ2>d1)))
	bool res2 = !((a1 <= b1) ^ (!(c1 != d1)));
	cout << "res2: " << boolalpha << res2 << endl;

	//Частина 2
	int a3 = 17;
	int b3 = -23;
	int c3 = 33;
	int d3 = 2;
	int e3 = 26054;
	//ФОРМУЛА - ((a3 <БО1> <УО> b3) <АО1> <СО> c3) <ОВ> (d3 <АО2> (e3 <БО2> <БазО> double))
	bool res3 = ((a3 ^ ~b3) ** &c3) == (d3 * (e3 >> sizeof(double)));
	cout << "res3 :" << res3 << endl;
}