#include <iostream>

class nl {
public:
	nl() = default;
	nl(int n) : mn{ n } {}
	friend std::ostream& operator<<(std::ostream& os, const nl& nlx)
	{
		for (int i = 0; i < nlx.mn; ++i) {
			os.put('\n');
		}
		return os;
	}
private:
	int mn{ 1 };
};

int main()
{
	int x = 10, y = 20, z = 40;

	std::cout << x << nl{ 5 } << y << nl{ 7 } << z << nl{};
}
