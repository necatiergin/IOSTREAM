std::istream_iterator<int> make_iterator()
{
    std::ifstream ifs{ "numbers.txt" };
    return std::istream_iterator<int>{ ifs }; // causes undefined behavior
}
