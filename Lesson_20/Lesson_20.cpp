#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template<typename T> class Test {
public:
    T value;

    Test() {};
    Test(T _value) : value(_value) {};
};

template<typename T> T sum(T a, T b) {
    return a + b;
}

template<typename T> void sort(T* array, unsigned int length) {
    bool changed = true;
    while (changed)
    {
        changed = false;
        for (unsigned int i = 0; i < length - 1; i++)
        {
            if (array[i] > array[i + 1]) 
            {
                swap(array[i], array[i + 1]);
                changed = true;
            }
        }
    }
}

template<typename T> void show_array(T* array, unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    Test<int> obj;
    cout << obj.value << endl;
    
    cout << sum(5, 6) << endl;
    cout << sum<int>(5.6, 6.2) << endl;
    cout << sum(string("abc"), string("def")) << endl;
    // cout << sum(10, string("abc")) << endl;

    int int_array[] = {9, 4, 5, 6, 3};
    sort(int_array, 5);
    show_array(int_array, 5);

    string str_array[] = { "def", "ghi", "abc", "jkl" };
    sort(str_array, 4);
    show_array(str_array, 4);
}