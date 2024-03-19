#include <iostream>

/*************************************************************/
bool is_light_on_by_simulation(int m) {
    if (m <= 0) {
        return false;
    } else {
        return !is_light_on_by_simulation(m - 1);
    }
}

/*************************************************************/

/* 程序入口必须命名为 `main` */
int main(int argc, char* argv[]) {
    int M;
    bool answer;

    // 从键盘输入一个数字，并存储到变量 M 中
    std::cin >> M;

    // 通过“余数判定法”得到灯的开-闭状态
    answer = ((M % 2) == 1);

    // 按题目要求输出灯的状态
    std::cout << answer << std::endl;
    
    return 0;
}
