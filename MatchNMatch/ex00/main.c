#include <stdio.h>

int	match(char *s1, char *s2);

int	main(void)
{

printf("%d\n", match("a", "*a*"));
printf("%d\n", match("aaa", "*a*"));
printf("%d\n", match("aaaaaaabc", "*a*"));
printf("%d\n", match("bcabc", "*a*"));
printf("%d\n\n", match("sdfa", "*a*"));

printf("%d\n", match("", "*a*"));
printf("%d\n", match("f", "*a*"));
printf("%d\n", match("bcd", "*a*"));
printf("%d\n", match("bb", "*a*"));
printf("%d\n\n", match("ASDF", "*a*"));

printf("%d\n", match("asdf", "*a**"));
printf("%d\n", match("sdfa", "*a**"));
printf("%d\n", match("faffff", "*a**"));
printf("%d\n", match("fdsaasdf", "*a**"));
printf("%d\n\n", match("aaaaaaa", "*a**"));


printf("%d\n", match("", "*a**"));
printf("%d\n", match("qwerqwer", "*a**"));
printf("%d\n", match("bbbbbb", "*a**"));
printf("%d\n", match("c", "*a**"));
printf("%d\n\n", match("AAAAAAAAAA", "*a**"));

printf("%d\n", match("main.c", "*.c"));
printf("%d\n", match("main.c.c", "*.c"));
printf("%d\n", match("main.h", "*.c"));
printf("%d\n", match("main.cc", "*.c"));
printf("%d\n\n", match("main.c", "*.*"));

printf("%d\n", match("test.main.c", "test.*.c"));
printf("%d\n", match("test..c", "test.*.c"));
printf("%d\n", match("test.main.h", "test.*.c"));
printf("%d\n", match("main.c", "test.*.c"));
printf("%d\n\n", match("test.c", "test.*.c"));

printf("%d\n", match("abcde", "a*c*e"));
printf("%d\n", match("abcde", "*b*d*"));
printf("%d\n", match("abcde", "a*e*c"));
printf("%d\n", match("abcde", "*d*c*"));
printf("%d\n\n", match("abcde", "a*d*d"));

printf("%d\n", match("*a", "*"));
printf("%d\n", match("**", "*"));
printf("%d\n", match("*ab", "*b"));
printf("%d\n", match("a*a", "a*"));
printf("%d\n\n", match("**a", "*a"));

	return (1);
}
