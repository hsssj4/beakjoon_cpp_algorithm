#include <stdio.h>

int main() {
	char name[51], score, plus;
	float grade, scorenum, gradesum = 0;
	int i;
	float sum = 0, final = 0;
	for (i = 0; i < 20; i++) {
		scanf("%s %f %c", name, &grade, &score);
		if (score == 'P') {
			sum = 0;
			gradesum -= grade;
		}
		else if (score == 'F') {
			sum = 0;
		}
		else {
			scanf(" %c", &plus);
			if (score == 'A') {
				scorenum = 4;
			}
			else if (score == 'B') {
				scorenum = 3;
			}
			else if (score == 'C') {
				scorenum = 2;
			}
			else if (score == 'D') {
				scorenum = 1;
			}

			if (plus == '+') {
				scorenum += 0.5;
			}
			sum = grade * scorenum;
		}

		final += sum;
		gradesum += grade;
	}
	final = final / gradesum;
	printf("%f", final);
}
