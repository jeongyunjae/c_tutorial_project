#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void set_end(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == 3 || str[i] == 10 || str[i] == 13){
			str[i] = 0;
		}
	}
}
int main(int argc, char *argv[]){
	char command[50], source_name[50], res[2][50];
	int num, i = 1, c;
	FILE *fp, *file_compare[2];

	printf("소스코드 파일이름(.c 포함, 파일 이름에 공백 금지), 문제번호 입력: ");
	scanf("%s %d", source_name, &num);

	while(1){
		sprintf(command, ".data/%d/%d.txt", num, i);
		//결과 읽어오기
		if((file_compare[0] = fopen(command, "r")) == NULL) break;
		else{
			sprintf(command, ".input/%d/%d.txt", num, i);
			sprintf(command, "gcc -o test %s && ./test < .input/%d/%d.txt > out.txt", source_name, num, i);
			system(command);
			file_compare[1] = fopen("out.txt", "r");
			fscanf(file_compare[0], "%[^0]", res[1]);
			fscanf(file_compare[1], "%[^0]", res[0]);
			set_end(res[0]);
			set_end(res[1]);
			if((c=strcmp(res[0], res[1])) != 0){
				printf("%s\n%s",res[0], res[1]);
				printf("Incorrect\n");
				return -1;
			}
			printf("%s\n%s",res[0], res[1]);
			fclose(file_compare[0]);
			fclose(fp);
		}
		i++;
	}
	printf("Correct\n");

	return 0;
}
