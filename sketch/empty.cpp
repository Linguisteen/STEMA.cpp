#include <iostream>

/**
 * 程序入口必须命名为 `main`
 * @param argc, "argument count" 的缩写，即"参数个数"的意思
 * @param argv, "argument vector" 的缩写, 即"参数数组"的意思，包含命令行的所有输入参数
 */
int main(int argc, char* argv[]) {
    int M;
    bool answer;

    std::cin >> M;

    // 赋值        // 相等
    answer = (M % 2 == 0);

    std::cout << answer;

    // 任务完成，C++ 心满意足地退出
    return 0;
}
