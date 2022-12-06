import re
checkurl =  "^https?:\\/\\/(?:www\\.)?[a-zA-Z0-9]{1,256}\\.[a-z]{2,6}\\b\\S(?:[-a-zA-Z0-9()@:%_\\+.~#?&\\/=]*)$"
x = re.match(checkurl, 'https://tiki.vn/dien-thoai-may-tinh-bang/c1789?src=mega-menu') 
if x :
    print ('url hop le')
else:
    print ("url ko hop le")

