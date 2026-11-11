
// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     int id;
//     char customer[30];
//     int amount;
//     char status[20];
// } ORDER;

// typedef struct {
//     char name[30], car[30];
//     float rating;
//     int completed_rides;
// } DRIVER;

// typedef struct {
//     char name[30], category[30];
//     int price, calories;
// } MENU_ITEM;

// typedef struct {
//     char title[50], author[50];
//     int year, borrowed;
// } BOOK;

// typedef struct {
//     int number;
//     char type[20];
//     int price, is_available;
// } ROOM;

// typedef struct {
//     char name[30], tariff[20];
//     int balance, active;
// } CUSTOMER;

// typedef struct {
//     char name[30];
//     int progress, hours_spent;
// } COURSE_STUDENT;

// typedef struct {
//     char code[20], destination[30];
//     int seats, available;
// } FLIGHT;

// typedef struct {
//     char name[30], membership_type[20];
//     int months_left, paid;
// } MEMBER;

// typedef struct {
//     char name[30], category[30];
//     int price, discount;
// } PRODUCT;

// int main() {
//     int tanlov, i, j;

//     printf("1. Buyurtmalar\n");
//     printf("2. Haydovchilar\n");
//     printf("3. Restoran menyusi\n");
//     printf("4. Kutubxona kitoblari\n");
//     printf("5. Mehmonxona xonalari\n");
//     printf("6. Internet abonentlari\n");
//     printf("7. Kurs talabalari\n");
//     printf("8. Aviakompaniya reyslari\n");
//     printf("9. Sport zal azolari\n");
//     printf("10. Chegirmali mahsulotlar\n");
//     printf("Tanlovingiz: ");
//     scanf("%d", &tanlov);

//     // 1-MASALA
//     if (tanlov == 1) {
//         ORDER a[10] = {
//             {1,"Ali",250000,"Delivered"},
//             {2,"Vali",180000,"Pending"},
//             {3,"Olim",500000,"Delivered"},
//             {4,"Dilnoza",350000,"Canceled"},
//             {5,"Sanjar",120000,"Delivered"},
//             {6,"Jasur",400000,"Delivered"},
//             {7,"Nodira",600000,"Pending"},
//             {8,"Umid",200000,"Delivered"},
//             {9,"Aziza",450000,"Delivered"},
//             {10,"Jamshid",300000,"Delivered"}
//         };

//         ORDER b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (strcmp(a[i].status, "Delivered") == 0)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].amount < b[j+1].amount) {
//                     ORDER t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%d %s %d %s\n",
//                 b[i].id, b[i].customer,
//                 b[i].amount, b[i].status);
//     }

//     // 2-MASALA
//     else if (tanlov == 2) {
//         DRIVER a[10] = {
//             {"Akmal","Spark",4.7,120},
//             {"Bekzod","Nexia 3",4.2,90},
//             {"Javohir","Cobalt",4.8,250},
//             {"Dilshod","Lacetti",4.5,180},
//             {"Farrux","Malibu",4.9,300},
//             {"Zafar","Matiz",4.1,50},
//             {"Umid","Captiva",4.6,220},
//             {"Sardor","Spark",4.3,80},
//             {"Azamat","Nexia 2",4.7,150},
//             {"Nodir","Malibu 2",5.0,400}
//         };

//         DRIVER b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].rating >= 4.5 &&
//                 a[i].completed_rides > 100)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].rating < b[j+1].rating) {
//                     DRIVER t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, %s, %.1f, %d\n",
//                 b[i].name, b[i].car,
//                 b[i].rating, b[i].completed_rides);
//     }

//     // 3-MASALA
//     else if (tanlov == 3) {
//         MENU_ITEM a[10] = {
//             {"Olivye","Salat",25000,320},
//             {"Norin","Asosiy",45000,700},
//             {"Mastava","Shorva",30000,400},
//             {"Lagmon","Asosiy",35000,600},
//             {"Somsa","Fast-food",10000,280},
//             {"Shashlik","Asosiy",40000,550},
//             {"Choy","Ichimlik",5000,0},
//             {"Pitsa","Fast-food",55000,480},
//             {"Napoleon","Shirinlik",20000,450},
//             {"Tabaka","Asosiy",42000,490}
//         };

//         MENU_ITEM b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].calories <= 500)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].price > b[j+1].price) {
//                     MENU_ITEM t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, %s, %d, %d kaloriya\n",
//                 b[i].name, b[i].category,
//                 b[i].price, b[i].calories);
//     }

//     // 4-MASALA
//     else if (tanlov == 4) {
//         BOOK a[10] = {
//             {"Alkimyogar","Paulo Coelho",1988,0},
//             {"Ikki eshik orasi","Otkir Hoshimov",1989,1},
//             {"1984","George Orwell",1949,0},
//             {"Urush va tinchlik","Lev Tolstoy",1869,1},
//             {"Harry Potter","J.K. Rowling",1997,0},
//             {"Qorakoz Majnun","Abdulla Qodiriy",1926,0},
//             {"Shum bola","Gafur Gulom",1936,1},
//             {"Otamdan qolgan dalalar","Otkir Hoshimov",1993,0},
//             {"Don Kixot","Migel de Servantes",1605,0},
//             {"Mehrobdan chayon","Abdulla Qodiriy",1929,1}
//         };

//         BOOK b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].borrowed == 0)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].year < b[j+1].year) {
//                     BOOK t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, %s, %d\n",
//                 b[i].title, b[i].author, b[i].year);
//     }

