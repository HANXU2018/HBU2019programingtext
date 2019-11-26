import requests
import re
s=input('破解的md5：')
url = 'https://md5.gromweb.com/?md5='+s
try:
    r = requests.get(url,timeout=20)
    r.raise_for_status()
    r.encoding = r.apparent_encoding
except:
    print('网络异常或页面未找到，请重试')
print(re.findall(r'<em class="long-content string">(.+?)</em></p>',r.text))
