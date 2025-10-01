def rev(s,i):
    ans = ""
    if(i == 0):
        return s[0]
    ans += s[i] + rev(s,i-1)
    return ans

s = "Gaurav"
print(rev(s,len(s)-1))