/** 倍数问题
 * 
 * 分别输入两个正整数 M、N
 * 输出M到N之间（含 M、N）所有可被7整除，但不是5的倍数的数字，
 * 并以逗号分隔按顺序打印在一行。
 *
 * @arg 整数 M
 * @arg 整数 N (1 < M < N < 1000)
 * @result M 和 N 之间所有满足要求的数，并以逗号分隔
 * 
 * @test The Standard Example
 * input:
 * 100 147
 * output:
 * 112,119,126,133,147
 * 
 * @test
 * input:
 * 4 50
 * output:
 * 7,14,21,28,42,49
 * 
 * @test Fault Tolerance
 * input:
 * 147 100
 *
 **/

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
    int M;
    int N;
    int count = 0;

    // 读取键盘输入
    std::cin >> M >> N;

    // 筛选能被7整除但不能被5整除的数
    while (M <= N) {
        if (is_divisible(M, 7)) {
            if (!is_divisible(M, 5)) {
                if (count > 0) {
                    std::cout << ",";
                }

                std::cout << M;
                count = count + 1;
            }
        }

        M = M + 1;
    }

    // 任务完成，C++ 心满意足地退出
    return 0;
}
