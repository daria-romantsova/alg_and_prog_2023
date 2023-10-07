package main
import "fmt"

func main() {
    var n int
    var p, p1, p2, p3, p4 int
    var remainder int
    fmt.Scan(&n)
    
    if n >= 5000 {
        p = n/5000
        fmt.Print(p, " ")
        
        remainder = n - (5000*p)
    } else {
        fmt.Print(0, " ")
    }
    if remainder >= 1000 {
        p1 = remainder/1000
        fmt.Print(p1, " ")
        remainder = remainder - (1000*p1)
    }else {
        fmt.Print(0, " ")
    }
    if remainder >= 500 {
        p2 = remainder/500
        fmt.Print(p2, " ")
        remainder = remainder - (500*p2)
    } else {
        fmt.Print(0, " ")
    }
    if remainder >= 200{
        p3 = remainder/200
        fmt.Print(p3, " ")
        remainder = remainder - (200*p3)
    }else {
        fmt.Print(0, " ")
    }
    if remainder >= 100{
        p4 = remainder/100
        fmt.Print(p4, " ")
    }else {
        fmt.Print(0, " ")
    }
}
