#include <iostream> /* C++ 标准输入输出头文件 */

/**
 * 程序入口必须命名为 `main`
 * @param argc, "argument count" 的缩写，即"参数个数"的意思
 * @param argv, "argument vector" 的缩写, 即"参数数组"的意思，包含命令行的所有输入参数
 */
int main(int argc, char* argv[]) {
    std::string name; /* 字符串变量，被踢者的名字 */
    int count;        /* 整数变量，花几块糖讲和 */

    /**
     * "<<" 和 ">>" 都是"流"操作符
     *    << 是“流插入”操作符，把后面的内容写入到输出流，本例中即“输出到屏幕”。
     *    >> 是“流提取”操作符，从输入流中读取内容，本例中即“接收用户键盘输入的内容”。
     *
     * std::endl 表示写入一个换行符。
     */
    
    std::cout << "踢猫游戏" << std::endl;
    std::cout << "请告诉我你想踢谁: ";
    std::cin >> name;

    std::cout << "好的。" << name << "刚被你踢了一脚，很气愤。你打算给他几块糖讲和？";
    std::cin >> count;
    std::cout << "哇，" << count << "块糖啊，你是讲诚意的，可以愉快地玩耍！" << std::endl;

    // 任务完成，C++ 心满意足地退出
    return 0;
}
