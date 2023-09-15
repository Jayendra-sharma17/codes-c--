def anagram(str1,str2):
    str1=str1.replace(" ","").lower()
    str2=str2.replace(" ","").lower()
    if len(str1)!=len(str2):
        return False
    
    char_freq1={}

    for char in str1:
        if char in char_freq1:
            char_freq1[char]+=1
        else:
            char_freq1[char]=1


    for char in str2:
        if char in char_freq1:
            char_freq1[char]-=1
        else:
            char_freq1[char]=1

    return char_freq1==char_freq1

string1="TRIANGLE"
string2="INTEGRAL"

if anagram(string1,string2):
    print(f"'{string1}' and '{string2}' is anagram")

else:
    print(f"'{string1}' and '{string2}' is not anagram")