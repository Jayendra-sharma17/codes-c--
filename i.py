def maxDaysToWork(countTown):
    # Sort the countTown array in descending order
    countTown.sort(reverse=True)

    max_days = 0
    prev_town = -1

    for i in range(len(countTown)):
        if countTown[i] > 0:
            max_days += 1
            countTown[i] -= 1
            if prev_town != -1:
                countTown[prev_town] += 1
            prev_town = i

    return max_days

def main():
    # Input for countTown
    num = int(input())
    countTown = list(map(int, input().split()))

    result = maxDaysToWork(countTown)
    print(result)

if __name__ == "__main__":
    main()
