package main

import (
    "bufio"
    "fmt"
    "os"
    "strconv"
)

func isLucky(input string) bool {

    sumFirstHalf := 0
    sumSecondHalf := 0

    for i := 0; i < 6; i++ {
        digit, err := strconv.Atoi(string(input[i]))
        if err != nil {
            return false // Если не удается преобразовать символ в число, номер недействителен
        }
        
        if i < 3 {
            sumFirstHalf += digit
        } else {
            sumSecondHalf += digit
        }
    }

    return sumFirstHalf == sumSecondHalf
}

func main() {
    number, _ := bufio.NewReader(os.Stdin).ReadString('\n')
    if isLucky(number[:len(number)-1]) { // Обрезаем \n в конце строки
        fmt.Println("YES")
    } else {
        fmt.Println("NO")
    }
}
