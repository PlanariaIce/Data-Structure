#include <cstdio>

const int maxn = 1001;

int n;
int c[maxn];

int lowbit(const int x) {
	return x & -x;
}

void add(int x, int v) {
	for (; x <= n; x += lowbit(x)) {
		c[x] += v;
	}
}

int getsum(int x) {
	int sum = 0;
	for (; x > 0; x -= lowbit(x)) {
		sum += c[x];
	}
	return sum;
}