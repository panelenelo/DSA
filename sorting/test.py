from icecream import ic

def mergesort_me(arr):
    #ic(arr)
    if(len(arr) <= 1):
        return arr
    
    mid = len(arr) // 2

    leftarr = mergesort_me(arr[:mid])
    rightarr = mergesort_me(arr[mid:])

    return merge(leftarr, rightarr)

def merge(leftarr, rightarr):
    arr = leftarr
    i=0

    while(True):
        if(len(rightarr) == 0):
            break

        if(rightarr[0] <= arr[i]):
            arr.insert(i, rightarr[0])
            rightarr.pop(0)
            i+=1
        elif(i == (len(arr)-1)):
            arr.append(rightarr[0])
            rightarr.pop(0)
        else:
            i+=1
    
    return arr


arr = [1, 2, 6, 4, 7, 8, 1, 21, 55, 100, 1]
arr = mergesort_me(arr)
ic(arr)

