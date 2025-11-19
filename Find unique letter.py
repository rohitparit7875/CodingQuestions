list1 = [1, 3, 5, 7, 7]
list2 = [3, 4, 7, 7, 9]

common = []
for x in list1:
    if x in list2 and x not in common:
        common.append(x)

print("Unique Common Elements:", common)
