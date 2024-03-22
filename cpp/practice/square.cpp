/** 平方运算
 * 
 * 平方是一种运算，sqr(a) = a * a。
 * 比如:
 *      sqr(2) = 2 * 2 = 4
 *      sqr(4) = 4 * 4 = 16
 * 
 * 输入一个较小的正整数 n，请计算它的平方。
 * 然后按照上面例子的格式输出结果。
 * 
 * @arg n, 正整数, n < 100
 * @result 包含运算过程的算式
 * 
 * @test
 * input:
 * 2
 * output:
 * sqr(2) = 2 * 2 = 4
 * 
 * @test
 * input:
 * 4
 * output:
 * sqr(4) = 4 * 4 = 16
 **/

#include <iostream>
#include <map>

/*************************************************************/
std::map<int, int> make_square_dict(int n) {
    std::map<int, int> sd;

    for (int i = 1; i <= n; i++) {
        sd[i] = i * i;
    }

    return sd;
}

std::string to_string(std::map<int, int>& sd, int i) {
    std::string s;

    if (i > 1) {
        s.append(",");
    }

    s.append(std::to_string(i));
    s.append(":");
    s.append(std::to_string(sd[i]));

    return s;
}

void print_square_dict(std::map<int, int>& sd) {
    for (int i = 1; i <= sd.size(); i++) {
        std::cout<< to_string(sd, i);
    }

    std::cout << std::endl;
}

/*************************************************************/
int main(int argc, char* argv[]) {
    std::map<int, int> sd;
    int n;

    std::cin >> n;
    sd = make_square_dict(n);
    print_square_dict(sd);

    return 0;
}