//     // 5-MASALA
//     else if (tanlov == 5) {
//         ROOM a[10] = {
//             {101,"Single",200000,1},
//             {102,"Double",350000,0},
//             {103,"Suite",500000,1},
//             {104,"Single",220000,1},
//             {105,"Double",370000,1},
//             {106,"Suite",600000,0},
//             {107,"Single",210000,1},
//             {108,"Double",400000,1},
//             {109,"Suite",650000,1},
//             {110,"Single",230000,0}
//         };

//         ROOM b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].is_available)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].price > b[j+1].price) {
//                     ROOM t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%d, %s, %d som\n",
//                 b[i].number, b[i].type, b[i].price);
//     }

//     // 6-MASALA
//     else if (tanlov == 6) {
//         CUSTOMER a[10] = {
//             {"Akmal","Premium",-50000,1},
//             {"Dilshod","Standard",25000,1},
//             {"Umida","Econom",-10000,0},
//             {"Sardor","Premium",-70000,1},
//             {"Madina","Standard",30000,1},
//             {"Rustam","Econom",-20000,1},
//             {"Zarina","Premium",-150000,0},
//             {"Bekzod","Econom",5000,1},
//             {"Javohir","Standard",-40000,1},
//             {"Aziza","Premium",-80000,1}
//         };

//         CUSTOMER b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].balance < 0)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].balance < b[j+1].balance) {
//                     CUSTOMER t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, %s, %d, active=%d\n",
//                 b[i].name, b[i].tariff,
//                 b[i].balance, b[i].active);
//     }

//     // 7-MASALA
//     else if (tanlov == 7) {
//         COURSE_STUDENT a[10] = {
//             {"Ali",85,120},
//             {"Vali",65,80},
//             {"Dilnoza",90,150},
//             {"Sanjar",70,60},
//             {"Madina",95,200},
//             {"Rustam",55,40},
//             {"Aziza",75,180},
//             {"Jasur",82,130},
//             {"Umid",60,90},
//             {"Nodira",88,170}
//         };

//         COURSE_STUDENT b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].progress >= 70)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].hours_spent < b[j+1].hours_spent) {
//                     COURSE_STUDENT t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, progress=%d%%, soat=%d\n",
//                 b[i].name, b[i].progress,
//                 b[i].hours_spent);
//     }

//     // 8-MASALA
//     else if (tanlov == 8) {
//         FLIGHT a[10] = {
//             {"HY-101","Moskva",180,20},
//             {"HY-202","Istanbul",200,0},
//             {"HY-303","London",220,15},
//             {"HY-404","Berlin",150,10},
//             {"HY-505","Parij",170,25},
//             {"HY-606","Dubay",250,0},
//             {"HY-707","Nyu-York",300,50},
//             {"HY-808","Seul",210,5},
//             {"HY-909","Tokio",240,30},
//             {"HY-010","Pekin",260,0}
//         };

//         FLIGHT b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].available > 0)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].seats < b[j+1].seats) {
//                     FLIGHT t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, %s, jami=%d, bosh=%d\n",
//                 b[i].code, b[i].destination,
//                 b[i].seats, b[i].available);
//     }

//     // 9-MASALA
//     else if (tanlov == 9) {
//         MEMBER a[10] = {
//             {"Akmal","Monthly",2,1},
//             {"Dilnoza","Yearly",12,1},
//             {"Sanjar","Premium",6,0},
//             {"Umida","Monthly",0,1},
//             {"Sardor","Yearly",8,1},
//             {"Madina","Premium",10,1},
//             {"Jasur","Monthly",1,0},
//             {"Aziza","Yearly",5,1},
//             {"Nodir","Premium",7,1},
//             {"Rustam","Monthly",3,1}
//         };

//         MEMBER b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].paid && a[i].months_left > 0)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].months_left < b[j+1].months_left) {
//                     MEMBER t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, %s, %d oy\n",
//                 b[i].name, b[i].membership_type,
//                 b[i].months_left);
//     }

//     // 10-MASALA
//     else if (tanlov == 10) {
//         PRODUCT a[10] = {
//             {"Smartfon","Elektronika",3500000,25},
//             {"Noutbuk","Elektronika",7000000,15},
//             {"Kiyim","Moda",250000,30},
//             {"Soat","Aksessuar",500000,20},
//             {"Krossovka","Sport",400000,40},
//             {"Televizor","Elektronika",5500000,22},
//             {"Sumka","Moda",300000,35},
//             {"Planshet","Elektronika",2800000,18},
//             {"Naushnik","Elektronika",150000,50},
//             {"Shampun","Kosmetika",50000,20}
//         };

//         PRODUCT b[10];
//         int n = 0;

//         for (i = 0; i < 10; i++)
//             if (a[i].discount >= 20)
//                 b[n++] = a[i];

//         for (i = 0; i < n - 1; i++)
//             for (j = 0; j < n - i - 1; j++)
//                 if (b[j].discount < b[j+1].discount) {
//                     PRODUCT t = b[j];
//                     b[j] = b[j+1];
//                     b[j+1] = t;
//                 }

//         for (i = 0; i < n; i++)
//             printf("%s, %s, %d som, chegirma=%d%%\n",
//                 b[i].name, b[i].category,
//                 b[i].price, b[i].discount);
//     }

//     else {
//         printf("Noto'g'ri tanlov!\n");
//     }

//     return 0;
// }
