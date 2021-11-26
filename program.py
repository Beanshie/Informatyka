import os

lista=[]

def dodanie_wartosci():
    global lista
    
    ilosc=int(input("Podaj ilość liczb do obliczenia średniej: "))
    for i in range(ilosc):
        lista.append(input("Podaj "+str(i+1)+" liczbę: "))


def obliczenie_sredniej():
    global lista
    suma=1
    for i in range(len(lista)):
        suma+=int(lista[i])
    suma/=len(lista)
    return suma

os.system("cls")
dodanie_wartosci()
print("Średnia z podanych liczb wynosi: "+str(obliczenie_sredniej()))