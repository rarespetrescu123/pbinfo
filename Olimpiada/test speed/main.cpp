#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t result = std::time(nullptr);
    cout << std::ctime(&result)<<'\n';
    for(int i=1;i<=1000000000;i++);
    result = std::time(nullptr);
    cout << std::ctime(&result);

    return 0;
}
