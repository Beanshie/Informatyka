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

if n==1:
    print("Liczba nie jest liczbą pierwszą")
    exit(0)

for i in range(n-(n-2),n):
    if n%i==0:
        print("Liczba nie jest liczbą pierwszą")
        exit(0)

print("Liczba jest liczbą pierwszą")