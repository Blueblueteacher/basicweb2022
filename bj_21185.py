N = int(input())
R = N %4
if (R ==1):
	print("Either")
elif (R==2):
	print("Odd")
elif (R ==3):
	print("Either")
else:
	print("Even")

'''	
n = int(input())
if n%2 == 1: 
    print("Either")
else:
    if (n/2)%2 == 0:
        print("Even")
    else:
        print("Odd")
N이 홀수일 경우 => 홀수/짝수 모두 가능
1) 홀수가 홀수개인 경우 => 홀수
2) 홀수가 짝수개인 경우 => 짝수
N이 짝수인 경우 
1) N/2가 홀수인 경우 => 홀수
2) N/2가 짝수인 경우 => 짝수
'''