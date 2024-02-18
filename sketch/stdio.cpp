#include <iostream> /* C++ 标准输入输出头文件 */

/**
 * 程序入口必须命名为 `main`
 * @param argc, "argument count" 的缩写，即"参数个数"的意思
 * @param argv, "argument vector" 的缩写, 即"参数数组"的意思，包含命令行的所有输入参数
 */
int main(int argc, char* argv[]) {
    std::string name; /* 字符串变量，姓名 */
    int coding_age;   /* 整数变量，已经学了多长时间编程 */

    std::cout << "请告诉我你的英文名字：";
    std::cin >> name;

    std::cout << "你好，" << name << "。你学编程几年啦？";
    std::cin >> coding_age;
    std::cout << "好棒，已经 " << coding_age << " 年了呀。";
    std::cout << "那么请继续精益求精！" << std::endl;

    return 0;
}
