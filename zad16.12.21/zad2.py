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

a=wprowadzenie(-10_000,10_000,"Podaj a: ")
b=wprowadzenie(-10_000,10_000,"Podaj b: ")
c=wprowadzenie(-10_000,10_000,"Podaj c: ")

if a%3==0 or b%3==0 or c%3==0:
    print("TAK")
else:
    print("NIE")