#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
	int odd_arr;
	int even_arr;

	for (size_t i = 0; i < num_list_len; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			even_arr *= 10;
			even_arr += num_list[i]; 
		}
		else if ((i + 1) % 2 == 1)
		{
			odd_arr *= 10;
			odd_arr += num_list[i];
		}
	}
	answer = odd_arr + even_arr;

    return answer;
}