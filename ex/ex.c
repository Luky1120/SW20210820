#include<stdio.h>
//숫자 N은 아래와 같다.
//
//N = 2 ^ a * 3 ^ b * 5 ^ c * 7 ^ d * 11 ^ e
//
//N이 주어질 때 a, b, c, d, e 를 출력하라.
//
//[제약 사항]
//
//N은 2 이상 10, 000, 000 이하이다.
void ex1() {
	int num;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	printf("숫자 입력 :");
	scanf("%d", &num);
	if (num >= 2 && num <= 10000000) {
		while (1) {
			if (num % 2 == 0) {
				num = num / 2;
				a++;
			}
			else if (num % 3 == 0) {
				num = num / 3;
				b++;
			}
			else if (num % 5 == 0) {
				num = num / 5;
				c++;
			}
			else if (num % 7 == 0) {
				num = num / 7;
				d++;
			}
			else if (num % 11 == 0) {
				num = num / 11;
				e++;
			}
			else if (num == 1) {
				break;
			}

		
	
		}
		printf("%d %d %d %d %d\n", a, b, c, d, e);
	
	}
	else {
		printf("-1\n");
	}
	return 0;
}


int main(void) {
	int exnum;
	printf("예제 번호 입력 :");
	scanf("%d", &exnum);
	switch (exnum)
	{
	case 1:
		ex1();
		break;
	}
	return 0;
}