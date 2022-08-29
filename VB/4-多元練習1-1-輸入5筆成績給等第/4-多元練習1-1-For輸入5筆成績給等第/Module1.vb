Module Module1

    Sub Main()
        Dim score = {0, 0, 0, 0, 0}
        For i = 0 To 4
            Console.Write("請輸入分數: ")
            score(i) = Val(Console.ReadLine())
            If score(i) < 70 Then
                Console.WriteLine("可")
            ElseIf score(i) < 90 Then
                Console.WriteLine("良")
            Else
                Console.WriteLine("優")
            End If
        Next
        Console.Read()
    End Sub

End Module
