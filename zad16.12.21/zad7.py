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

def silnia(wartosc):
    wynik=1
    for i in range(1,wartosc+1):
        wynik*=i  
    return wynik

n=wprowadzenie(1,10_000,"Podaj n: ")

suma=0
for i in range(1,n+1):
    suma+=silnia(i)

print(suma)