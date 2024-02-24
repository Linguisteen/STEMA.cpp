#!/usr/bin/env python3

import sys # 系统相关参数和函数

################################################################################
def main(argc, argv):
    var = input("喊出来你要踢谁：")
    print(var + "刚刚被你踢了一脚，很气愤。", end = "")
    var = int(input("你打算花几颗糖来讲和？"))
    print("哇，{}粒糖啊！你是有诚意的，可以愉快的玩耍。".format(var))

    return 0



################################################################################
if __name__ == "__main__":
    sys.exit(main(len(sys.argv), sys.argv))
