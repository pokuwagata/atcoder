package main

import "fmt"

func main() {
	var s, t []byte
	fmt.Scan(&s, &t)
	ans := 0
	for i, b := range s {
		if b != t[i] {
			ans++
		}
	}
	fmt.Println(ans)
}
