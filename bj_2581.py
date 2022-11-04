# 2581
A, B= int(input()), int(input()) # 값 입력받기
P = [True]*(B+1) # P 에다가 true로 개수만큼 만들기
for i in range(2, B+1):
	if (P[i] == True): # 만일 그 자리가 true 이면, 
		u = i*2 # 2를 곱해
		while (u <=B): # 곱한 값이 B보다 작거나 같을 때까지 
			P[u] = False 
			u =u+i

mm = B
ss = 0
A = max([2,A]) # 2와 A중 큰 값
for i in range(A, B+1):
	if (P[i]==True):
		mm = min([mm, i]) # mm과 i 중 최솟값
		ss = ss + i # 값(합) 더하기
if (ss == 0):
	print(-1)
else:
	print(ss)
	print(mm)


