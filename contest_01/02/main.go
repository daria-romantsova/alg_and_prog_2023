import "fmt"

func main() {
    var (
        day float32 = 0.5
        dyb int = 20
        topol int = 32
        )
    
    year := day * 365
    var y = int(year)
    dyb_for_men := y / dyb
    dyb_for_men++
    topol_for_men := y / topol
    topol_for_men++
    fmt.Println(year, topol_for_men, dyb_for_men)
}
