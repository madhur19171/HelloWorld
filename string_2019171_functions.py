def get_every_fourth(S):
    s1 = S[::-1].strip()
    return s1[::4][::-1]


def get_every_kth(S, k, i):
    s1 = S.strip()
    s1 = s1[:i + 1][::-1][0::k][::-1]
    return s1


def decode_string(S):
    s1 = S.strip()[::-1]
    s1 = s1[s1.find('_') + 1:s1.find('_', s1.find('_')+1)][::-1]
    return s1
