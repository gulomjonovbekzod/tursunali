import json 

# with open("test.json") as ptr:
#     data = json.load(ptr)
#     for dars in data:
#         if "matematika" in dars["subjects"]:
#             print(dars["name"], dars["second"])
        


# with open("t.json") as ptr:
#     data=json.load(ptr)
#     summa=data["narx"]*data["son"]
#     print(summa)



# with open("shahar.json") as ptr:
#     data=json.load(ptr)
#     print(max(data, key=lambda x:x["aholi"]))



# with open("price.json") as ptr:
#     data=json.load(ptr)
#     for narx in data:
#         if 1000>narx["price"]>=500 and narx["is_available"]:  
#             print(narx)



# with open("price.json") as ptr:
#     print(sorted(list(filter(lambda x: x["is_available"], json.load(ptr))), key=lambda x: x["price"]))


# with open("price.json") as ptr:
#     data =json.load(ptr)
#     for i in data:
#         if i["price"]<1000 and i["is_available"]==False:
#             print(i["material"])