# a = [12, 10, 30]
# total = 0
# for item in a:
#     print(item)
#     total += item
#     print(total)


arr = list(range(1, 10))
print(arr)
total = 0
for i in range(1, 10):
    print(i)
    if i % 3 == 0:
        total +=i
        print(total)