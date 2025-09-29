def main():
    print("=====Маятник=====")
    while True:
        full_amplitude = float(input("Введите начальную (полную) амплитутду маятника в см: "))
        final_amplitude = float(input("Введите конечную амплитутду маятника, при которой будет считаться, что он остановился, в см: "))
        i = 0

        while full_amplitude > final_amplitude:
            full_amplitude -= full_amplitude * 0.084
            i +=1

        print(f"Перед полным затуханием маятник качнется {i} раз")

if __name__ == "__main__":
    main()