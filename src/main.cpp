#include <iostream>
#include <typeinfo>

using namespace std;

//template<class T>
//void printcharsize()
//{
//    cout << "sizeof(" << typeid(T).name() << ") is " << sizeof(T) << endl;
//}

#if defined(_MSC_VER) || __GNUC__ > 5
#define CHAR1632DEFINED
#endif

#define printcharsize(type) { cout << "sizeof(" #type ") == " << sizeof(type) << endl; }
int main()
{
    printcharsize(char);
    printcharsize(wchar_t);
#ifdef CHAR1632DEFINED
    printcharsize(char16_t);
    printcharsize(char32_t);
#endif

    printcharsize(short);
    printcharsize(int);
    printcharsize(long);
    printcharsize(long long);

    printcharsize(float);
    printcharsize(double);

    printcharsize(void*);

    return 0;
}
