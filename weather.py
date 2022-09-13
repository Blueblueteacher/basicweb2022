import urllib
from bs4 import BeautifulSoup
import urllib.request as req
import ssl
#네이버 날씨 크롤링
# Phase1 Seoul Weather Crawling
context = ssl._create_unverified_context()
webpage = req.urlopen('https://search.naver.com/search.naver?sm=tab_hty.top&where=nexearch&query=%EB%85%B8%ED%98%95%EB%82%A0%EC%94%A8&oquery=%EC%84%9C%EC%9A%B8%EB%82%A0%EC%94%A8&tqi=hx94LwprvOsssi36n%2F4ssssstyd-158410',context=context)
# 노형동 날씨정보 가져오기
soup = BeautifulSoup(webpage, 'html.parser')
temps = soup.find('div','temperature_text')
summary = soup.find('p','summary')
print(temps)
print("제주시 노형동 "+temps.text.strip())

print(summary.text.strip())