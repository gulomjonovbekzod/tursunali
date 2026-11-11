# ptr= open ("salom.txt")
# data=ptr.read().split("\n")
# dct={}
# for davlat in data:
#     bolak=davlat.split(",")[-1]
#     if bolak not in dct:
#         dct[bolak]=1
#     else:
#         dct[bolak]+=1
#     print(dct)

# ptr.close()


ptr= open ("salom.txt")
data=ptr.read().split("\n")
dct=[]
dct2=[]
for visa in data:
    vk=visa.split(",")[1]
    
    