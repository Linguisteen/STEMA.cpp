#include <iostream> /* C++ 标准输入输出头文件 */

// 定义函数，是否可整除
bool is_divisible(int z, int n) {
    return (z % n == 0);
}

/**
 * 程序入口必须命名为 `main`
 * @param argc, "argument count" 的缩写，即"参数个数"的意思
 * @param argv, "argument vector" 的缩写, 即"参数数组"的意思，包含命令行的所有输入参数
 */
int main(int argc, char* argv[]) {
    // 定义变量
    int M = 7;
    int N = 42;

    // 读取键盘输入
    // std::cin >> M >> N;

    // 筛选能被7整除但不能被5整除的数
    while (M <= N) {
        if (is_divisible(M, 7)) {
            if (!is_divisible(M, 5)) {
                std::cout << M << " ";
            }
        }

        M = M + 1;
    }

    // 任务完成，C++ 心满意足地退出
    return 0;
}
