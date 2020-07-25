package main

import (
	"fmt"
)

func main() {
	var n, k, m int
	fmt.Scan(&n, &k, &m)
	var as []int
	for i:=0; i<n-1; i++ {
		var a int
		fmt.Scan(&a)
		as = append(as, a)
	}
	var sum int
	for _, a := range as {
		sum += a
	}
	ans := n * m - sum
	if(ans > k) {
		fmt.Println(-1)
		return
	}

	if(ans < 0) {
		ans = 0
	}

	fmt.Println(ans)

}