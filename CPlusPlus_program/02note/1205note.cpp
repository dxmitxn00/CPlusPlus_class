//함수 / 배열 / 포인터 / 객체(클래스)
//
//- 함수(function / method / 서브 루틴 / 프로시저)
//
//함수를 사용하는 이유
//1. 가독성을 증대
//2. 코드(소스, 함수)의 재활용(재사용)
//ㄴ > 사용자의 선택에 따라 다양하게 쓸 수 있도록 헤줌
//3. 유지 보수
//
//반환형 함수이름(매개변수) {
//
//}
//
//= > C++ 반환형을 선언하지 않을 시 기본적으로 error 발생
//반드시 반환 타입을 선언해주어야 한다.
//= > return 형을 생략할 수 있기 때문에 필수
//
//(return 형의 반환타입은 하나만 받는다.)
//
//<클래스에서 파생된 객체
//	객체가 가지는 메소드
//	메소드가 가지는 변수>
//	== = > 멤버 필드라고 한다.
//	ㄴ > 멤버 필드는 지역 변수와 다르다.
//
//
//
//	-중복함수(매개변수를 가지고 구분함)
//	: C++에서는 같은 이름의 함수(메소드)를 여러개 정의할 수 있다.
//	ㄴ > 함수 이름은 같은데 하는 일이 다름
//	==> "다형성" or "메소드 오버로딩"
//
//	int square(int n) {
//	cout << "square(int) 호출" << endl;
//	return (n * n);
//}
//
//double square(double n) {
//	cout << "square(double) 호출" << endl;
//	return (n * n);
//}
//
//int main(void) {
//	cout << square(10) << endl;
//	cout << square(2.0) << endl;
//	return 0;
//}
//
//= > 반환형과 매개변수가 다르면 중복 함수가 안됨
//ㄴ > 그냥 함수는 가능함
//
//- 디폴트 매개 변수
//void sub(double value);
//
//void sub(double value = 1.0);
//
//= > C++인수를 전달하지 않아도 디폴트로 대신 값을 넣어준다.
//
//디폴트 매개 변수 선언 시
//항상 매개 변수 값은 오른쪽부터 인자를 넣어서 디폴트화 한다.
//void func(int p1, int p2, p3 = 30);
//void func(int p1, int p2 = 20, p3 = 30);
//void func(int p1 = 10, int p2 = 20, p3 = 30);
//ㄴ > 함수 호출 시 반드시 첫 번째 인수부터 값을 줘야하기 때문
//void func(int p1 = 10, int p2, p3) = > X
//
//
//- inline 함수(inline 함수는 메모리에 안넣는다.)
//inline 함수 사용하는 이유
//1. 함수 변경이 쉽다.
//2. 수정이 용이하다.
//3. 함수 동작을 쉽게 파악할 수 있다.
//4. 메모리가 줄어들기 때문에 실행 속도가 빨라진다.
//
//= > 컴파일러가 함수를 생성하지 않고
//함수의 코드를 호출한 곳으로 직접 넣는다.
//
//
//#include
//전처리기: 함수 매크로  라고 불림
//
//
//- 전역 변수 / 지역 변수 / 정적 지역 변수(static)
//- 배열
//
//상수(이름이 아니라 데이터 값이 상수인 것)
//int a = 10;
//int A = 10;->기호 상수(A가 아닌 10이 상수)
//== = > 둘다 변수이지만 프로그램에서 약속을 한 것
//
//- 기호 상수를 선언해주는 const를 선언하면
//배열의 크기를 변경할 수 있다.
//= > 다른 곳의 변경없이 정의만 바꾸면 된다.
//
//
//
//
//-포인터 : 가리킨다.
//포인터 변수 p가 변수 num의 주소를 가지고 있다.
//= 포인터 변수 p가 변수 num을 가리킨다.
//= p->num //이라고 표기
//ㄴ > 화살표가 보이면 앞은 포인터 변수, 뒤는 변수
//
//int* p; // 정수를 가리키는 포인터
//= > p보다 int* 이 더 중요함
//
//int i = 10;  // i라는 변수 선언
//p = &i;  // 변수 i의 주소를 포인터p로 대입
//
//*: 간접 참조 연산자
//
//int i = 10;
//int* p = &i;
//
//cout << *p;
//
//
//간접 참조 연산자와 증감 연산자의 관계
//
//* p++; // p가 가진 주소를 증가시키고 그 주소의 값을 출력
//
//(*p)++; // p가 가리키는 대상의 값을 증가
//
//======== = > *보다 ++가 우선임
//
//
//
//
//!!!!데이터형이 다를 때 출력을 어떻게 할 지 모르겠으면 void 씀!!!!
//
//char* pc;
//
//pc = (char*)10000;
//
//cout << "pc = " << (void*)pc;
//
//
//
//
//
//
//-포인터 주의할 점
//1. 포인터 타입 그리고 변수 타입 일치
//int i;
//double* p;
//p = &i;  //(x) 정수형이랑 더블은 일치 하지 않음
//
//2. 초기화를 꼭 해야한다.
//int* p;
//*p = 100; // 위험한 코드
//
//
//-포인터 초기화 하는 방법
//int* p = NULL; // 아무것도 가리키지 않는다.
//
//
//-배열의 크기(길이) = size(arrayName) / sizeof(int)
//
//- 동적 메모리 할당
//malloc() / free() = > 두개는 짝꿍, 프리 꼭 선언해줘야함
//ㄴ > 모든 프로그밍 언어에서 사용하는 키워드
//
//- new / delete 키워드 : 동적 메모리 할당 / 메모리삭제 키워드
//변수 = new 데이터형[메모리수];
//
//pi = (int*)malloc(MAX_SIZE * sizeof(int));
//p = new int[50];
//= > 두개가 같은 것
//
//free(p);
//delete[] p;
//= > 두개가 같은 것
//
//
//int* p = new int; // 하나의 정수형 공간 할당
//
//
//
//-참조자(변수에게 별명을 붙여서 접근하는 것을 의미)
//
//int a = 10;
//
//int& b = a; // b는 a에 접근이 가능해지는 참조자가 됨
//
//b = 20; // a가 20이 됨
//
//
//-참조자와 포인터의 차이점
//1. 포인터는 대상을 변경 가능하다.
//참조자는 대상을 변경 불가능하다.
//2. 참조자는 선언과 동시에 초기화를 해줘야 한다.
//
//== = > 참조자는 함수 호출 시에 매개 변수 반환 값으로 사용함
