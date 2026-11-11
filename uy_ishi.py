
# import random

# # 1-masala
# n = int(input("1-masala: n = "))
# yigindi = 0

# for i in range(1, n + 1):
#     yigindi += i ** i

# print("Yig'indi:", yigindi)


# # 2-masala
# yosh = int(input("2-masala: Yoshingizni kiriting: "))

# for i in range(1, 201):
#     if i == yosh:
#         print(i, "- bu sizning yoshingiz")
#     else:
#         print(i)


# # 3-masala
# print("3-masala: Raqamlari takrorlangan uch xonali sonlar:")

# for i in range(100, 1000):
#     a = i // 100
#     b = (i // 10) % 10
#     c = i % 10

#     if a == b or a == c or b == c:
#         print(i)


# # 4-masala
# n = int(input("4-masala: n = "))

# sirli_son = random.randint(1, n)

# for i in range(3):
#     taxmin = int(input("Sonni toping: "))

#     if taxmin == sirli_son:
#         print("winner")
#         break
# else:
#     print("looser")
#     print("To'g'ri javob:", sirli_son)

# film = input("Film nomini kiriting: ")
# yosh = int(input("Yoshingizni kiriting: "))

# if yosh < 12:
#     print("Animatsiya yoki Oila filmlarini tavsiya qilamiz!")
# elif yosh <= 18:
#     print("Action yoki Sarguzasht filmlarini tavsiya qilamiz!")
# elif yosh <= 60:
#     print("Drama yoki Komediya filmlarini tavsiya qilamiz!")
# else:
#     print("Dokumental yoki Klassik filmlarni tavsiya qilamiz!")

# narx1 = float(input("1-mahsulot narxi: "))
# narx2 = float(input("2-mahsulot narxi: "))
# narx3 = float(input("3-mahsulot narxi: "))

# jami = narx1 + narx2 + narx3
# chegirma = 0

# if jami > 500:
#     chegirma = 20
# elif jami > 200:
#     chegirma = 15
# elif jami > 100:
#     chegirma = 10

# yakuniy = jami - jami * chegirma / 100

# print("Jami narx: $", jami)
# print("Chegirma:", chegirma, "%")
# print("Yakuniy narx: $", round(yakuniy, 2))




# while True:
#     harorat = input("Haroratni kiriting (exit - chiqish): ")

#     if harorat.lower() == "exit":
#         break

#     c = float(harorat)
#     f = c * 9 / 5 + 32

#     if f < 32:
#         holat = "Muzlash"
#     elif f > 85:
#         holat = "Issiq"
#     else:
#         holat = "Yaxshi kun"

#     print(c, "C =", f, "F.", holat)



# yosh = int(input("Yoshingiz: "))
# yil = int(input("Obunada bo'lgan yilingiz: "))

# narx = 15

# if yosh > 50:
#     narx = narx * 0.80
#     print("Yosh bo'yicha chegirma: 20%")

# if yil > 5:
#     narx = narx * 0.85
#     print("Obuna davomiyligi chegirmasi: 15%")
# elif yil > 3:
#     narx = narx * 0.90
#     print("Obuna davomiyligi chegirmasi: 10%")

# print("Yakuniy oylik narx: $", round(narx, 2))



# while True:
#     parol = input("Parol kiriting: ")

#     if len(parol) < 8:
#         print("Parol juda qisqa.")

#     if not any(harf.isupper() for harf in parol):
#         print("Paroldan katta harf yetishmayapti.")

#     if not any(harf.isdigit() for harf in parol):
#         print("Paroldan raqam yetishmayapti.")

#     if not any(not harf.isalnum() for harf in parol):
#         print("Paroldan maxsus belgi yetishmayapti.")

#     if (len(parol) >= 8
#         and any(harf.isupper() for harf in parol)
#         and any(harf.isdigit() for harf in parol)
#         and any(not harf.isalnum() for harf in parol)):
#         print("Parol kuchli!")
#         break


# for i in range(3):
#     kompaniya = input("Kompaniya nomi: ")
#     narx = float(input("Aksiya narxi: "))

#     if narx > 100:
#         print(kompaniya, "aksiyasi qimmat.")
#     elif narx < 50:
#         print(kompaniya, "aksiyasi arzon.")
#     else:
#         print(kompaniya, "aksiyasi o'rtacha.")
