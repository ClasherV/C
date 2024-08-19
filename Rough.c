#include <wchar.h>
#include <stdlib.h>
#include <wctype.h>
int main() {
    char mb = 'A';
    wchar_t wc;
    mbstate_t state;
    mbrtowc(&wc, &mb, 1, &state);
    wprintf(L"Wide character: %lc\n", wc);

    char mbout[MB_CUR_MAX];
    wcrtomb(mbout, wc, &state);
    printf("Multibyte sequence: %s\n", mbout);

    return 0;
}
