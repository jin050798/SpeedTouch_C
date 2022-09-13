#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 0;
	char arr[100];
	while (i < n) {
		scanf("%s", arr);
		i++;
	}
	for (int j = 0; j < n; j++) {
		printf("%s", arr);
	}
}
void string_what() {
	char arr[100];
	scanf("%s", arr);
	int count = 0;
	int len = strlen(arr);
	int sum = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] == 'c' && arr[i + 1] == '=') {
			count++;
		}
		else if (arr[i] == 'c' && arr[i + 1] == '-') {
			count++;
		}
		else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=') {
			count++;
		}
		else if (arr[i] == 'd' && arr[i + 1] == '-') {
			count++;
		}
		else if (arr[i] == 'l' && arr[i + 1] == 'j') {
			count++;
		}
		else if (arr[i] == 'n' && arr[i + 1] == 'j') {
			count++;
		}
		else if (arr[i] == 's' && arr[i + 1] == '=') {
			count++;
		}
		else if (arr[i] == 'z' && arr[i + 1] == '=') {
			count++;
		}
	}
	int result = 0;
	result = sum - count;

	printf("%d", result);
}