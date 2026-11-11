
// #include <stdio.h>

// int main() {
//     int tanlov, n;

//     printf("1. Sparse Matrix tekshirish\n");
//     printf("2. Diagonallar yig'indisi\n");
//     printf("3. Eng katta va kichik sonlarni almashtirish\n");
//     printf("Tanlang: ");
//     scanf("%d", &tanlov);

//     printf("n = ");
//     scanf("%d", &n);

//     int arr[n][n];

//     printf("Massiv elementlarini kiriting:\n");

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // 1-MASALA: SPARSE MATRIX
//     if (tanlov == 1) {
//         int nol = 0, oddiy = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (arr[i][j] == 0) {
//                     nol++;
//                 } else {
//                     oddiy++;
//                 }
//             }
//         }

//         if (nol > oddiy) {
//             printf("Sparse Matrix\n");
//         } else {
//             printf("Not Sparse Matrix\n");
//         }
//     }

//     // 2-MASALA: DIAGONALLAR YIG'INDISI
//     else if (tanlov == 2) {
//         int diagonal = 0, teskari = 0;

//         for (int i = 0; i < n; i++) {
//             diagonal += arr[i][i];
//             teskari += arr[i][n - 1 - i];
//         }

//         printf("Diagonal: %d\n", diagonal);
//         printf("Teskari: %d\n", teskari);
//     }

//     // 3-MASALA: MAX VA MINNI ALMASHTIRISH
//     else if (tanlov == 3) {
//         int max = arr[0][0], min = arr[0][0];
//         int maxI = 0, maxJ = 0;
//         int minI = 0, minJ = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (arr[i][j] > max) {
//                     max = arr[i][j];
//                     maxI = i;
//                     maxJ = j;
//                 }

//                 if (arr[i][j] < min) {
//                     min = arr[i][j];
//                     minI = i;
//                     minJ = j;
//                 }
//             }
//         }

//         int temp = arr[maxI][maxJ];
//         arr[maxI][maxJ] = arr[minI][minJ];
//         arr[minI][minJ] = temp;

//         printf("Almashtirilgan massiv:\n");

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 printf("%d ", arr[i][j]);
//             }
//             printf("\n");
//         }
//     }

//     else {
//         printf("Noto'g'ri tanlov!\n");
//     }

//     return 0;
// }
