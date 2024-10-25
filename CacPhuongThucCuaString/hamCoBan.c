#include <stdio.h>
#include <ctype.h>

char c = 'a';
if (isalpha(c))
{
    // đây là hàm trả về true false, nếu đúng là chữ cái thì trả về 1
    printf("%c là một chữ cái.\n", c);
}

char c = '5';
if (isdigit(c))
{
    // đây là hàm trả về true false, nếu đúng là kí số thì trả về 1
    printf("%c là một chữ số.\n", c);
}

char c = 'A';
if (isalnum(c))
{
    // nếu là chữ cái hoặc số thì trả về true
    printf("%c là chữ cái hoặc chữ số.\n", c);
}

char c = 'b';
if (islower(c))
{
    // kiểm tra xem chữ cái có phải chữ cái viết thường không
    printf("%c là chữ cái thường.\n", c);
}

char c = 'B';
if (isupper(c))
{
    // Đéo khác gì chữ thường
    printf("%c là chữ cái hoa.\n", c);
}

char c = ' ';
if (isspace(c))
{
    // Kiểm tra xem có phải khoảng trắng không
    printf("Đây là ký tự khoảng trắng.\n");
}

char c = '!';
if (ispunct(c))
{
    // Kiểm tra xem có phải kí tự đặc biệt không
    printf("%c là một dấu câu.\n", c);
}

char c = 'A';
if (isprint(c))
{
    printf("%c có thể in ra được.\n", c);
}

char c = 'D';
char lower = tolower(c); // lower = 'd'
// viêts thường kí tự
// Ví dụ cho string
// s[i] = tolower(s[i])
printf("%c chuyển thành chữ thường là %c.\n", c, lower);

char c = 'd';
char upper = toupper(c); // upper = 'D'
printf("%c chuyển thành chữ hoa là %c.\n", c, upper);

char c = '\n';
if (iscntrl(c))
{
    printf("Đây là ký tự điều khiển.\n");
}

char c = '#';
if (isgraph(c))
{
    printf("%c có thể hiển thị (không phải khoảng trắng).\n", c);
}

char c = 'A';
if (isxdigit(c))
{
    printf("%c là ký tự hợp lệ trong hệ thập lục phân.\n", c);
}
