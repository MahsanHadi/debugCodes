#include <iostream>
using namespace std;

class container
{
	int size;

public:
	float *p;
	container(int s) : size(s) {}
	int &getsize() { return size; }
};

class vector : public container
{
	int call_num;

public:
	explicit vector(int l) : len(l), container(1 * 100)
	{
		p = new float();
	}
	int len;
	int &getlen()
	{
		call_num++;
		return len;
	}
	~vector() { delete p; };
	vector(const container &c) : container(c)
	{
		p = new float;
		len = 0;
	}
};

int main()
{
	container c1(100);
	vector v1 = c1;
	container &r1 = v1;
	container c2 = 100;
	c2.getsize() = 20;
	cout << c2.getsize();
	vector v2(100);
	v2.getlen() = 40;
	cout << v2.getlen();
}