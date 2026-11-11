# # =========================
# # PROBLEM 1
# # =========================

# def format_date(date_str: str) -> str:
#     oylar = {
#         "01": "Yanvar",
#         "02": "Fevral",
#         "03": "Mart",
#         "04": "Aprel",
#         "05": "May",
#         "06": "Iyun",
#         "07": "Iyul",
#         "08": "Avgust",
#         "09": "Sentabr",
#         "10": "Oktabr",
#         "11": "Noyabr",
#         "12": "Dekabr"
#     }

#     kun, oy, yil = date_str.split(".")
#     return f"{int(kun)} {oylar[oy]} {yil} yil"


# # =========================
# # PROBLEM 2
# # =========================

# def get_top_user(data: list[tuple[str, int]]) -> str:
#     ballar = {}

#     for userid, score in data:
#         if userid not in ballar:
#             ballar[userid] = 0

#         ballar[userid] += score

#     if not ballar:
#         return ""

#     eng_yuqori = max(ballar, key=ballar.get)

#     return eng_yuqori


# # =========================
# # PROBLEM 3
# # =========================

# class Playlist:

#     def __init__(self, owner: str) -> None:
#         self.owner = owner
#         self.tracks = []

#     def add_track(self, title: str, artist: str) -> None:
#         self.tracks.append((title, artist))

#     def remove_last(self):
#         if len(self.tracks) == 0:
#             return None

#         return self.tracks.pop()

#     def total_tracks(self) -> int:
#         return len(self.tracks)

#     def unique_tracks(self):
#         result = []

#         for track in self.tracks:
#             if track not in result:
#                 result.append(track)

#         return result

#     def search_by_title(self, title: str):
#         result = []

#         for track in self.tracks:
#             if track[0] == title:
#                 result.append(track)

#         return result

#     def filter_by_artist(self, artist: str):
#         result = []

#         for track in self.tracks:
#             if track[1] == artist:
#                 result.append(track)

#         return result