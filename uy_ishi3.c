
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     int tanlov;
//     char matn[1000];

//     printf("2. Gapni katta harf va nuqta bilan yozish\n");
//     printf("3. Har bir belgi necha marta qatnashganini topish\n");
//     printf("4. Maxsus belgilar sonini topish\n");
//     printf("5. Gap ichidagi so'zlarni chiqarish\n");
//     printf("6. 'o' harfini 'o\\'' ga almashtirish\n");
//     printf("Tanlovni kiriting: ");
//     scanf("%d", &tanlov);
//     getchar();

//     printf("Matn kiriting: ");
//     fgets(matn, sizeof(matn), stdin);
//     matn[strcspn(matn, "\n")] = '\0';

//     if (tanlov == 2) {
//         if (matn[0] != '\0') {
//             matn[0] = toupper((unsigned char)matn[0]);

//             int uzunlik = strlen(matn);

//             if (matn[uzunlik - 1] != '.') {
//                 matn[uzunlik] = '.';
//                 matn[uzunlik + 1] = '\0';
//             }
//         }

//         printf("%s\n", matn);
//     }

//     else if (tanlov == 3) {
//         int sanalgan[1000] = {0};
//         int uzunlik = strlen(matn);

//         for (int i = 0; i < uzunlik; i++) {
//             if (sanalgan[i]) {
//                 continue;
//             }

//             int son = 1;

//             for (int j = i + 1; j < uzunlik; j++) {
//                 if (matn[i] == matn[j]) {
//                     son++;
//                     sanalgan[j] = 1;
//                 }
//             }

//             printf("'%c' %d ta\n", matn[i], son);
//         }
//     }

//     else if (tanlov == 4) {
//         int son = 0;

//         for (int i = 0; matn[i] != '\0'; i++) {
//             if (!isalnum((unsigned char)matn[i]) &&
//                 matn[i] != ' ') {
//                 son++;
//             }
//         }

//         printf("Spets belgilar soni: %d ta\n", son);
//     }

//     else if (tanlov == 5) {
//         for (int i = 0; matn[i] != '\0'; i++) {
//             if (matn[i] == '.' || matn[i] == '!' ||
//                 matn[i] == '?' || matn[i] == ',') {
//                 matn[i] = ' ';
//             }
//         }

//         printf("%s\n", matn);
//     }

//     else if (tanlov == 6) {
//         char natija[2000];
//         int i = 0, j = 0;

//         while (matn[i] != '\0') {
//             if (matn[i] == 'o' && matn[i + 1] != '\'') {
//                 natija[j++] = 'o';
//                 natija[j++] = '\'';
//                 i++;
//             } else {
//                 natija[j++] = matn[i++];
//             }
//         }

//         natija[j] = '\0';
//         printf("%s\n", natija);
//     }

//     else {
//         printf("Noto'g'ri tanlov!\n");
//     }

//     return 0;
// }
