Module Module1

    Sub Main()
        Dim sum As Integer
        Dim score = {83, 92, 76, 96}
        sum = 0
        For i = 0 To 3
            sum = sum + score(i)
        Next
        Console.Write(sum)
        Console.Read()
    End Sub

End Module
