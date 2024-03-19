#include <iostream> /* C++ 标准输入输出头文件 */
#include <string>   /* C++ 字符串头文件 */

/*************************************************************************************************/
int main(int argc, char* argv[]) {
    std::string name; /* 字符串变量 */
    int count;        /* 整数变量 */

    std::cout << "踢猫游戏" << std::endl;
    std::cout << "喊出来你要踢谁：";
    std::getline(std::cin, name);

    std::cout << name << "刚被你踢了一脚，很气愤。你打算花几块糖讲和？";
    std::cin >> count;

    if (count > 4) {
        std::cout << "哇，" << count << "块糖啊，你是有诚意的，可以愉快地玩耍！" << std::endl;
    } else {
        std::cout << "我记住你了，你给我等着！" << std::endl;
    }
    
    return 0;
}
