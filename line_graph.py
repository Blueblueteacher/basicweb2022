''' # 꺾은선그래프
#%%
from numpy.random import randn 
import matplotlib.pyplot as plt
plt.style.use('ggplot')

plot_data1 = [1,5,9,7,8,4,6,4,8,6]
plot_data2 = [4,8,9,6,4,2,5,7,3,6]
plot_data3 = [1,4,3,6,8,9,6,1,5,2]

fig = plt.figure()
ax1 = fig.add_subplot(1,1,1)
ax1.plot(plot_data1, marker=r'o', color=u'blue', linestyle='-', label='Blue Solid')
ax1.plot(plot_data2, marker=r'+', color=u'red', linestyle='--', label='Red Dashed')
ax1.plot(plot_data3, marker=r'*', color=u'green', linestyle='-.', label='Green Dash Dot')
ax1.xaxis.set_ticks_position('bottom')
ax1.yaxis.set_ticks_position('left')
ax1.set_title('Line plots: Markers, Colors, Linestyles')

plt.xlabel('Draw')
plt.ylabel('Random number')
plt.legend(loc='best')
'''
''' # 막대그래프
# %%
from numpy.random import randn 
import matplotlib.pyplot as plt
# Data part
customers =['yuki','moon','seo','mini','hyunju'] # x축
customers_index = range(len(customers))  # 1,2,3,4,5
sale_amounts =[56,23,18,34,23] # y축의 값

# 기본 그래프 구성
fig = plt.figure()  
ax1 = fig.add_subplot(1,1,1)
ax1.bar (customers_index, sale_amounts, align='center', color='darkblue') 
ax1.xaxis.set_ticks_position('bottom') # 밑에 customer name
ax1.yaxis.set_ticks_position('left') # 왼쪽에 sale amount

# 그래프 꾸미기
plt.xticks(customers_index, customers, rotation=0, fontsize='small')
plt.xlabel('Customer name')
plt.ylabel('Sale amount')
plt.title('Sale Amount per Customer')
# %%
'''
''' # box plot 그래프 => 서로 다른 데이터군을 쉽게 비교할 수 있는 데이터 시각화 방법
# %%
import numpy as np
import matplotlib.pyplot as plt
plt.style.use('ggplot')
normal = np.random.normal(loc=0.0, scale=1.0, size=500)
lognormal = np.random.lognormal(mean=0.0, sigma=1.0, size=500)
index_value = np.random.randint(0, 500)
normal_sample= normal[index_value]
lognormal_sample= lognormal[index_value]
box_plot_data = [normal, normal_sample, lognormal, lognormal_sample]

fig = plt.figure()
ax1 = fig.add_subplot(1,1,1)
box_labels = ['normal', 'normal_sample', 'lognormal', 'lognormal_sample'] # 그래프 라벨
ax1.boxplot(box_plot_data, notch=False, sym='.', vert=True, whis=1.5, showmeans=True, labels=box_labels)
ax1.xaxis.set_ticks_position('bottom') 
ax1.yaxis.set_ticks_position('left')
ax1.set_title('Box plots: Resampling of two distributions') # 그래프 제목
plt.xlabel('Distrbution')
plt.ylabel('Value')
# %%
'''
# %% # 원 그래프
import matplotlib.pyplot as plt
labels =['Frog', 'Hogs', 'Dogs', 'Logs']
sizes = [15,30, 45, 10] # labels에 해당하는 값의 양
explode = (0, 0.3, 0, 0) # 튀어나온정도

fig, ax = plt.subplots()
ax.pie(sizes, explode=explode, labels= labels, autopct='%1.1f%%',
	shadow=True, startangle=90)
ax.axis('equal')
# %% # 히스토그램 그래프
import numpy as np
import matplotlib.pyplot as plt
plt.style.use('ggplot')

mu1, mu2, sigma = 100, 130, 153
x1 = mu1+sigma*np.random.randn(10000) # 랜덤값
x2 = mu2+sigma*np.random.randn(10000) # 랜덤값

fig =plt.figure()
ax1 = fig.add_subplot(1,1,1)
n, bins, patches = ax1.hist(x1, bins=50, density=False, color='darkgreen')
n, bins, patches = ax1.hist(x2, bins=50, density=False, color='orange', alpha=0.5)

ax1.xaxis.set_ticks_position('bottom')
ax1.yaxis.set_ticks_position('left')

plt.xlabel('Bins') # 아래쪽 이름
plt.ylabel('Number of values in Bin') # 왼쪽열 이름
fig.suptitle('Histograms', fontsize=14, fontweight='bold') # 그래프 제목
ax1.set_title('Two Frequency Distributions') # 그래프 소제목
# %%
