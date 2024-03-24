/**
 * 演讲比赛有8位评委, 打分规则是去掉一个最高分和一个最低分，
 * 计算出剩余6位评委分数的平均值(保留两位小数)作为最后得分。
 * 
 * 小兰同学也积极参加了本次演讲比赛，
 * 请你帮小兰计算一下她的最后得分。
 * 
 * @arg 8个整数作为分值，以空格分隔 (0 <= 分值 <= 100)
 * @result 平均分(保留两位小数)
 * 
 * @test
 * input:
 * 50 90 55 78 52 68 66 93
 * output:
 * 68.17
 * 
 * @test
 * input:
 * 50 68 77 96 12 34 78 100
 * output:
 * 67.17
 * 
 * @test
 * input:
 * 60 70 80 90 91 92 93 94
 * output:
 * 86.00
 **/

#include <iostream>

int main(int argc, char* argv[]) {
    int score;              // 当前分数
    int max_score = 0;      // 最高分
    int min_score = 100;    // 最低分
    int total = 0;          // 总分, 初始化为0
    float average;          // 平均分
    int idx = 0;            // 已读分值数

    while (idx < 8) {
        std::cin >> score;
        total = total + score;

        if (score > max_score) {
            max_score = score;
        }

        idx = idx + 1;
    }

    average = (total - max_score - min_score) / 6.0F;

    printf("%.2f", average);

    return 0;
}
