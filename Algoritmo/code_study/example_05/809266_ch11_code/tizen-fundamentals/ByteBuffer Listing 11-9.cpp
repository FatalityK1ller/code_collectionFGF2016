void
MyClass::ByteBufferSample()
{
    // (1)
    const int BUFFER_SIZE_MAX = 1024;
    ByteBuffer buf;
    buf.Construct(BUFFER_SIZE_MAX);

    // Copies five values from 'A' to 'E' into the buf
    for (int i = 0; i < 5; i++)
    {
        byte b = 'A' + i;

        // (2) Writes byte b to the current position of the buf
        buf.SetByte(b);
    }

    // (3) Flips the buf
    buf.Flip();

    // Reads bytes from the buf using "relative access method"
    while (buf.HasRemaining())
    {
        byte b;

        // (4)
        buf.GetByte(b); // The position is incremented by one
        AppLogTag("PTAP", "%c", b);
    }
    // (5)
    buf.Clear();

    // Writes int values to the buf
    for (int i = 0; i < 5; i++)
    {
        // (6)
        buf.SetInt(i);
    }

    // Flips the buf
    buf.Flip();

    // (7) Creates a new view, IntBuffer.
    // Capacity of pIntBuf = 5
    // The content of pIntBuf is from the buf's position to the buf's limit
    unique_ptr< IntBuffer > pIntBuf(buf.AsIntBufferN());

    // (8)
    pIntBuf->Set(4, 9);

    // Reads int values from the buf using "absolute access method"
    for (int i = 0; i < 5; i++)
    {
        int out;

        // (9)
        pIntBuf->Get(i, out);
        AppLogTag("PTAP", "%d = %d", i, out);
    }
}

