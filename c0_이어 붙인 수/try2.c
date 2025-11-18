#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
홀짝 판단의 대상을 명확히 하고,
초기화하지 않은 변수를 다시 초기화하였습니다.
*/

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
	int odd_arr;
	int even_arr;

	odd_arr = 0;
	even_arr = 0;
	for (size_t i = 0; i < num_list_len; i++)
	{
		if (num_list[i] % 2 == 0)
		{
			even_arr *= 10;
			even_arr += num_list[i]; 
		}
		else if (num_list[i] % 2 == 1)
		{
			odd_arr *= 10;
			odd_arr += num_list[i];
		}
	}
	answer = odd_arr + even_arr;

    return answer;
}