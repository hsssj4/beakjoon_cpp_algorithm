#include <stdio.h>
int main() {
	int t;
	int jox, joy, jor, baekx, baeky, baekr;
	int i;
	int distance;
	int R, r;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d %d %d %d %d", &jox, &joy, &jor, &baekx, &baeky, &baekr);

		distance =
			((jox - baekx) * (jox - baekx) + (joy - baeky) * (joy - baeky));

		if (jor >= baekr) {
			R = jor;
			r = baekr;
		}
		else {
			R = baekr;
			r = jor;
		}
		// R은 큰원의 반지름, r은 작은원의 반지름

		if ((jox == baekx) && (joy == baeky) && (jor == baekr))	 // 두원이 일치
		{
			printf("-1\n");
		}
		else if (distance == (R + r) * (R + r) ||
				 distance == (R - r) * (R - r))	 // 두 원이 외접 또는 내접
		{
			printf("1\n");
		}
		else if (distance > (R + r) * (R + r) ||
				 distance < (R - r) * (R - r))	// 두원이 떨어져있을때
		{
			printf("0\n");
		}
		else {
			printf("2\n");
		}
	}
}
