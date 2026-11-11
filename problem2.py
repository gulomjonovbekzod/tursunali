def format_date(date_str: str) -> str:
    months = {
        1: "Yanvar", 2: "Fevral", 3: "Mart", 4: "Aprel",
        5: "May", 6: "Iyun", 7: "Iyul", 8: "Avgust",
        9: "Sentabr", 10: "Oktabr", 11: "Noyabr", 12: "Dekabr",
    }
    day, month, year = date_str.split(".")
    return f"{int(day)} {months[int(month)]} {year} yil"


# Test
print(format_date("13.02.2025"))  # 13 Fevral 2025 yil
print(format_date("01.01.2000"))  # 1 Yanvar 2000 yil
print(format_date("15.03.1995"))  # 15 Mart 1995 yil
print(format_date("30.12.2024"))  # 30 Dekabr 2024 yil
print(format_date("09.07.2010"))  # 9 Iyul 2010 yil
