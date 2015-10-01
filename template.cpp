#include <iostream>
#include <typeinfo>

using namespace std;

template<typename TYPE> TYPE Twice(TYPE data)
{
	   return data * 2;
}

template<typename TY> TY foo(TY bar){
	cout << bar <<endl;
}


template<class TYPE> void show (TYPE cl){
		cout << typeid(cl).name() <<endl;
}

int main(){
	cout << Twice(2) <<endl;
	foo(10.2);
	show<long long unsigned>(10);
}
