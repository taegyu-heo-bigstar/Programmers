#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
본 문제의 제한사항 아래에선 오버플로우는 신경쓸필요가 없으므로 생략한다.
*/

int mul_arr(int num_list[], size_t num_list_len);
int sum_arr(int num_list[], size_t num_list_len);
int square(int num);

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer;
	int mul_arr_num;
	int sum_arr_num;

	mul_arr_num = mul_arr(num_list, num_list_len);
	sum_arr_num = sum_arr(num_list, num_list_len);

	if (mul_arr_num < square(sum_arr_num))
		answer = 1;
	else if (mul_arr_num == square(sum_arr_num))
		answer = -1; //모호한 부분.
	else
		answer = 0;
    return answer;
}

int mul_arr(int num_list[], size_t num_list_len){
	int mul_arr_num;

	mul_arr_num = 1;
	for (int i = 0; i < num_list_len; i++)
		mul_arr_num *= num_list[i];
	return mul_arr_num;
}

int sum_arr(int num_list[], size_t num_list_len){
	int sum_arr_num;

	sum_arr_num = 0;
	for (int i = 0; i < num_list_len; i++)
		sum_arr_num += num_list[i];
	return sum_arr_num;
}

int square(int num){
	return num*num;
}