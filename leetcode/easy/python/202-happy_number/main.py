"""
    202. Happy Number
"""
def calc_sum(n: int) -> int:
    sum = 0
    while(n > 0):
        temp = n % 10
        sum += temp * temp
        n = n // 10
    return sum

def is_happy(n: int) -> bool:
    slow = calc_sum(n)
    fast = calc_sum(calc_sum(n))
    while slow != fast:
        slow = calc_sum(slow)
        fast = calc_sum(calc_sum(fast))
    
    return slow == 1


        

    
def main():
    test1 = 2 
    print(f"is {test1} happy?: {is_happy(test1)}")
    
    
if __name__ == "__main__":
    main() 