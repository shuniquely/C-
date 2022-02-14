int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

int main()
{
	int result;

//	result = SimpleFunc();
}

// 인자가 없이 호출할 경우 오버로드된 두 함수가 인자가 일치함으로 오류가 일어난다(두 함수의 호출조건을 동시에 만족한다.).