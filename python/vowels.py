def get_count(sentence):
    key = "aeiou"

    count = 0

    for char in sentence:
        if char in key:
            count += 1
    
    return count

print(get_count("aeiou"))
