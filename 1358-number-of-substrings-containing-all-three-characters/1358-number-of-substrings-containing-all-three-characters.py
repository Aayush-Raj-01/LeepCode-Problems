class Solution(object):
    def numberOfSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        r=0
        l=0
        ans=0
        a=0
        b=0
        c=0
        while True:
            if a!=0 and b!=0 and c!=0:
                ans += len(s) - r +1
                if s[l]=='a':
                    a-=1
                    l+=1
                elif s[l]=='b':
                    b-=1
                    l+=1
                elif s[l]=='c':
                    c-=1
                    l+=1
            elif r != len(s) and s[r] == 'a':
                a+=1
                r+=1
            elif r != len(s) and s[r] == 'b':
                b+=1
                r+=1
            elif r != len(s) and s[r] == 'c':
                c+=1
                r+=1
            else:
                break

        return ans
        