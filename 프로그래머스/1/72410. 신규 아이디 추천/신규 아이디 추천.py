def solution(new_id):
    # 1. 소문자로 변환
    new_id = new_id.lower()

    result = []

    for ch in new_id:
        # 2. 허용하지 않는 문자 제거
        if not (ch.isalnum() or ch in "-_."):
            continue

        # 3. 연속된 마침표는 하나만 남기기
        if ch == "." and result and result[-1] == ".":
            continue

        result.append(ch)

    # 4. 앞뒤 마침표 제거
    new_id = "".join(result).strip(".")

    # 5. 빈 문자열이면 a
    if not new_id:
        new_id = "a"

    # 6. 최대 15자로 자르고 끝의 마침표 제거
    new_id = new_id[:15].rstrip(".")

    # 7. 길이가 3이 될 때까지 마지막 문자 반복
    while len(new_id) < 3:
        new_id += new_id[-1]

    return new_id