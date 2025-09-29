def main():
    health = 1.0
    while health > 0:
        resist = float(input("Введите показатель резиста (от 0 до 1): "))
        while resist > 1 or resist < 0:
            resist =float(input("Введите число больше 0 и меньше 1: "))

        fireball = float(input("Введите урон огненного шара (от 0 до 1): "))
        while fireball > 1 or fireball < 0:
            fireball =float(input("Введите число больше 0 и меньше 1: "))

        damage = fireball * resist
        health = health - damage

        if health > 0:
            print(f"Нанесено {damage} урона! У орка осталось {health:.2f} здоровья")
        else: print(f"Нанесено {damage} урона! Вы победили орка!")

if __name__ == "__main__":
    main()