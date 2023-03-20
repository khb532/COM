연산자 오버로딩 불가능 List

.멤버 접근 연산자
.*멤버 포인터 연산자
::범위 지정 연산자
? : 조건 연산자(3항)
sizeof				바이트 단위 크기 계산
typeid				RTTI 관련 연산자
static_cast			형변환 연산자
dynamic_cast		형변환 연산자
const_cast			형변환 연산자
reinterpret_cast	형변환 연산자

∵ C++의 문법규칙 보존

///////////////////

멤버 함수 기반으로만 오버로딩 가능

= 대입 연산자
()		함수 호출 연산자
[]		배열 접근 연산자(인덱스)
->멤버 접근을 위한 포인터 연산자

#객체를 대상으로 진행해야 의미가 있으므로 멤버함수 기반으로만 오버로딩 허용

//////////////////////

* *주의사항

연산자 오버로딩을 하여도, 연산자가 지니는 우선순위와 결합성은 그대로 따름
매개변수의 디폴트값 설정이 불가능
연산자의 순수기능은 변경불가



//////////////////////////

단항연산자 Overload

ex)++증가연산

전역함수 기반
operator++(pos);

멤버함수 기반
pos.operator++();
// 멤버함수는 전달할 매개변수&인자 없음

///////////////////////
/* R-Value , L-Value */
///////////////////////

*하기 메모는 주관적으로 이해한 내용을 바탕으로 기재.오류o

# L - Value : 단일 표현식 이후에도 없어지지 않고, 지속되는 객체.이름을 가지는 객체, const를 포함한 모든 변수들
# R - Value : 단일 표현식 이후, 더이상 존재하지 않는 임시값.상수, 임시객체

& 연산자는 L - value를 요구하기 때문에 우항에 R - value가 오게 되면 컴파일 오류;
	&(++num);	// ok
	&(num++);	// error

여기서, 전위증감은 피연산자를 참조할 수 있는 lvalue를 리턴, 
후위증감은 증감연산 진행전의 rvalue를 리턴함.

C++11 이후, R - value를 참조할 수 있는 참조자 추가
	int&& num = lvalue;		// error
	int&& num = rvalue();	// ok