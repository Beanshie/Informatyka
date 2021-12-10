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

n=wprowadzenie(-10_000,10_000,"Podaj n: ")

suma=0 
for i in range(1,n+1):
    suma+=i

print((2*n)/suma)