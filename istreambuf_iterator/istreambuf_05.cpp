#include <fstream>
#include <algorithm> 
#include <iterator>
#include <iostream>

void copy_file(const std::string& src_path, const std::string& dest_path) 
{
    std::ifstream source_file(src_path, std::ios::binary);
    std::ofstream dest_file(dest_path, std::ios::binary);

    if (!source_file || !dest_file) {
        std::cerr << "error: file cannot open or create!\n";
        return;
    }

    std::copy(
        std::istreambuf_iterator<char>(source_file),
        std::istreambuf_iterator<char>(),
        std::ostreambuf_iterator<char>(dest_file)
    );

    std::cout << "file copied successfully.\n";
}

int main() 
{
    copy_file("source.bin", "destination.bin");
}
