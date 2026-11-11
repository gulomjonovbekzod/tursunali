
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     int tanlov;
//     char satr[100], satr1[100], satr2[100];

//     printf("1. Ism va familiyani tekshirish\n");
//     printf("2. Harflar va raqamlarni ajratish\n");
//     printf("3. Kichik va katta harflarga o'zgartirish\n");
//     printf("4. Satrlarni taqqoslash\n");
//     printf("5. Bo'shliqlarni olib tashlash va katta harf qilish\n");
//     printf("6. Har bir belgining takrorlanishini hisoblash\n");
//     printf("Tanlovni kiriting: ");
//     scanf("%d", &tanlov);
//     getchar();

//     if (tanlov == 1) {
//         char ism[50], familiya[50];
//         char ism_familiya[100];
//         int togri = 1;

//         printf("Ismingizni kiriting: ");
//         fgets(ism, sizeof(ism), stdin);
//         ism[strcspn(ism, "\n")] = '\0';

//         printf("Familiyangizni kiriting: ");
//         fgets(familiya, sizeof(familiya), stdin);
//         familiya[strcspn(familiya, "\n")] = '\0';

//         for (int i = 0; ism[i] != '\0'; i++) {
//             if (!isalpha((unsigned char)ism[i])) {
//                 togri = 0;
//             }
//         }

//         for (int i = 0; familiya[i] != '\0'; i++) {
//             if (!isalpha((unsigned char)familiya[i])) {
//                 togri = 0;
//             }
//         }

//         if (strlen(ism) == 0 || strlen(familiya) == 0) {
//             togri = 0;
//         }

//         if (togri) {
//             for (int i = 0; ism[i] != '\0'; i++)
//                 ism[i] = toupper((unsigned char)ism[i]);

//             for (int i = 0; familiya[i] != '\0'; i++)
//                 familiya[i] = toupper((unsigned char)familiya[i]);

//             strcpy(ism_familiya, ism);
//             strcat(ism_familiya, " ");
//             strcat(ism_familiya, familiya);

//             printf("Natija: %s\n", ism_familiya);
//             printf("Ism va familiya faqat harflardan iborat: Ha\n");
//         } else {
//             printf("Ism yoki familiyada harfdan boshqa belgi bor!\n");
//             printf("Ism va familiya faqat harflardan iborat: Yo'q\n");
//         }
//     }

//     else if (tanlov == 2) {
//         int harf = 0, raqam = 0;

//         printf("Satrni kiriting: ");
//         fgets(satr, sizeof(satr), stdin);
//         satr[strcspn(satr, "\n")] = '\0';

//         for (int i = 0; satr[i] != '\0'; i++) {
//             unsigned char c = (unsigned char)satr[i];

//             if (isalpha(c))
//                 harf++;
//             else if (isdigit(c))
//                 raqam++;
//         }

//         printf("Raqamlar soni: %d\n", raqam);
//         printf("Harflar soni: %d\n", harf);
//         printf("Natijalar:\n");

//         for (int i = 0; satr[i] != '\0'; i++) {
//             unsigned char c = (unsigned char)satr[i];

//             if (isalpha(c))
//                 printf("%c - harf\n", satr[i]);
//             else if (isdigit(c))
//                 printf("%c - raqam\n", satr[i]);
//             else
//                 printf("%c - maxsus belgi\n", satr[i]);
//         }
//     }

//     else if (tanlov == 3) {
//         char kichik[100], katta[100];

//         printf("Satrni kiriting: ");
//         fgets(satr, sizeof(satr), stdin);
//         satr[strcspn(satr, "\n")] = '\0';

//         strcpy(kichik, satr);
//         strcpy(katta, satr);

//         for (int i = 0; kichik[i] != '\0'; i++) {
//             kichik[i] = tolower((unsigned char)kichik[i]);
//             katta[i] = toupper((unsigned char)katta[i]);
//         }

//         printf("Kichik harf: %s\n", kichik);
//         printf("Katta harf: %s\n", katta);
//         printf("Kichik harflar uzunligi: %d\n",
//                (int)strlen(kichik));
//         printf("Katta harflar uzunligi: %d\n",
//                (int)strlen(katta));
//     }

//     else if (tanlov == 4) {
//         printf("Birinchi satrni kiriting: ");
//         fgets(satr1, sizeof(satr1), stdin);
//         satr1[strcspn(satr1, "\n")] = '\0';

//         printf("Ikkinchi satrni kiriting: ");
//         fgets(satr2, sizeof(satr2), stdin);
//         satr2[strcspn(satr2, "\n")] = '\0';

//         if (strcmp(satr1, satr2) == 0) {
//             char natija[201];

//             strcpy(natija, satr1);
//             strcat(natija, " ");
//             strcat(natija, satr2);

//             printf("Birlashtirilgan natija: %s\n", natija);
//         } else {
//             int boshliq = 0;

//             for (int i = 0; satr1[i] != '\0'; i++) {
//                 if (satr1[i] == ' ')
//                     boshliq++;
//             }

//             for (int i = 0; satr2[i] != '\0'; i++) {
//                 if (satr2[i] == ' ')
//                     boshliq++;
//             }

//             printf("Birlashtirishni amalga oshirish mumkin emas.\n");
//             printf("Satr1 uzunligi: %d\n", (int)strlen(satr1));
//             printf("Satr2 uzunligi: %d\n", (int)strlen(satr2));
//             printf("Bo'shliq belgilar soni: %d\n", boshliq);
//         }
//     }

//     else if (tanlov == 5) {
//         printf("Satrni kiriting: ");
//         fgets(satr, sizeof(satr), stdin);

//         printf("Natija:\n");

//         for (int i = 0; satr[i] != '\0'; i++) {
//             unsigned char c = (unsigned char)satr[i];

//             if (isalpha(c)) {
//                 char belgi[2];
//                 belgi[0] = toupper(c);
//                 belgi[1] = '\0';
//                 puts(belgi);
//             }
//         }
//     }

//     else if (tanlov == 6) {
//         int sanalgan[100] = {0};
//         int uzunlik;

//         printf("Satrni kiriting: ");
//         fgets(satr, sizeof(satr), stdin);
//         satr[strcspn(satr, "\n")] = '\0';

//         uzunlik = strlen(satr);

//         for (int i = 0; i < uzunlik; i++) {
//             if (sanalgan[i])
//                 continue;

//             int son = 1;
//             unsigned char c = (unsigned char)satr[i];

//             for (int j = i + 1; j < uzunlik; j++) {
//                 unsigned char d = (unsigned char)satr[j];

//                 if (tolower(c) == tolower(d)) {
//                     son++;
//                     sanalgan[j] = 1;
//                 }
//             }

//             if (satr[i] == ' ')
//                 printf("' ' - %d ta (bo'shliq)\n", son);
//             else
//                 printf("'%c' - %d ta\n", satr[i], son);
//         }
//     }

//     else {
//         printf("Noto'g'ri tanlov!\n");
//     }

//     return 0;
// }
