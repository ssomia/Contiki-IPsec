/**
  * \brief      Encodes my public key to the memory beginning at start. Returns a pointer to
  *             the first byte after the public key.
  * \parameter  start Start of the public key. 48 bytes (2 * 192 bits) will be written.
  * \parameter  myPrvKey My private key of 24 bytes length (192 bits)
  */
void ecdh_encode_public_key(u32_t *start, NN_DIGIT *myPrvKey);


/**
  * Calculate the shared key
  *
  * \parameter shared_key Pointer to the shared key. Must be 48 bytes long (2 * 192 bits).\
    The X coordinate is stored in the first 24 bytes, then comes the Y coordinate in the remaining 24 bytes. Both are stored in network byte order.
  * \parameter peerPubKey The public key (commonly that of the other party)
  * \parameter myPrvKey The private key (commonly ours). 24 bytes long.
  */
void ecdh_get_shared_secret(u8_t *shared_key, point_t *peerPubKey, NN_DIGIT *myPrvKey);