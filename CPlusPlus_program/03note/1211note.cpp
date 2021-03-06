//클래스 / 객체 / 인터페이스
//
//- 객체 지향적 언어 C++
//	: 중복되는 것은 최대한 피하고 서로 연관짓고 결합해서 만들어냄
//	(클래스 : 설계도, 객체 : 만들어낸 물체)
//
//	- object : 변수 함수(메소드)들의 집합
//	- class : 객체(object), 구조체에서 혹장하는 변수, 함수들의 통하는 틀
//
//	= > 클래스는 하나의 주체(틀), 거기서 파생되고 확장시키는 것들이 객체
//	ㄴ > 자판기                                   ㄴ > 커피, 음료, 담배, 술 등
//
//
//	- 구조체
//	typedef struct member {
//	멤버변수
//		멤버변수
//}mem; = > 구조체에서 확장하는 변수
//
//typedef struct member {
//		멤버변수
//			멤버변수
//	}mem1; = > 구조체에서 확장하는 변수 - 여러개 만들 수 있음
//
//
//		1. 돈을 넣는 구멍이 있다.
//			2. 버튼이 8개 있다.
//			3. 조그마한 화면이 있다.
//			5. 버튼을 누른다.
//			7. 반환 버튼이 있다. = > 자판기(클래스)
//
//			4. 종이 컵이 나오는 곳이 있다.
//			6. 뜨거운 물 혹은 얼음이 나온다.
//			8. 종류가 블랙, 밀크 커피, 율무차 등이 있다. = > 커피 자판기(객체)
//
//			9. 사이다, 콜라 등, , , , = > 음료자판기(객체)
//			ㄴ > 객체는 무수히 많이 만들 수 있지만 무수히 많이 파괴됨
//
//
//			String color = "blue";
//		String weight = "700g";
//		String button1 = "*:;
//			String button2 = "#";
//		String button3 = "1";
//		.....
//			bool = "Poweron";
//		seng() {
//		}
//		internet() {
//		}
//		Call()
//			time();
//
//
//		-객체지향적 언어 특징(절차적언어C는 통합해서 함)
//			1. 사용자 관점
//			2. 기계를 제작하는 제작자 관점(프로그램 만드느 사람)
//			= > 구분할 줄 알아야 함
//
//			- 절차적 언어 : 제작자가 갑
//			- 객체지향적 언어 : 사용자가 갑, 어떻게 프로그램을 더 쉽게 이용할 수 있을까
//
//			->객체 지향적 언어는
//			1. 사용자의 실수를 최소화 하고, 사용자의 편리성을 극대화한다.
//
//
//			//절차적언어 형태
//			  // 제작자 관점
//			typedef struct USERDATA {
//			int age;
//			char name[30];
//		}USERDATA;
//
//		// 사용자 관점
//		int main(void) {
//			USERDATA user = { 20, "길동" };
//			printf("%d, %s \n", user.age, user.name);
//
//			return 0;
//		}
//		= > 위의 코드는
//			구조체의 멤버변수 명이 변경되면 사용자의 코드도 같이 변경해야한다.
//
//			//객체지향적언어 형태
//			  // 제작자 관점
//			typedef struct USERDATA {
//			int age;
//			char name[30];
//		}USERDATA;  // 구조체 변수 선언
//
//		void PrintData(USERDATA* pUser) {
//			printf("%d, %s \n", pUser->age, pUser->name);
//		}
//
//		// 사용자 관점
//		int main(void) {
//			USERDATA user = { 20, "길동" };
//			PrintData(&user); // 인터페이스 함수
//
//			return 0;
//		}
//		= > 함수의 기능만을 제공받아서 사용하면 만사형통
//			구조체 내부가 어떻게 이루어지고 어떻게 작동하는 지를 알 필요는 없다.
//			이렇게 함수의 기능만 받아서 사용하는 것을 "인터페이스 함수"라고 한다.
//
//
//			클래스를 선언하고 사용하면 객체지향언어에서는
//			< 자동적으로 생성자라는 놈이 생성된다.               >
//			Test 클래스의 생성자는 Test()이다. = > 생성자 또한 메소드(함수)나 마찬가지
//
//			- 클래스
//			1. 첫 번째 문자는 반드시 대문자(Test(클래스), test(변수))
//			2. 대소문자 구분이 확실하다.
//
//			class 클래스이름 {
//		접근지시자:
//			멤버변수;
//			멤버변수 선언 그리고 정의;
//		};
//
//		-접근제어지시자(접근제어자)
//			: 1. public          2. protected      3. private
//			(누구나접근)(반반)(관련자외접근못함)
//
//			구조체(함수 못들어감)->멤버 변수
//			클래스(함수도 들어감)->멤버 필드    라고 부름
//
//			= > 클래스가 가지고 있는 변수
//			및 클래스가 가지고 있는 함수 안에 있는 변수는
//			지역 변수라고 하지 않는다.
//			그냥 클래스의 멤버 변수들이다.
//
//			ㄴ > 일반적으로 선언하는 변수와 클래스 안에 있는 변수들은
//			서로 다른 의미를 가지고 있다.
//
//			- 객체를 초기화 시켜주는 것은 생성자 하나 뿐이다.
//
//			->클래스에서 멤버 필드, 멤버 메소드가 나타내는 것은
//			클래스를 정의하는 것을 의미한다.
//
//			인스턴스 변수 = 객체
//
//
//
//			-멤버 선언과 정의
//			객체는 데이터 형이 존재하지 않는다.
//			ㄴ > 생성자에 의해 형성되는 객체)
//			생성자 : 객체를 초기화 시켜줌, 객체로 만들어줌
//
//			--------->클래스 선언할 때 생성자, 변수, 메소드 순서로 써야함
