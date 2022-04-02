##############
## EDIVÂNIA ##
##   UFPI   ##
##   2022   ##
##############

N = int(input())
Pomekons = []

while(N != 0):
    N -= 1
    p = str(input())

    if p not in Pomekons:
        Pomekons.append(p)

print(f'Falta(m) {151 - len(Pomekons)} pomekon(s).')