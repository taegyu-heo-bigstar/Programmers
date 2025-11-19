#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(int n, const char* control) {
    int answer;
	enum type {	W = 'w', 
				A = 'a', 
				S = 's', 
				D = 'd'};

	while (*control)
	{
		switch (*control)
		{
		case W:
			n += 1;
			break;
		case A:
			n -= 10;
			break;
		case S:
			n -= 1;
			break;
		case D:
			n += 10;
			break;
		default:
			exit;
		}
		control++;
	}
	answer = n;
    return answer;
}