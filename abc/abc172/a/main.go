package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()
	var i int
	for i = 0; time.Now().Sub(start).Seconds() < 2; i++ {
	}
	fmt.Println(i)
}