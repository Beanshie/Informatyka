def wprowadzenie(od,do,komunikat):
    while True:
        try:
            wartosc = int(input(komunikat))
            if wartosc<od or wartosc>do:
                print("Musisz podać liczbę od "+str(od)+" do "+str(do)+"!")
                continue
            else:
                break
        except ValueError:
            print("Musisz podać liczbę całkowitą!")
            continue
    return wartosc

n=wprowadzenie(1,10_000,"Podaj liczbę do sprawdzenia: ")

dzielniki=[]
for i in range(1,n+1):
    if n%i==0:
        dzielniki.append(i)

suma=0
for i in range(len(dzielniki)):
    suma+=dzielniki[i]

print("Ilość dzielników: "+str(len(dzielniki)))
print("Suma dzielników: "+str(suma))