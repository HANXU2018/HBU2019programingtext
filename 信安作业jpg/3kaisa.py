s=input('凯撒加密字符串')
n=eval(input('偏移量（这道题是13）'))
for i in s:
    if(ord(i)< 97 or ord(i)> 122):
        print(i,end='')
    else:
        d=(ord(i)-97+26-n)%26
        print(chr(d+97),end='')
    
