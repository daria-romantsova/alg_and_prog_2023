package main
import "fmt"

func main() {
    var a, b, c string
    fmt.Scan(&a)
    fmt.Scan(&b)
    fmt.Scan(&c)
    
    if a == "Нет" && b == "Нет" && c == "Нет" {
        fmt.Print("Кот")
    }
    if a == "Нет" && b == "Нет" && c == "Да" {
        fmt.Print("Жираф")
    }
    if a == "Нет" && b == "Да" && c == "Нет" {
        fmt.Print("Курица")
    }
    if a == "Нет" && b == "Да" && c == "Да" {
        fmt.Print("Страус")
    }
    if a == "Да" && b == "Нет" && c == "Нет" {
        fmt.Print("Дельфин")
    }
    if a == "Да" && b == "Нет" && c == "Да" {
        fmt.Print("Плезиозавры")
    }
    if a == "Да" && b == "Да" && c == "Нет" {
        fmt.Print("Пингвин")
    }
    if a == "Да" && b == "Да" && c == "Да" {
        fmt.Print("Утка")
    }
}
