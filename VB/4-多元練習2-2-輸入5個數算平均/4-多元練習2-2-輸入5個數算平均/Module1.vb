Module Module1

    Sub Main()
        Dim sum As Integer
        Dim average As Single
        Dim s(5) As Integer
        sum = 0
        For i = 0 To 4
            Console.Write("請輸入一個數字: ")
            s(i) = Val(Console.ReadLine())
            sum = sum + s(i)
            average = sum / 5
        Next
        Console.WriteLine("5個數字的平均是：" & average)
        Console.Read()
    End Sub

End Module
