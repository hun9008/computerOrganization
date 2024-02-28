gcc -o pa1 pa1.c
./pa1 testcases/i-format

| add | t1  |     |     |
| --- | --- | --- |     |
|0x20 |   9 |     |     |

add t0 t1 t2
20 8 9 10
0x012a4020

addi sp sp -0x10

0x23bdfff0

sll t0 t1 10
00 8 9 001010
0x00094280

  | Name   | Opcode / opcode + funct |
  | ------ | ----------------------- |
  | `add`  | 0 + 0x20                |
  | `sub`  | 0 + 0x22                |
  | `and`  | 0 + 0x24                |
  | `or`   | 0 + 0x25                |
  | `nor`  | 0 + 0x27                |

  | `sll`  | 0 + 0x00                |
  | `srl`  | 0 + 0x02                |
  | `sra`  | 0 + 0x03                |

  | `addi` | 0x08                    |
  | `andi` | 0x0c                    |
  | `ori`  | 0x0d                    |
  | `lw`   | 0x23                    |
  | `sw`   | 0x2b                    |
  | `beq`  | 0x04                    |
  | `bne`  | 0x05                    |

  | Name   | Number |
  | ------ | ------ |
  | zero   | 0      |
  | at     | 1      |
  | v0-v1  | 2-3    |
  | a0-a3  | 4-7    |
  | t0-t7  | 8-15   |
  | s0-s7  | 16-23  |
  | t8-t9  | 24-25  |
  | k1-k2  | 26-27  |
  | gp     | 28     |
  | sp     | 29     |
  | fp     | 30     |
  | ra     | 31     |

  1. strtol 함수:
strtol 함수는 표준 C 라이브러리 함수로, 문자열을 long 정수로 변환합니다.

c
Copy code
long strtol(const char *str, char **endptr, int base);
str: 변환할 문자열의 시작 포인터입니다.
endptr: (선택 사항) 변환 후 문자열의 끝을 가리키는 포인터입니다.
base: 진수의 기초입니다. 10은 십진수, 16은 16진수 등입니다.
strtol 함수는 문자열 str을 base 진수로 해석하여 그에 해당하는 long 정수 값을 반환합니다.

2. strtoimax 함수:
strtoimax 함수는 intmax_t 타입의 정수로 문자열을 변환합니다. intmax_t는 시스템에서 사용 가능한 가장 큰 정수 타입입니다.

c
Copy code
intmax_t strtoimax(const char *nptr, char **endptr, int base);
nptr: 변환할 문자열의 시작 포인터입니다.
endptr: (선택 사항) 변환 후 문자열의 끝을 가리키는 포인터입니다.
base: 진수의 기초입니다. 10은 십진수, 16은 16진수 등입니다.
strtoimax 함수는 문자열 nptr을 base 진수로 해석하여 그에 해당하는 intmax_t 정수 값을 반환합니다.

사용 예:
strtol 함수의 사용 예는 다음과 같습니다:

c
Copy code
char *str = "12345";
char *endptr;
long num = strtol(str, &endptr, 10); // num에는 12345가 저장됩니다.
strtoimax 함수의 사용 예는 다음과 같습니다:

c
Copy code
char *str = "12345";
char *endptr;
intmax_t num = strtoimax(str, &endptr, 10); // num에는 12345가 저장됩니다.
두 함수 모두 유효하지 않은 문자가 나타나면 그 지점에서 변환을 중지하고, endptr가 그 지점을 가리키게 됩니다. 만약 endptr에 NULL이 전달되면, 이 인자는 무시됩니다.