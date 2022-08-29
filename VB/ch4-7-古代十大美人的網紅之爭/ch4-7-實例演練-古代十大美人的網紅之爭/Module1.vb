Module Module1
    Dim c As Integer
    Dim beauty = {"西施", "貂蟬", "王昭君", "楊貴妃", "馮小憐", "蘇妲己", "趙飛燕", "鄭旦", "褒姒", "甄宓"}
    Dim vote = {78, 62, 86, 70, 12, 16, 38, 15, 22, 13}
    Sub swap(ByVal a, ByVal x, ByVal y)          '用來做交換陣列資料的副程式
        Dim t
        t = a(x)
        a(x) = a(y)
        a(y) = t
    End Sub
    Sub comp(ByVal bt, ByVal vt, ByVal r)        '用來做陣列中相鄰資料兩兩比較的副程式
        For j = 0 To (r - 1)
            If vt(j) > vt(j + 1) Then                '若左數 > 右數，則交換左右兩數
                Call swap(bt, j, j + 1)                 '呼叫swap()副程式，交換兩數(大的右移)-姓名
                Call swap(vt, j, j + 1)                 '呼叫swap()副程式，交換兩數(大的右移)-票數
            End If
        Next
    End Sub
    Sub write_beauty()                           '用來輸出姓名陣列元素的副程式
        For k = 0 To (c - 1)                         '陣列索引值:0~c-1
            Console.Write(beauty(k) & " ")           '輸出姓名陣列元素
        Next
    End Sub
    Sub Main()
        c = vote.Length
        For i = 1 To (c - 1)                         'c個待排數字，只需排「c-1」回合
            Call comp(beauty, vote, c - i)              '呼叫comp()副程式，完成「重覆相鄰兩數比較與交換」的動作
            Console.Write("第" & i & "回合結果: ")      '輸出每一回合的結果
            Call write_beauty()                         '呼叫write_beauty()副程式，輸出姓名陣列元素
            Console.WriteLine()                         '換列
        Next
        Console.Write("排序結束")
        Console.Read()
    End Sub

End Module
