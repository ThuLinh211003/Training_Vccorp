dic = dict() # tao thu vien     
setdic = set() #sap xep thu vien 


# in
def output(arr):
    for i in range(len(arr)):
        print(arr[i])

# ket noi
def connect( arr, word):
    for i in range(len(arr)):
        arr[i] += " " + word;
     
    return arr;
 
# tach cau va them dau " "
def breakspace(s):
    if (s in dic):
        return dic[s];
     
    list = []
    if (s in setdic):
        list.append(s);
      
    for i in range(1, len(s)):
        word = s[i:];
        if (word in setdic):
            rem = s[:i]
            prev = connect(breakspace(rem), word);
            for i in prev:
                list.append(i)
    space=[]
    for i in list:
        space.append(i)
    dic[s] = space;
    return list;


# ham tao cac truong hop khac nhau
def wordBreak(s,wordDict):
    dic.clear();
    setdic.clear();
    for i in wordDict:
        setdic.add(i)
    return breakspace(s);
 
# Driver Code
if __name__=='__main__':
    wordDict = ["cat", "cats", "and", "sand", "dog" ]
    output(wordBreak("catsanddog", wordDict));



