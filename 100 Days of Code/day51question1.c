#include <stdio.h>
int main()
{
    char s[20];
    if (!fgets(s, 20, stdin))
        return 0;
    char d1 = s[0], d2 = s[1], m1 = s[3], m2 = s[4];
    char y[5];
    for (int i = 0; i < 4; i++)
        y[i] = s[6 + i];
    y[4] = '\0';
    char *mon = "";
    if (m1 == '0' && m2 == '1')
        mon = "Jan";
    else if (m1 == '0' && m2 == '2')
        mon = "Feb";
    else if (m1 == '0' && m2 == '3')
        mon = "Mar";
    else if (m1 == '0' && m2 == '4')
        mon = "Apr";
    else if (m1 == '0' && m2 == '5')
        mon = "May";
    else if (m1 == '0' && m2 == '6')
        mon = "Jun";
    else if (m1 == '0' && m2 == '7')
        mon = "Jul";
    else if (m1 == '0' && m2 == '8')
        mon = "Aug";
    else if (m1 == '0' && m2 == '9')
        mon = "Sep";
    else if (m1 == '1' && m2 == '0')
        mon = "Oct";
    else if (m1 == '1' && m2 == '1')
        mon = "Nov";
    else if (m1 == '1' && m2 == '1' + 1)
        mon = "Dec";
    printf("%c%c-%s-%s", d1, d2, mon, y);
    return 0;
}
