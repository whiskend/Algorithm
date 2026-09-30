# K5 · 사용자 저장소 CRUD
# 자체 연습문제.
#
# 35분. UserStore의 네 메서드를 완성하세요. 서버·DB 설치는 필요 없습니다.
# 사용자 정보는 {"id": 정수, "name": 문자열}입니다.
# 새 저장소는 비어 있어야 하며 다른 저장소와 데이터를 공유하지 않습니다.
# ID는 1~1,000,000, 이름은 영문 1~20자. 같은 이름은 허용합니다.
# 명령은 최대 100,000개. 형식과 타입은 항상 유효합니다.
# solution은 완성되어 있으므로 수정할 필요 없습니다.

class UserStore:
    def __init__(self):
        self.users = {}

    # 1. create(user_id, name)
    # 새 ID면 저장 후 True. 이미 있는 ID면 변경 없이 False.
    # 예: create(1, "ana") -> True, create(1, "bo") -> False
    def create(self, user_id, name):
        if user_id in self.users:
            return False
        else:
            self.users[user_id] = name
            return True

    # 2. read(user_id)
    # 해당 사용자 딕셔너리 반환. 없는 ID면 None.
    # 반환한 값은 조회 당시의 값이며 이후 수정·삭제의 영향을 받지 않습니다.
    # 반환값을 수정해도 저장소는 바뀌지 않아야 합니다.
    # 예: read(1) -> {"id": 1, "name": "ana"}, read(99) -> None
    def read(self, user_id):
        if self.users.get(user_id):
            return {"id": user_id, "name": self.users[user_id]}
        return None

    # 3. update(user_id, name)
    # 있는 ID의 이름만 변경 후 True. 없는 ID면 생성하지 않고 False.
    # 예: update(1, "cy") -> True, update(99, "cy") -> False
    def update(self, user_id, name):
        if user_id in self.users.keys():
            self.users[user_id] = name
            return True
        return False

    # 4. delete(user_id)
    # 있는 ID면 삭제 후 True. 없는 ID면 False.
    # 삭제한 ID는 다시 생성할 수 있습니다.
    # 예: delete(1) -> True, delete(1) -> False
    def delete(self, user_id):
        if user_id in self.users.keys():
            del self.users[user_id]
            return True
        return False


# 명령별 반환값을 모으는 연결 코드. 이 부분은 수정하지 않아도 됩니다.
# 입력: [["CREATE", 1, "ana"], ["READ", 1], ["UPDATE", 1, "bo"],
#        ["READ", 1], ["DELETE", 1], ["READ", 1]]
# 반환: [True, {"id": 1, "name": "ana"}, True,
#        {"id": 1, "name": "bo"}, True, None]
def solution(commands):
    store = UserStore()
    handlers = {"CREATE": store.create, "READ": store.read,
                "UPDATE": store.update, "DELETE": store.delete}
    return [handlers[command[0]](*command[1:]) for command in commands]
