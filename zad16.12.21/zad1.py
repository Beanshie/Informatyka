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

x=wprowadzenie(-100_000,100_000,"Podaj x: ")

if a+b+c>x:
    print("TAK")
else:
    print("NIE")