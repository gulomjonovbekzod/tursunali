# import csv

# brand_count = {}
# country_count = {}

# with open("moshina.txt", "r") as file:
#     data = csv.DictReader(file)

#     for row in data:
#         brand = row["brand"]
#         country = row["country"]

#         if brand not in brand_count:
#             brand_count[brand] = 0

#         brand_count[brand] += 1

# most_brand = max(brand_count, key=brand_count.get)

# print("Eng ko'p mashina brendi:", most_brand)
# print("Mashinalar soni:", brand_count[most_brand])

# with open("moshina.txt", "r") as file:
#     data = csv.DictReader(file)

#     for row in data:
#         if row["brand"] == most_brand:
#             country = row["country"]

#             if country not in country_count:
#                 country_count[country] = 0

#             country_count[country] += 1

# max_country = max(country_count, key=country_count.get)
# max_count = country_count[max_country]

# min_count = min(country_count.values())

# print("Eng ko'p davlat:", max_country, "-", max_count, "ta")

# print("Eng kam davlatlar:")
# for country, count in country_count.items():
#     if count == min_count:
#         print(country, "-", count, "ta")