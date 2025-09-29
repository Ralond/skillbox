def main():
    print("=====Кенийский бегун=====")
    
    while True:
        temp = 0
        km = 0
        print("Ввод: ")
        distanse = float(input("Привет, Сэм! Сколько километров ты сегодня пробежал? "))

        while km < distanse:
            sec = float(input(f"Какой у тебя был темп на километре {km+1}? "))
            temp += sec
            km += 1
        
        temp = round(temp/distanse)
        sec = temp%60
        temp /= 60

        print("Вывод: ")
        print(f"Твой средний темп за тренировку: {int(temp)} минут и {sec} секунд.")

if __name__ == "__main__":
    main()