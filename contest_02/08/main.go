package main
import (
    "bufio"
    "fmt"
    "os"
)

//
import "strings"

func isPalindrome(s string) bool {
    
    cleanedStr := strings.ToLower(strings.Map(func(r rune) rune {
        if strings.ContainsRune("~!@#%^&*()", r) || r == ' ' {
            return -1
        }
        return r
    }, s))

    
    length := len(cleanedStr)
    for i := 0; i < length/2; i++ {
        if cleanedStr[i] != cleanedStr[length-i-1] {
            return false
        }
    }
    return true
}
//

func main() {
    number, _  := bufio.NewReader(os.Stdin).ReadString('\n')
    if isLucky( number[:len(number)-1] ){  // Обрезаем \n в конце строки
        fmt.Println("YES")
    }else{
        fmt.Println("NO")
    }
}
