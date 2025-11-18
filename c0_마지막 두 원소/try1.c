#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cal_last(int num_list[], size_t num_list_len);

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	int* answer = (int*)malloc(sizeof(int) * (num_list_len + 1));
	if (answer == NULL)
		return NULL;
	for (int i = 0; i < num_list_len; i++)
		answer[i] = num_list[i];
	answer[num_list_len] = cal_last(num_list, num_list_len);
    return answer;
}

int cal_last(int num_list[], size_t num_list_len)
{
	int a;
	int b;
	int c;

	a = num_list[num_list_len - 2];
	b = num_list[num_list_len - 1];
	c = 0;
	if (a < b)
	{
		c = b - a;
	}
	else
	{
		c = b * 2;
	}

	return c;
}