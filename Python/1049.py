##############
## EDIVÂNIA ##
##   UFPI   ##
##   2022   ##
##############

p1 = str(input())
p2 = str(input())
p3 = str(input())

lista = []
lista.append(p1)
lista.append(p2)
lista.append(p3)

aguia = ['vertebrado', 'ave', 'carnivoro']
pomba = ['vertebrado', 'ave', 'onivoro']
homem = ['vertebrado', 'mamifero', 'onivoro']
vaca = ['vertebrado', 'mamifero', 'herbivoro']
pulga = ['invertebrado', 'inseto', 'hematofago']
lagarta = ['invertebrado', 'inseto', 'herbivoro']
sanguessuga = ['invertebrado', 'anelideo', 'hematofago']
minhoca = ['invertebrado', 'anelideo', 'onivoro']
            
if lista == aguia:
    print('aguia')

if lista == pomba:
    print('pomba')

if lista == homem:
    print('homem')

if lista == vaca:
    print('vaca')

if lista == pulga:
    print('pulga')

if lista == lagarta:
    print('lagarta')

if lista == sanguessuga:
    print('sanguessuga')

if lista == minhoca:
    print('minhoca')