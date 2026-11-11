# ```python
# import json


# # 1-MASALA: ONLAYN DO'KON

# def masala1():
#     with open("orders.json", "r", encoding="utf-8") as file:
#         orders = json.load(file)

#     eng_katta = 0
#     xaridor = ""

#     for order in orders:
#         jami = 0

#         for item in order["items"]:
#             jami += item["price"] * item["quantity"]

#         print(f"{order['customer']}: {jami} so'm")

#         if jami > eng_katta:
#             eng_katta = jami
#             xaridor = order["customer"]

#     print("Eng katta buyurtma:", xaridor)
#     print("Summasi:", eng_katta)


# # 2-MASALA: RESTORAN MENYUSI

# def masala2():
#     with open("menu.json", "r", encoding="utf-8") as file:
#         menu = json.load(file)

#     print("Barcha menyu:")

#     for food in menu:
#         print(food["name"], food["category"], food["price"])

#     print("\nPizza kategoriyasi:")

#     for food in menu:
#         if food["category"] == "Pizza":
#             print(food["name"], food["price"])

#     eng_arzon = min(menu, key=lambda x: x["price"])
#     eng_qimmat = max(menu, key=lambda x: x["price"])

#     print("Eng arzon:", eng_arzon["name"])
#     print("Eng qimmat:", eng_qimmat["name"])


# # 3-MASALA: AVIACHIPTALAR

# def masala3():
#     with open("tickets.json", "r", encoding="utf-8") as file:
#         tickets = json.load(file)

#     print("Tashkentdan uchadigan reyslar:")

#     for ticket in tickets:
#         if ticket["from"] == "Tashkent":
#             print(ticket["from"], "->", ticket["to"])

#     eng_arzon = min(tickets, key=lambda x: x["price"])
#     eng_qimmat = max(tickets, key=lambda x: x["price"])

#     print("Eng arzon reys:", eng_arzon["to"])
#     print("Narxi:", eng_arzon["price"])

#     print("Eng qimmat reys:", eng_qimmat["to"])
#     print("Narxi:", eng_qimmat["price"])

#     jami_orin = 0

#     for ticket in tickets:
#         jami_orin += ticket["seats"]

#     print("Jami mavjud o'rinlar:", jami_orin)


# # 4-MASALA: OB-HAVO

# def masala4():
#     with open("weather.json", "r", encoding="utf-8") as file:
#         weather = json.load(file)

#     print("Barcha shaharlar:")

#     for city in weather:
#         print(city["city"], city["temperature"], "C")

#     eng_issiq = max(weather, key=lambda x: x["temperature"])
#     eng_sovuq = min(weather, key=lambda x: x["temperature"])

#     print("Eng issiq shahar:", eng_issiq["city"])
#     print("Eng sovuq shahar:", eng_sovuq["city"])

#     jami = 0

#     for city in weather:
#         jami += city["temperature"]

#     ortacha = jami / len(weather)

#     print("O'rtacha harorat:", ortacha)


# # 5-MASALA: TALABALAR VA KURSLAR

# def masala5():
#     with open("students.json", "r", encoding="utf-8") as file:
#         students = json.load(file)

#     print("Barcha talabalar:")

#     for student in students:
#         print(student["name"], student["courses"])

#     print("\nPython kursidagi talabalar:")

#     for student in students:
#         if "Python" in student["courses"]:
#             print(student["name"])

#     kurslar = {}

#     for student in students:
#         for course in student["courses"]:

#             if course in kurslar:
#                 kurslar[course] += 1
#             else:
#                 kurslar[course] = 1

#     print("\nKurslar bo'yicha talabalar soni:")

#     for course, count in kurslar.items():
#         print(f"{course}: {count} ta")


# # ASOSIY MENYU

# while True:
#     print("\n========== JSON MASALALAR ==========")
#     print("1. Onlayn do'kon")
#     print("2. Restoran menyusi")
#     print("3. Aviachiptalar")
#     print("4. Ob-havo")
#     print("5. Talabalar va kurslar")
#     print("0. Dasturdan chiqish")

#     tanlov = input("Masala raqamini tanlang: ")

#     if tanlov == "1":
#         masala1()

#     elif tanlov == "2":
#         masala2()

#     elif tanlov == "3":
#         masala3()

#     elif tanlov == "4":
#         masala4()

#     elif tanlov == "5":
#         masala5()

#     elif tanlov == "0":
#         print("Dastur tugadi!")
#         break

#     else:
#         print("Noto'g'ri raqam kiritdingiz!")
# ```