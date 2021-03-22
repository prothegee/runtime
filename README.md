# runtime test

__info:__

Checking 32,768 prime number for 9 times testing with default runtime.

GPU calculation doesn't count.

<br>

__language code & version:__
- cpp:
    - `gcc (tdm64-1) 9.2.0`
- csharp:
    - `dotnet script 1.0.1 & dotnet 5.0.200`
- golang
    - `go 1.16`
- nodejs:
    - `node 15.8.0`
- python
    - `python 3.7.9`
- python (with numba.jit __steroid__)
    - `python 3.7.9 and numba 0.52.0`
    - *doesn't mean you can use it for every function.*
    - ask yourself, when to use `njit` and `jit`?

<br>

__hardware:__

```
i7-8750H
32Gb Ram
```

<br>

___

## result

__cpp:__
```
Test Count #1 | Took = 0.122 second
Test Count #2 | Took = 0.122 second
Test Count #3 | Took = 0.124 second
Test Count #4 | Took = 0.131 second
Test Count #5 | Took = 0.133 second
Test Count #6 | Took = 0.132 second
Test Count #7 | Took = 0.124 second
Test Count #8 | Took = 0.127 second
Test Count #9 | Took = 0.124 second
```

<br>

__csharp:__
```
Test Count #1 | Took = 0.2062667 second
Test Count #2 | Took = 0.1999616 second
Test Count #3 | Took = 0.209462 second
Test Count #4 | Took = 0.2038919 second
Test Count #5 | Took = 0.2164003 second
Test Count #6 | Took = 0.201839 second
Test Count #7 | Took = 0.2033757 second
Test Count #8 | Took = 0.2037054 second
Test Count #9 | Took = 0.1874016 second
```

<br>

__golang:__
```
Test Count #1 | Took = 0.4428128 second
Test Count #2 | Took = 0.4501683 second
Test Count #3 | Took = 0.4525688 second
Test Count #4 | Took = 0.4381767 second
Test Count #5 | Took = 0.4460464 second
Test Count #6 | Took = 0.4452252 second
Test Count #7 | Took = 0.4450522 second
Test Count #8 | Took = 0.442705 second
Test Count #9 | Took = 0.4401723 second
```

<br>

__nodejs:__
```
Test Count #1 | Took = 0.519 second
Test Count #2 | Took = 0.692 second
Test Count #3 | Took = 0.858 second
Test Count #4 | Took = 0.015 second
Test Count #5 | Took = 0.171 second
Test Count #6 | Took = 0.326 second
Test Count #7 | Took = 0.481 second
Test Count #8 | Took = 0.636 second
Test Count #9 | Took = 0.791 second
```

<br>

__python:__
```
Test Count #1 | Took = 5.561652 second
Test Count #2 | Took = 5.42755 second
Test Count #3 | Took = 5.501031 second
Test Count #4 | Took = 5.433911 second
Test Count #5 | Took = 5.237341 second
Test Count #6 | Took = 5.298611 second
Test Count #7 | Took = 5.494823 second
Test Count #8 | Took = 5.321733 second
Test Count #9 | Took = 5.150834 second
```

<br>

__python:__
```
Test Count #1 | Took = 0.00025549 second
Test Count #2 | Took = 0.0 second
Test Count #3 | Took = 0.0 second
Test Count #4 | Took = 0.0 second
Test Count #5 | Took = 0.0 second
Test Count #6 | Took = 0.0 second
Test Count #7 | Took = 0.0 second
Test Count #8 | Took = 0.0 second
Test Count #9 | Took = 0.0 second
```

<br>

___

###### end of readme.
