// #include <unistd.h>
// #include <string.h>


// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

// void ft_putnbr(int nb) {
//     int pos = 1;
//     if (nb < 0) {
//         pos = -1;
//     }
//     char splitNb [] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
//     int i = 0;
//     int del = 1000000000;
//     while (i < 10) {
//         splitNb [i] = nb / del * pos + '0';
//         nb = nb - (nb / del * del); 
//         del = del / 10;
//         i = i + 1;
//     }
//     if (pos == -1) {
//         ft_putchar('-');
//     }
//     i = 0;
//     while (splitNb[i] == '0' && i != 9) {
//         i = i + 1;
//     }
//     if (i == 9 && splitNb[9] == '0') {
//         ft_putchar('0');
//     }
//     else {
//         while (i < 10) {
//             ft_putchar(splitNb[i]);
//             i = i + 1;
//         }
//     }
// }

// void ft_ft(int *nbr) {
//     *nbr = 42;
// }

// void ft_ultimate_ft(int *********nbr) {
//     *********nbr = 42;
// }

// void ft_swap(int *a, int *b){
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

// void ft_div_mod(int a, int b, int *div, int *mod){
//     *div = a / b;
//     *mod = a % b;
// }

// void ft_ultimate_div_mod(int *a, int *b){
//     int div;
//     int mod;
//     div = *a / *b;
//     mod = *a % *b;
//     *a = div;
//     *b = mod;
// }

// void ft_putstr(char *str) {
//     int i = 0;
//     while (str[i]) {
//         ft_putchar(str[i]);
//         i = i + 1;
//     }
// }

// void ft_puttab(int *str, int size) {
//     int i = 0;
//     while (i < size) {
//         ft_putnbr(str[i]);
//         i = i + 1;
//     }
// }

// int ft_strlen(char *str) {
//     int i = 0;
//     while (str[i]) {
//         i = i + 1;
//     }
//     return (i);
// }

// void ft_rev_int_tab(int *tab, int size) {
//     int i = 0;
//     int c;
//     while (i < size / 2) {
//         ft_swap(&tab[i],&tab[size - i - 1]);
//         // c = tab[i];
//         // tab[i] = tab[size - i - 1];
//         // tab[size - i - 1] = c;
//         i = i + 1;
//     }
// }

// void ft_sort_int_tab(int *tab, int size) {
//     int i = 0;
//     int m = 0;
//     while (i < size - 1) {
//         m = 0;
//         while (m + 1 < size) {
//             if (tab[m] > tab[m + 1]) {
//                 ft_swap(&tab[m],&tab[m + 1]);
//             }
//             m = m + 1;
//         }
//         i = i + 1;
//     }
// }

// char *ft_strcpy(char *dest, char *src) {
//     int i = 0;
//     while (src[i]) {
//         dest[i] = src[i];
//         i = i + 1;
//     }
//     dest[i] = '\0';
//     return (dest);
// }

// char *ft_strncpy(char *dest, char *src, unsigned int n) {
//     unsigned int i = 0;
//     while (i < n && src[i] != '\0') {
//         dest[i] = src[i];
//         i = i + 1;
//     }
//     while (i < n) {
//         dest[i] = '\0';
//         i = i + 1;
//     }
//     return (dest);
// }

// int ft_str_is_alpha(char *str) {
//     int result = 1;
//     int i = 0;
//     while (str[i]) {
//         if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')) {
//             result = 0;
//         }
//         i = i + 1;
//     }
//     return(result);
// }

// int ft_str_is_numeric(char *str) {
//     int result = 1;
//     int i = 0;
//     while (str[i]) {
//         if (str[i] < '0' || str[i] > '9') {
//             result = 0;
//         }
//         i = i + 1;
//     }
//     return(result);
// }

// int ft_str_is_lowercase(char *str) {
//     int result = 1;
//     int i = 0;
//     while (str[i]) {
//         if (str[i] < 'a' || str[i] > 'z') {
//             result = 0;
//         }
//         i = i + 1;
//     }
//     return(result);
// }

// int ft_str_is_uppercase(char *str) {
//     int result = 1;
//     int i = 0;
//     while (str[i]) {
//         if (str[i] < 'A' || str[i] > 'Z') {
//             result = 0;
//         }
//         i = i + 1;
//     }
//     return(result);
// }

// int ft_str_is_printable(char *str) {
//     int result = 1;
//     int i = 0;
//     while (str[i]) {
//         if (str[i] <= 31) {
//             result = 0;
//         }
//         i = i + 1;
//     }
//     return(result);
// }

// char *ft_strupcase(char *str) {
//     int i = 0;
//     while (str[i]) {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 'a' + 'A';
//         }
//         i = i + 1;
//     }
//     return(str);
// }

// char *ft_strlowcase(char *str) {
//     int i = 0;
//     while (str[i]) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] = str[i] - 'A' + 'a';
//         }
//         i = i + 1;
//     }
//     return(str);
// }

// int ft_char_is_aA0 (char c) {
//     int res = 0;
//     if (c >= 'a' && c <= 'z') {
//         res = 1;
//     }
//     if (c >= 'A' && c <= 'Z') {
//         res = 1;
//     }
//     if (c >= '0' && c <= '9') {
//         res = 1;
//     }
//     return(res);
// }

// char *ft_strcapitalize(char *str) {
//     str = ft_strlowcase(str);
//     int i = 0;
//     while (str[i]) {
//         while (str[i] && ft_char_is_aA0(str[i]) == 0) {
//             i = i + 1;
//         }
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 'a' + 'A';
//         }
//         while (str[i] && ft_char_is_aA0(str[i]) == 1) {
//             i = i + 1;
//         }
//     }
//     return(str);
// }

// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
//     unsigned int i = 0;
//     if (size != 0) {
//         while (i < size - 1) {
//             dest[i] = src[i];
//             i = i + 1;
//         }
//         dest[i] = '\0';
//     }
//     return (ft_strlen(src));
// }

// void ft_putstr_non_printable(char *str) {
//     int i = 0;
//     int size = ft_strlen(str);
//     while (i < size) {
//         if (str[i] <= 31) {
//             ft_putchar('\\');
//             ft_putnbr(str[i] / 16);
//             if (str[i] % 16 < 10) {
//                 ft_putnbr(str[i] % 16);
//             }
//             else {
//                 ft_putchar(str[i] % 16 - 10 + 'a');
//             }
//         }
//         else {
//             ft_putchar(str[i]);
//         }
//         i = i + 1;
//     }
    
// }

// int ft_strcmp(char *s1, char *s2) {
//     int i = 0;
//     while (s1[i] - s2[i] == 0 && (s1[i] && s2[i])) {
//         i = i + 1;
//     }
//     return (s1[i] - s2[i]);
// }

// int ft_strncmp(char *s1, char *s2, unsigned int n) {
//     unsigned int i = 0;
//     while (i < n && s1[i] - s2[i] == 0 && (s1[i] && s2[i])) {
//         i = i + 1;
//     }
//     return (s1[i] - s2[i]);
// }

char *ft_strcat(char *dest, char *src) {
    int i = 0;
    int l = ft_strlen(dest);
    while (src[i]) {
        dest[i + l] = src[i];
        i = i + 1;
    }
    dest[i + l] = '\0';
    return (dest);
}

// int main(void) {
//     char s1[100] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
//     char s2[] = {"salut, comment tu vas ? 43"};
//     ft_putstr(ft_strcat(s1,s2));
//     ft_putchar('\n');
//     char s3[100] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
//     char s4[] = {"salut, comment tu vas ? 43"};
//     ft_putstr(strcat(s3,s4));
// }