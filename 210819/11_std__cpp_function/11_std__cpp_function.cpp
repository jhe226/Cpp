#define _CRT_SECURE_NO_WARNINGS
#include<cmath>
#include<cstdio>
#include<cstring>

// C++���� C����� ǥ�� �Լ� ȣ���ϱ�
// .h �����ϰ� �տ� c�� �ٿ��ָ� C�� �����ϴ� C++ ��� ������ �̸��� �ȴ�.

using namespace std;

int main()
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s : %f\n", str1, sin(0.14));
	printf("%s : %f\n", str1, abs(-1.25));

	return 0;
}