// #include <unistd.h>

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

void ft_sort_int_tab(int *tab, int size) {
    int i = 0;
    int m = 0;
    while (i < size - 1) {
        m = 0;
        while (m + 1 < size) {
            if (tab[m] > tab[m + 1]) {
                ft_swap(&tab[m],&tab[m + 1]);
            }
            m = m + 1;
        }
        i = i + 1;
    }
}

// int main(void) {
//     int string[] = {9,8};
//     ft_sort_int_tab(string, 2);
//     ft_puttab(string, 2);
// }