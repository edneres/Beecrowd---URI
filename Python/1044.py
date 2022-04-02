##############
## EDIVÂNIA ##
##   UFPI   ##
##   2022   ##
##############

A_B = input().split()
A, B = A_B
A = int(A)
B = int(B)

if (A%B == 0) or (B%A == 0):
    print('Sao Multiplos')

else:
    print('Nao sao Multiplos')