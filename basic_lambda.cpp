#include <iostream>

using namespace std;

int func2(){
	auto x = 2;
	printf("%d %d\n", x, sizeof(x));
}

int main()
{
    auto func = [] () { cout << "Hello world\n"; };
    cout << func;
    func(); // now call the function
    func2();
}
