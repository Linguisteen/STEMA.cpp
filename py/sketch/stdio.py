#!/usr/bin/env python3

import doctest

################################################################################
def main():
    print("踢猫游戏")
    name = input("喊出来你要踢谁：")
    print(f"{name}刚刚被你踢了一脚，很气愤。")
    count = int(input("你打算花几颗糖来讲和？"))

    if count > 4:
        print(f"哇，{count}粒糖啊！你是有诚意的，可以愉快的玩耍。")
    else:
        print("我记住你了，你给我等着！")

    return 0

################################################################################
if __name__ == "__main__":
    doctest.testmod()
