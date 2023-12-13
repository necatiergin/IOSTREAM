#include <iostream>

class sp {
public:
	sp() = default;
	sp(int n) : mn{ n } {}
	friend std::ostream& operator<<(std::ostream& os, const sp& spx)
	{
		for (int i = 0; i < spx.mn; ++i) {
			os.put(' ');
		}
		return os;
	}
private:
	int mn{ 1 };
};

int main()
{
	using namespace std;

	int x = 10, y = 20, z = 40;

	cout << x << sp{ 15 } << y << sp{ 37 } << z;

}
