#include <iostream>
#include <typeinfo>

using namespace std;

//template<class T>
//void printcharsize()
//{
//    cout << "sizeof(" << typeid(T).name() << ") is " << sizeof(T) << endl;
//}

#define printcharsize(type) { cout << "sizeof(" #type ") == " << sizeof(type) << endl; }
int main()
{
    printcharsize(char);
    printcharsize(wchar_t);
    printcharsize(char16_t);
    printcharsize(char32_t);

    printcharsize(short);
    printcharsize(int);
    printcharsize(long);
    printcharsize(long long);

    printcharsize(float);
    printcharsize(double);

    printcharsize(void*);

    return 0;
}
