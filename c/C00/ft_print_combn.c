#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int nb) {
    int pos = 1;
    if (nb < 0) {
        pos = -1;
    }
    char splitNb [] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
    int i = 0;
    int del = 1000000000;
    while (i < 10) {
        splitNb [i] = nb / del * pos + '0';
        nb = nb - (nb / del * del); 
        del = del / 10;
        i = i + 1;
    }
    if (pos == -1) {
        ft_putchar('-');
    }
    i = 0;
    while (splitNb[i] == '0' && i != 9) {
        i = i + 1;
    }
    if (i == 9 && splitNb[9] == '0') {
        ft_putchar('0');
    }
    else {
        while (i < 10) {
            ft_putchar(splitNb[i]);
            i = i + 1;
        }
    }
}


void ft_print_combn(int n) {
    int del = 100000000;
    int i = 0;
    int flag = 1;
    int firstN = 1;
    int nb = 0;
    int chaNb = 0;
    int maxNb = 1;
    i = 0;
    while (i < n) {
        maxNb = maxNb * 10;
        i = i + 1;
    }

    while (nb < maxNb) {
        char splitNb [] = {'0', '0', '0', '0', '0', '0', '0', '0', '0'};
        i = 0;
        del = 100000000;
        chaNb = nb;

        while (i < 9) {
            splitNb [i] = chaNb / del + '0';
            chaNb = chaNb - (chaNb / del * del); 
            del = del / 10;
            i = i + 1;
        }

        //проверка
        if (n == 1) {
            flag = 1;
        }
        else {
            i = 0;
            while (i + 1 < n) {
                if (splitNb[8 - i] <= splitNb[7 - i]) {
                    flag = 0;
                }
                i = i + 1;
            }
        }

        if (flag == 1) {
            // вывод одной комбинации
            i = 0;
            if (firstN == 1) {
                firstN = 0;
            }
            else {
                ft_putchar(',');
                ft_putchar(' ');
            }
            while (i + 9 - n < 9) {
                ft_putchar(splitNb[i + 9 - n]);
                i = i + 1;
            }
        }
        nb = nb + 1;
        flag = 1;
    }
}

int main(void) {
    ft_print_combn(9);
}