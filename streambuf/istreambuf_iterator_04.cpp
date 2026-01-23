#include <fstream>
#include <vector>

int main()
{
    std::ifstream ifs("image.bin", std::ios::binary);

    std::vector<unsigned char> data(
        std::istreambuf_iterator<char>(ifs),
        {}
    );

}
