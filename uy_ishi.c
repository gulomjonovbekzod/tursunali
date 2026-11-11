
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main() {
//     int tanlov;
//     char harf;
//     char qator[1000];

//     printf("1. Kichik harflarni katta harfga aylantirish\n");
//     printf("2. Har bir sozni alohida qatorga yozish\n");
//     printf("3. Har bir harfni ikki nusxada yozish\n");
//     printf("4. Har bir qator uzunligini yozish\n");
//     printf("Tanlang: ");
//     scanf("%d", &tanlov);

//     if (tanlov == 1) {
//         FILE *fayl = fopen("matn.txt", "r");
//         FILE *natija = fopen("natija.txt", "w");

//         if (fayl == NULL || natija == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         while ((harf = fgetc(fayl)) != EOF) {
//             fputc(toupper((unsigned char)harf), natija);
//         }

//         fclose(fayl);
//         fclose(natija);
//     }

//     else if (tanlov == 2) {
//         FILE *natija = fopen("natija.txt", "w");

//         if (natija == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         getchar();
//         printf("Matn kiriting: ");
//         fgets(qator, sizeof(qator), stdin);

//         char *soz = strtok(qator, " \t\n");

//         while (soz != NULL) {
//             fprintf(natija, "%s\n", soz);
//             soz = strtok(NULL, " \t\n");
//         }

//         fclose(natija);
//     }

//     else if (tanlov == 3) {
//         FILE *fayl = fopen("matn.txt", "r");
//         FILE *natija = fopen("natija.txt", "w");

//         if (fayl == NULL || natija == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         while ((harf = fgetc(fayl)) != EOF) {
//             fputc(harf, natija);
//             fputc(harf, natija);
//         }

//         fclose(fayl);
//         fclose(natija);
//     }

//     else if (tanlov == 4) {
//         FILE *fayl = fopen("matn.txt", "r");
//         FILE *natija = fopen("natija.txt", "w");

//         if (fayl == NULL || natija == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         while (fgets(qator, sizeof(qator), fayl) != NULL) {
//             int uzunlik = strlen(qator);

//             if (uzunlik > 0 && qator[uzunlik - 1] == '\n') {
//                 qator[uzunlik - 1] = '\0';
//                 uzunlik--;
//             }

//             fprintf(natija, "%s - %d\n", qator, uzunlik);
//         }

//         fclose(fayl);
//         fclose(natija);
//     }

//     else {
//         printf("Notogri tanlov!");
//         return 1;
//     }

//     printf("Natija natija.txt fayliga yozildi!\n");

//     return 0;
// }

//     int tanlov;
//     char harf, qator[1000];

//     printf("4. Har bir soz uzunligini yozish\n");
//     printf("5. Mijoz malumotlarini faylga yozish va oqish\n");
//     printf("6. Sonlarning ortacha qiymati\n");
//     printf("7. Eng katta va eng kichik son\n");
//     printf("8. Sonlarni ikkilash\n");
//     printf("9. Ismlarning bosh harfini katta qilish\n");
//     printf("Tanlang: ");
//     scanf("%d", &tanlov);

//     if (tanlov == 4) {
//         FILE *fayl = fopen("matn.txt", "r");
//         FILE *natija = fopen("natija.txt", "w");

//         if (fayl == NULL || natija == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         while (fgets(qator, sizeof(qator), fayl) != NULL) {
//             char *soz = strtok(qator, " \t\n");

//             while (soz != NULL) {
//                 fprintf(natija, "%s %d\n", soz, (int)strlen(soz));
//                 soz = strtok(NULL, " \t\n");
//             }
//         }

//         fclose(fayl);
//         fclose(natija);
//     }

//     else if (tanlov == 5) {
//         int id;
//         char ism[100];
//         float balans;

//         FILE *fayl = fopen("mijoz.txt", "w");

//         if (fayl == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         printf("ID: ");
//         scanf("%d", &id);

//         printf("Ism: ");
//         scanf("%99s", ism);

//         printf("Balans: ");
//         scanf("%f", &balans);

//         fprintf(fayl, "%d %s %.2f\n", id, ism, balans);
//         fclose(fayl);

//         fayl = fopen("mijoz.txt", "r");

//         if (fayl == NULL) {
//             printf("Faylni oqib bolmadi!");
//             return 1;
//         }

//         fscanf(fayl, "%d %99s %f", &id, ism, &balans);

//         printf("ID: %d, Ism: %s, Balans: %.2f\n",
//                id, ism, balans);

//         fclose(fayl);
//     }

//     else if (tanlov == 6) {
//         FILE *fayl = fopen("sonlar.txt", "r");

//         if (fayl == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         double son, yigindi = 0;
//         int sanoq = 0;

//         while (fscanf(fayl, "%lf", &son) == 1) {
//             yigindi += son;
//             sanoq++;
//         }

//         if (sanoq > 0) {
//             printf("Ortacha: %.2f\n", yigindi / sanoq);
//         } else {
//             printf("Faylda son yoq!\n");
//         }

//         fclose(fayl);
//     }

//     else if (tanlov == 7) {
//         FILE *fayl = fopen("sonlar.txt", "r");

//         if (fayl == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         int son, max, min;

//         if (fscanf(fayl, "%d", &son) != 1) {
//             printf("Faylda son yoq!\n");
//             fclose(fayl);
//             return 1;
//         }

//         max = min = son;

//         while (fscanf(fayl, "%d", &son) == 1) {
//             if (son > max) max = son;
//             if (son < min) min = son;
//         }

//         printf("Eng katta: %d, Eng kichik: %d\n", max, min);

//         fclose(fayl);
//     }

//     else if (tanlov == 8) {
//         FILE *fayl = fopen("sonlar.txt", "r");
//         FILE *natija = fopen("natija.txt", "w");

//         if (fayl == NULL || natija == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         int son;

//         while (fscanf(fayl, "%d", &son) == 1) {
//             fprintf(natija, "%d ", son * 2);
//         }

//         fclose(fayl);
//         fclose(natija);
//     }

//     else if (tanlov == 9) {
//         FILE *fayl = fopen("ism.txt", "r");

//         if (fayl == NULL) {
//             printf("Faylni ochib bolmadi!");
//             return 1;
//         }

//         while (fgets(qator, sizeof(qator), fayl) != NULL) {
//             int i = 0;

//             while (qator[i] != '\0' && qator[i] != '\n') {
//                 if (i == 0) {
//                     qator[i] = toupper((unsigned char)qator[i]);
//                 }
//                 i++;
//             }

//             qator[i] = '\0';
//             printf("%s\n", qator);
//         }

//         fclose(fayl);
//     }

//     else {
//         printf("Notogri tanlov!\n");
//         return 1;
//     }

//     if (tanlov == 4 || tanlov == 5 || tanlov == 8) {
//         printf("Natija faylga yozildi!\n");
//     }

//     return 0;


