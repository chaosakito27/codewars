def solution(s):
    if len(s) % 2:
        s += "_"

    output = [s[i] + s[i+1] for i in range(0, len(s), 2)]

    return output

print(solution("abc"))
print(solution("abcdef"))
