
class program587
{
    public static void main(String A[]) throws Exception
    {
        String str = "Hello";

        byte Arr[] = str.getBytes();   // String converted in array of byte

        byte Key = 0x11;  // HexaDecimal 

        System.out.println("Original data : "+str);

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = (byte)(Arr[i] ^ Key);
        }

        String output = new String(Arr);  // Byte array converted in string

        System.out.println("Encrypted data :"+output);
    }
}