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
k=wprowadzenie(-10_000,10_000,"Podaj k: ")

for i in range(a,b+1):
    if i%k==0:
        print(i,end="\t")