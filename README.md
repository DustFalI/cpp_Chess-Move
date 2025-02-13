# cpp_Chess-Move
C++练习 移动黑白棋
# P1259 黑白棋子的移动

题目描述：
有 2n 个棋子排成一行，开始为位置白子全部在左边，黑子全部在右边。
移动棋子的规则是：每次必须同时移动相邻的两个棋子，颜色不限，可以左移也可以右移到空位上去，但不能调换两个棋子的左右位置。每次移动必须跳过若干个棋子（不能平移），要求最后能移成黑白相间的一行棋子。
任务：编程打印出移动过程。

输入格式：
一个整数 n。

输出格式：
若干行，表示初始状态和每次移动的状态，用 o 表示白子，* 表示黑子，- 表示空行。

思路：
ooooooo*******--
oooooo--******o*
arr[6]和arr[14]
arr[7]和arr[15]
oooooo******--o*
arr[6]和arr[12]
arr[7]和arr[13]
找规律：arr[n-1] <=> arr[2*n] arr[n] <=> arr[2*n+1] 后移操作。
arr[n-1] <=> arr[2*(n-1)] arr[n] <=> arr[2*n-1] 对齐操作。
这里注意当f(4)时操作有所改变，所以这里直接打印输出后面几排。
