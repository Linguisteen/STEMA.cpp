# 第一题
name = input("你叫什么名字？ ")
print("你好，" + name)

# 第二题
s = input()
print(len(s))

# 第三题
M = int(input())
if M % 7 == 0:
    print("Yes")
else:
    print("No")

# 附加题
M = int(input())
N = int(input())

for z in range(M, N + 1):
    if z % 7 == 0 and z % 5 != 0:
        print(z, end = " ")

print()    
