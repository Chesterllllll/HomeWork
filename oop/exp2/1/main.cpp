#include "geometry.h"
#include <iostream>

#define PROMPT_INPUT_C1 "请以 x y r 的格式为第一个圆输入数据:"
#define PROMPT_INPUT_C2 "请以 x y r 的格式为第二个圆输入数据:"
using namespace std;

int main() {
    float x1, y1, r1;
    float x2, y2, r2;
    cout << PROMPT_INPUT_C1;                                // 输入数据
    cin >> x1 >> y1 >> r1;
    cout << PROMPT_INPUT_C2;
    cin >> x2 >> y2 >> r2;

    Circle c1(Point(x1, y1), r1), c2(Point(x2, y2), r2);    // 利用带参数的构造函数来初始化两个Circle
    cout << "Before calling relationto" << endl;            // 调用前输出
    switch (c1.relationto(c2)) {                            // 调用关系判断成员函数
        case INTERSECTS
            cout << "相交" << endl;
            break;
        case NOTINTERSECTS:
            cout << "不相交" << endl;
    }
}
