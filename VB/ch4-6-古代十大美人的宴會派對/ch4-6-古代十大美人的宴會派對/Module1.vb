Module Module1

    Sub Main()
        Dim t As String
        Dim c, found As Integer
        Dim beauty = {"西施", "貂蟬", "王昭君", "楊貴妃", "馮小憐", "蘇妲己", "趙飛燕", "鄭旦", "褒姒", "甄宓"}
        c = beauty.Length
        Console.Write("請問芳名: ")
        t = Console.ReadLine()
        found = -1
        For i = 0 To (c - 1)
            If beauty(i) = t Then
                found = i
                Console.WriteLine("發現搜尋目標 " & t & " 位於陣列中索引值為 " & i & " 的位置")
            End If
        Next
        If found = -1 Then
            Console.Write("哭哭 " & t & " 不在邀請名單上")
        End If
        Console.Read()
    End Sub

End Module
