/**
 * 演讲比赛有8位评委, 打分规则是去掉一个最高分和一个最低分，
 * 计算出剩余6位评委分数的平均值(保留两位小数)作为最后得分。
 * 
 * 小兰同学也积极参加了本次演讲比赛，
 * 请你帮小兰计算一下她的最后得分。
 * 
 * 测试驱动开发
 * 
 * @arg 8个整数，以空格分隔，(0 <= 分值 <= 100)
 * @result 平均分(保留两位小数)
 * 
 * @test
 * input:
 * 50 90 55 78 52 68 66 93
 * 
 * output:
 * 68.17
 * 
 **/

#include <iostream>

int main(int argc, char* argv[]) {
    int score;      // 当前分数
    int max_score;  // 最高分
    int min_score;  // 最低分
    int total;      // 总分
    int average;    // 平均分

    return 0;
}
