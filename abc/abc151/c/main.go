package main

import "fmt"

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	ps := make([]int, n)
	wa := make([]int, n)
	pena := 0
	ac := 0
	for i := 1; i <= m; i++ {
		var p int
		var s string
		fmt.Scan(&p, &s)
		p--
		if ps[p] > 0 {
			continue
		}
		if s == "AC" {
			ps[p] = i
			ac++
			pena += wa[p]
		}
		if s == "WA" {
			wa[p]++
		}
	}
	fmt.Printf("%d %d", ac, pena)
}
