In this lab I need to transform this input:
> _Батон Нарізний, 13 грн 29 коп, 1 шт_

To
>_Батон Нарізний, 13 грн 30 коп, 1 шт_
>	_sum:    [sum of all products from the list]_

---

# How?
1. Structure `money` that has 
	1. grn
	2. kop
	3. quantity
2. fstream that reads from file (maybe use `,` as separators (wait hold on how do I do dat))
3. function that rounds kop to have 0 at the end
4. output everything back
5. multiply each number by quantity

%%what if I `((grn*100)+kop)/100.0` to make from 13 30 -> 13.30 then multiply each by quantity.  %%

```handdrawn-ink
{
	"versionAtEmbed": "0.3.4",
	"filepath": "Ink/Drawing/2025.3.26 - 15.41pm.drawing",
	"width": 500,
	"aspectRatio": 1
}
```


`kop > 100 ? kop-100, grn++` 
I UNDERSTOOOOOOOD HOLY [whoops]
so we have 3 parts of input separated by `,`
and we input


so its reading and doing cycle to add temp readings to var name
in that way it ouptuts always full name.
then with sstream we read numbers and call methods to do stuff. 
then we output everything and add procdeed price to the sum of older ones. helll yeah