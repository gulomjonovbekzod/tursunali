# # 1-MASALA
# def masala1():
#     lst = list(map(int, input("Sonlar: ").split()))
#     n = int(input("n = "))

#     for i in range(len(lst)):
#         for j in range(i + 1, len(lst)):
#             if lst[i] + lst[j] == n:
#                 print(i, j)


# # 2-MASALA
# def masala2():
#     lst = list(map(int, input("Sonlar: ").split()))
#     yangi = []

#     for i in lst:
#         yangi.append(i * 2)

#     print(yangi)


# # 3-MASALA
# def masala3():
#     lst = []
#     n = int(input("Tuple lar soni: "))

#     for i in range(n):
#         t = tuple(map(int, input("Tuple elementlari: ").split()))
#         yangi = t[:-1] + (100,)
#         lst.append(yangi)

#     print(lst)


# # 4-MASALA
# def masala4():
#     lst = []
#     n = int(input("Tuple lar soni: "))

#     for i in range(n):
#         qiymat = input("Tuple elementlari (bo'sh bo'lsa -): ")

#         if qiymat == "-":
#             lst.append(())
#         else:
#             lst.append(tuple(qiymat.split(",")))

#     yangi = []

#     for i in lst:
#         if i != ():
#             yangi.append(i)

#     print(yangi)


# # 5-MASALA
# def masala5():
#     lst = []
#     n = int(input("Elementlar soni: "))

#     for i in range(n):
#         nom = input("Nomi: ")
#         narx = input("Narxi: ")
#         lst.append((nom, narx))

#     lst.sort(key=lambda x: float(x[1]), reverse=True)
#     print(lst)


# # 6-MASALA
# def masala6():
#     s = input("String kiriting: ")
#     print(tuple(s))


# # 7-MASALA
# def masala7():
#     lst = list(map(int, input("List: ").split()))
#     prefix = input("Prefix: ")

#     yangi = []

#     for i in lst:
#         yangi.append(prefix + str(i))

#     print(yangi)


# # 8-MASALA
# def masala8():
#     gap = input("Gap kiriting: ")
#     sozlar = gap.split()

#     sozlar.sort(key=len)

#     print(sozlar)


# # 9-MASALA
# def masala9():
#     lst = input("Elementlarni vergul bilan kiriting: ").split(",")
#     yangi = []

#     for i in lst:
#         i = i.strip()

#         if i.startswith("'") and i.endswith("'"):
#             yangi.append(i[1:-1])
#         elif i.startswith('"') and i.endswith('"'):
#             yangi.append(i[1:-1])

#     yangi.sort()
#     print(yangi)


# # 10-MASALA
# def masala10():
#     t = tuple(map(int, input("Sonlar: ").split()))
#     yangi = []

#     for i in t:
#         if i > 0:
#             yangi.append(i)

#     print(tuple(yangi))


# # 11-MASALA
# def masala11():
#     lst = input("Elementlarni vergul bilan kiriting: ").split(",")

#     strings = []
#     numbers = []

#     for i in lst:
#         i = i.strip()

#         if i.startswith("'") and i.endswith("'"):
#             strings.append(i[1:-1])
#         elif i.startswith('"') and i.endswith('"'):
#             strings.append(i[1:-1])
#         else:
#             numbers.append(float(i) if "." in i else int(i))

#     strings.sort()
#     numbers.sort(reverse=True)

#     print("strings =", strings)
#     print("numbers =", numbers)


# # 12-MASALA
# def masala12():
#     lst = []
#     n = int(input("Tuple lar soni: "))

#     for i in range(n):
#         t = tuple(map(int, input("Ikki son kiriting: ").split()))
#         lst.append(t)

#     lst.sort(key=lambda x: x[0])
#     print(lst)


# # 13-MASALA
# def masala13():
#     lst = list(map(int, input("Sonlar: ").split()))
#     yangi = []

#     for i in lst:
#         yangi.append(i ** 2)

#     print(yangi)


# # 14-MASALA
# def masala14():
#     lst = input("So'zlarni vergul bilan kiriting: ").split(",")
#     yangi = []

#     for i in lst:
#         yangi.append(i.strip().capitalize())

#     print(yangi)


# # 15-MASALA
# def masala15():
#     t = tuple(map(int, input("Sonlar: ").split()))
#     print(sum(t))



