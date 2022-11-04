# 1929
sa, sb = input().split()
A, B = int(sa), int(sb)
P = [True]*(B+1)
for i in range(2, B+1):
	if (P[i] == True):		#i가 소수
		u = i*2		#2i, 3i, 4i, ….
		while (u <=B):
			P[u] = False
			u =u+i

R =[]
A = max([2,A]) # 최댓값 구하기
for i in range(A, B+1): # 범위값에서 
	if (P[i] ==True): # 소수인 부분들을
		R.append(i) # R 에 더하기
R = list(map(str, R)) # 문자열로 리스트에 저장하기 R 값을
print("\n".join(R)) # \n을 기준으로 값 잘라서 출력하기


