def main():
    print("=====Убийца Steam=====")
    while True:
        print("Ввод:")
        file_size = float(input("Укажите размер файла для скачивания: "))
        connection_speed = float(input("Какова скорость вашего соединения? "))

        print("Вывод: ")
        seconds = 0
        downloaded = 0

        while downloaded < file_size:
            seconds += 1
            downloaded += connection_speed
            if downloaded > file_size:
                downloaded = file_size
            print(f"За {seconds} сек. Скачано {downloaded} из {file_size} МБ ({int((downloaded/file_size)*100)}%)")

if __name__ == "__main__":
    main()