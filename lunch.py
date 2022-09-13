import requests
from bs4 import BeautifulSoup
import re
import datetime
from gtts import gTTS

now = datetime.datetime.now()


def get_html(url):
    _html = ""
    resp = requests.get(url)
    if resp.status_code == 200:
        _html = resp.text
    return _html


def get_meal(code, ymd, weekday):
    schMmealScCode = code  # int
    schYmd = ymd  # str

    num = weekday + 1
    print(schYmd, num)
    URL = (
            "https://stu.jje.go.kr/sts_sci_md01_001.do?" 
            "schulCode=T100000125&schulCrseScCode=4&schulKndScCode=04"
            "&schMmealScCode=%d&schYmd=%s" % (schMmealScCode, schYmd)
        )

    html = get_html(URL)
    soup = BeautifulSoup(html, 'html.parser')
    element = soup.find_all("tr")
    element = element[2].find_all('td')
    try:
        element = element[num]  # num
        element = str(element)
        # element = element.replace('[', '')
        # element = element.replace(']', '')
        element = element.replace('<br/>', ' ')
        element = element.replace('<td class="textC last">', '')
        element = element.replace('<td class="textC">', '')
        element = element.replace('</td>', '')
        # element = element.replace('(h)', '')
        element = element.replace('.', '')
        element = element.replace('.', '')
        element = re.sub(r"\d", "", element)
    except:
        element = " "

    list_element = element.split(" ")
    list_element = list(filter(None, list_element))
    json_element = {}
    json_num = 0
    for i in list_element:
        json_element[json_num] = i
        json_num += 1

    return json_element

nowDate = now.strftime("%Y.%m.%d")  # 현재 y.m.d 불러오는 변수

meal = get_meal(2, nowDate, now.weekday()) # 딕셔너리 값들이 들어 있다.

out = open("bob.txt", "w") # 메모장파일로 만들기
for i in meal.values():
    print(i, end = "\n", file = out)
out.close()

file = open("bob.txt", "r") # 파일을 읽어오기
data = file.read()
file.close()

tts = gTTS(text=data, lang="ko") # 음성 파일로 변환
tts.save("bob.wav")
