#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check();

int main(){
	if(check() == 0) printf("맞았습니다!\n");
	else printf("틀렸습니다..\n");
	system("rm out_solution.txt");
	system("rm out_problem.txt");
	system("rm ./pro");

	return 0;
}
int check(){
	char command[100], source_name[50];
	int num, i = 1;
	FILE *fp;

	printf("소스코드 파일이름(.c 포함, 파일 이름에 공백 금지), 문제번호 입력: ");
	scanf("%s %d", source_name, &num);

	while(1){
		sprintf(command, ".input/%d/%d.txt", num, i);
		fp = fopen(command, "r");
		if(fp == NULL) break;
		fclose(fp);
		sprintf(command, ".data/%d < .input/%d/%d.txt > out_solution.txt", num, num, i);
		system(command);
		sprintf(command, "gcc -o pro %s && ./pro < .input/%d/%d.txt > out_problem.txt", source_name, num, i);
		system(command);
		if(system("cmp -s out_problem.txt out_solution.txt") != 0){
			return -1;
		}
		i++;
	}
	return 0;
}
