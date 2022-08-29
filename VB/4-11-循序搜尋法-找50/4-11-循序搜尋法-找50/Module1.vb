Module Module1

    Sub Main()
        Dim t, c As Integer
        Dim data = {50, 62, 55, 64, 70, 50, 80, 71, 52}
        c = data.Length
        t = 50
        For i = 0 To (c - 1)
            If data(i) = t Then
                Console.WriteLine("發現搜尋目標 " & t & " 位於陣列中索引值為 " & i & " 的位置")
            End If
        Next
        Console.Read()
    End Sub

End Module
