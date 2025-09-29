import math

def main():
    print("=====Игрушечная история=====")
    while True:
        lenght = float(input("Введите длину, высоту и ширину бруска. \nX: "))
        height = float(input("Y: "))
        width = float(input("Z: "))

        print("Вывод:")

        if lenght < 5 or height < 5 or width < 5:
            print("Из этого бруска не получится составить набор кубиков.", end="\n")
        else:
            length = lenght/5
            height = height /5
            width = width /5
            totalNumber = int(length) * int(height) * int(width)
            print(f"Из этого бруска можно изготовить {totalNumber} кубиков.", end="\n")
            total_nabor = int(math.pow(totalNumber, 1/3))

            if total_nabor > 2:
                print(f"Из них можно составить набор из {int(math.pow(total_nabor,3))} кубиков.", end = "\n")
            else:
                print("С этим бруском составить набор не получится", end = "\n")

            print("====================", end="\n")

if __name__ == "__main__":
    main()