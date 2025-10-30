def rek(arr):
    if len(arr) == 0:
        return 0
    
    first_str = len(arr[0])
    n = rek(arr[1:])

    return first_str  + n

def cout_mass(arr):
    count = 0
    for a in arr:
        count += 1

    return count


input_array = ["ab", "c", "def", "ghij"]
print(rek(input_array))