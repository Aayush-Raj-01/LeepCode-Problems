class Solution(object):
    def isPalindrome(self, x):
        i = x
        n = 0
        sum = 0
        if x < 0 or (x % 10 == 0 and x != 0):
            return False
        else:
            while True:
                n = i % 10
                sum = n + sum*10
                i = i //10
                if i == 0:
                    break
            
            if sum == x :
                return True
            else:
                return False

        