#include <iostream>
#include <string>
using namespace std;
int main() {
	string c[50];	  // 입력받는 문자열 최대 50개까지
	int n, m, count;  // n이 행, m이 열
	char color = 'W';
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < n - 8; i++) {	   // 행 케이스
		for (int j = 0; j < m - 8; j++) {  // 열 케이스
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if(c[i][k] != color) count++;
					
					if (color)
						color = false;
					else
						color = true;
				}
				if (color)
					color = false;
				else
					color = true;
			}
		}
	}
}
// 0 ~ 32 사이의 값이 나옴
// 흰색이 먼저 오든 검은색이 먼저 오든 상관없음
// 그렇다면 고정으로 흰색 먼저 오게하고 32 초과시 64-i를 결과값으로 두기

/*
체크 방식
*/