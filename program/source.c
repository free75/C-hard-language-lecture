#include <stdio.h>

int main()
{
#pragma region 파일 입출력

	// 첫 번째 매개 변수 (파일의 이름)
	// 두 번째 매개 변수 (파일의 입출력 모드)

#pragma region 파일 만드는 방법

	// * 파일 만드는 방법

	// 파일 입출력 과정 후에 만든 파일 보는 방법:
	// 선언한 파일에서 오른쪽 클릭 후에 
	// 파일 탐색기에서 폴더 열기를 사용하면
	// 만든 파일을 확인할 수 있습니다.

#pragma endregion

	FILE* file = fopen("test.txt", "w"); // fopen : 말 그대로 새로운 파일을 만들게 도와주는 명령어입니다.

#pragma region 파일에 원하는 문자 출력하는 방법

	// * 파일을 만든 후에 파일 안에 원하는 문자를 출력하는 방법
	
	// fputs라는 printf와 비슷한 기능을 가진
	// 명령어를 통해 fputs("문자열", 포인터) 형식으로 만들고 난 후에
	// 파일을 여는 과정에서 오류가 생기는 것을 방지하기 위해 
	// fclose(포인터 변수) 형식을 사용하여 파일에 오류가 나는 것도 방지하면 
	// 파일 안에 원하는 문자를 출력할 수 있습니다.

# pragma endregion

	fputs("안녕하세요", file); // fputs: 만든 파일 안에 입력할 문자 혹은 숫자들을 적도록 만들어 주는 명령어입니다.

	fclose(file);

#pragma endregion

#pragma region



#pragma endregion

#pragma region



#pragma endregion

#pragma region



#pragma endregion

#pragma region



#pragma endregion

#pragma region



#pragma endregion

	return 0;
}