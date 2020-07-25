package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	fmt.Scan(&n)
	var a []int64
	for i := 0; i < n; i++ {
		var s int64
		fmt.Scan(&s)
		a = append(a, s)
	}
	sort.Slice(a, func(i, j int) bool { return a[i] < a[j] })
	if a[0] == 0 {
		fmt.Println(0)
		return
	}
	ans := int64(1)
	for _, v := range a {
		if v > int64(1e18) / ans {
			fmt.Println("-1")
			return
		}
		ans *= v
	}
	fmt.Print(ans)
}
