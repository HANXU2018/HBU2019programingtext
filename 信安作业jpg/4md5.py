import requests
from bs4 import BeautifulSoup
import optparse
def main():
    usage="[-m  md5 decryption]"
    parser=optparse.OptionParser(usage)
    parser.add_option('-m',dest='md5',help='md5 decryption')
    (options,args)=parser.parse_args()
    if options.md5:
        md5=options.md5
        Md5(md5)
    else:
        parser.print_help()
        exit()
 
def Md5(md5):
    header = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.132 Safari/537.36'}
    data = {
        '__VIEWSTATE': '/wEPDwUKMTM4NTE3OTkzOWRkP4hmXYtPPhcBjbupZdLOLfmeTK4=',
        '__VIEWSTATEGENERATOR': 'CA0B0334',
        '__EVENTVALIDATION': '/wEWAwK75ZuyDwLigPTXCQKU9f3vAheUenitfEuJ6eGUVe2GyFzb7HKC',
        'key': '{}'.format(md5),
        'jiemi': 'MD5解密'
    }
    url = "http://pmd5.com/"
    r = requests.post(url, headers=header, data=data)
    sd = r.content.decode('utf-8')
    esdf = BeautifulSoup(sd, 'html.parser')
    for l in esdf.find_all('em'):
        g = l.get_text()
        print('--------[*]PMD5接口--------')
        print(g)
 
if __name__ == '__main__':
    main()
