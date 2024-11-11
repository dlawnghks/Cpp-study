#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main()
{    
    DynamicArray da01(5);

    try {
        da01.setAt(0, 100);
        da01.setAt(4, -7);

        cout << da01.getAt(0) << endl;
        cout << da01.getAt(2) << endl;
        cout << da01.getAt(4) << endl;

        //da01.setAt(11, 27);  // 인덱스 범위를 벗어남

        cout << da01.getAt(9) << endl;  // ????
    }
    catch (int err) {
        cout << "인덱스의 범위를 벗어났습니다\n";
    }

    return 0;
}


//#include <iostream>
//#include "DynamicArray.h"
//using namespace std;
//
//int main()
//{
//    int r;
//    DynamicArray da01(5);
//    r = da01.setAt(0, 100);
//    if (r == -1)
//        cout << "인덱스의 범위를 벗어났습니다\n";
//    else
//        cout << "정상 할당되었습니다\n";
//
//    r = da01.setAt(4, -7);
//    if (r == -1)
//        cout << "인덱스의 범위를 벗어났습니다\n";
//    else
//        cout << "정상 할당되었습니다\n";
//
//    r = da01.setAt(11, 27);  // ????
//    if (r == -1)
//        cout << "인덱스의 범위를 벗어났습니다\n";
//    else
//        cout << "정상 할당되었습니다\n";
//
//    cout << da01.getAt(0) << endl;
//    cout << da01.getAt(2) << endl;
//    cout << da01.getAt(4) << endl;
//    //cout << da01.getAt(9) << endl;  // ????
//    //cout << da01.getAt(11) << endl;  // ????
//
//    return 0;
//}