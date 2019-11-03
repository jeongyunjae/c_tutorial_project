# 기본 자료형

## 목차
[1. 자료형](# 자료형)
[2. 선연문](# 선언문)


## 자료형
**C 프로그램의 모든 변수는 자료형이 명시되어야 합니다.**
- 기본 자료형
- 사용자 자료형 

**메모리에는 모든 값들이 0또는 1의 비트열로 저장되지만 
자료형에 따라 표현 방법이 다릅니다.**


`프로그램 4.1`
```c
#include <stdio.h>
int main(void){
	int i;
	i = 65;
	printf("정수 ? : %d\n", i);
	printf("실수 ? : %f\n", i);
	printf("문자 ? : %c\n", i);
	return 0;
}
```
---
	정수 ? : 65  
	실수 ? : 0.000000  
	문자 ? : A  
---

기본 자료형
---
- _Bool
---
- char		signed char		unsigned char
---
- short		int		long		long long
---
- unsigned short		unsigned int		unsigned long		unsigned long long
---
- float		double		long double
---
- float _Complex		_Complex		long double _Complex
- float _Imaginary		_Imaginary		long double _Imaginary
---

##선언문  
**모든 변수는 사용되기 전에 반드시 선언되어야 합니다.**  
- 자료형 식별자;
- 자료형 식별자_목록;  

선언문 예
int i;  
float x, y;  

`프로그램 4.2`  
```c
#include <stdio.h>
int main(void){
	int num1, num2, num3, multiply;
	float fnum1, fnum2, fmultiply;

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", num1 * num2);
	multiply = num1 * num2;
	fnum1 = num1;
	fnum2 = num2;
	fmultiply = fnum1 * fnum2;
	printf("%d * %d = %d \n", num1, num2, multiply);
	printf("%.2f * %.2f = %.2f\n", fnum1, fnum2, fmultiply);
	return 0;
}
```
---
두 정수를 입력하세요 : 4 3  
4 * 3 = 12  
4.00 * 3.00 = 12.00  
---
**선언한 변수를 사용하지 않아도 됩니다.**
**변수가 사용되기 전에 선언문이 있어야 합니다.**

`프로그램 4.3`
```c
int main(void){
	int num1 = 10,  num2 = 20;
	printf(" 정수 1 : %d, 정수 2 : %d", num1, num2);
	int multiply;
	multiply = num1 * num2;
	printF(" 두 정수의 곱 : %d * %d = %d",num1, num2, multiply);
	return 0;
}
```
## 수식 
- 상수, 변수, 함수 호출 그 자체
- 수식과 연산자의 의미 있는 결합
- 대부분의 수식은 값과 형을 가집니다.

### 수식 예
- 30
- 'c'
- a
- a + b
- c = a + b

## 문장
- 수식 뒤에 세미콜론이 오면, 수식은 문장이 됩니다.

### 문장 예
- 3.777;
- a + b;

## 정수 
- 첫번째 비트 : 부호 (1: 음수, 0 : 양수)
- 나머지 비트 : 표현할 수의 2진수
- 양수 : 2진수
- 음수 : 절대 값의 2진수의 1의 보수 + 1
- 1의 보수 : 각 비트를 토글하는 것   ( 1 -> 0, 0 -> 1)











|1|2|3|
|---|:---:|---:|
|테스트|데이터|1|
|테스트|데이터|2|
|테스트|데이터|3|
