def dodanie_liczb():
    global lista
    while(True):
        try:
            long=int(input("Podaj z ilu liczb (od 2 do 100) chcesz obliczyć średnią: "))
        except ValueError:
            print("Musisz podać liczbę!")
            continue
        if((long<2) or (long>100)):
            print("Musisz podać liczbę z podanych powyżej!")
            continue
        break
    for i in range(0,long):
        try:
            lista.append(int(input("Podaj "+f'{i+1}'+" liczbę: ")))
        except ValueError:
            print("Musisz podać liczbę!")
            continue
        if((long<1) or (long>200)):
            print("Musisz podać liczbę z przedziału od 0 do 100!")
            continue 

def obliczenie_sredniej():
    global lista
    suma=1
    for i in range(len(lista)):
        suma+=lista[i]
    suma/=len(lista)
    return suma

lista=[]
dodanie_liczb()
print("Średnia z podanych liczb wynosi "+str(obliczenie_sredniej()))