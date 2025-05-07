long fibo(int n) {
    if (n < 2) {
        return 1L;
    }
    // 迭代方式计算斐波那契数列，替代递归
    long a = 1L, b = 1L, temp;
    for (int i = 2; i < n; i++) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

