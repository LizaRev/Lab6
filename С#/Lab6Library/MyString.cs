using System;

namespace Lab6Library;

public class MyString : ISpaceRemover
{
    private string value;

    public MyString(string _value)
    {
        value = _value;
    }

    public string GetValue() 
    {
        return value;

    }

    public int Length()
    {
        return value.Length;
    }

    public int CountConsonants()
    {
        string cons = "bcdfghjklmnpqrstvwxyzбвгґджзйклмнпрстфхцчшщBCDFGHJKLMNPQRSTVWXYZБВГҐДЖЗЙКЛМНПРСТФХЦЧШЩ";
        int count = 0;

        foreach (char c in value)
        {
            foreach (char consonants in cons)
            {
                if (c == consonants)
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }

    public void ReplaceManySpacesWithOne()
    {
        string result = "";
        for (int i = 0; i < value.Length; i++)
        {
            if (value[i] != ' ' || (i > 0 && value[i - 1] != ' '))
            {
                result += value[i];
            }
        }
        value = result;
    }

    public void ClearEdges()
    {
        if (value.Length == 0) return;

        int start = 0;
        while (start < value.Length && value[start] == ' ') start++;

        int end = value.Length - 1;
        while (end >= start && value[end] == ' ') end--;

        string result = "";
        for (int i = start; i <= end; i++) result += value[i];

        value = result;
    }
}