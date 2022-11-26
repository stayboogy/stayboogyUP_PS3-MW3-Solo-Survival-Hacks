void UAV()
{
  char uav[] = { 0x10 };
  write_process(0x18DB880, uav, sizeof(uav));
  PS3::WriteBytes(0x18DB880, uav, sizeof(uav));
  
  char radar[] = { 0x02 };
  write_process(0x5F067, radar, sizeof(radar));
  PS3::WriteBytes(0x5F067, radar, sizeof(radar));
}

void Perks()
{
  char perks[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
  write_process(0x01227788, perks, sizeof(perks));
  PS3::WriteBytes(0x01227788, perks, sizeof(perks));
}

void Loaded()
{
  char loaded[] = { 0x00, 0x90 };
  write_process(0x01227631, loaded, sizeof(loaded));
  write_process(0x01227649, loaded, sizeof(loaded));
  write_process(0x012276cd, loaded, sizeof(loaded));
  write_process(0x012276d9, loaded, sizeof(loaded));
  write_process(0x012276b5, loaded, sizeof(loaded));
  write_process(0x012276c1, loaded, sizeof(loaded));
  write_process(0x012276d9, loaded, sizeof(loaded));
  write_process(0x012276e5, loaded, sizeof(loaded));
  write_process(0x012326f9, loaded, sizeof(loaded));
  write_process(0x01232711, loaded, sizeof(loaded));
  write_process(0x01232771, loaded, sizeof(loaded));
  write_process(0x01232795, loaded, sizeof(loaded));
  write_process(0x0123277d, loaded, sizeof(loaded));  
  write_process(0x01232789, loaded, sizeof(loaded)); 
  write_process(0x012327a1, loaded, sizeof(loaded)); 
  write_process(0x012327ad, loaded, sizeof(loaded));
  PS3::WriteBytes(0x01227631, loaded, sizeof(loaded));
  PS3::WriteBytes(0x01227649, loaded, sizeof(loaded));
  PS3::WriteBytes(0x012276cd, loaded, sizeof(loaded));
  PS3::WriteBytes(0x012276d9, loaded, sizeof(loaded));
  PS3::WriteBytes(0x012276b5, loaded, sizeof(loaded));
  PS3::WriteBytes(0x012276c1, loaded, sizeof(loaded));
  PS3::WriteBytes(0x012276d9, loaded, sizeof(loaded));
  PS3::WriteBytes(0x012276e5, loaded, sizeof(loaded));
  PS3::WriteBytes(0x012326f9, loaded, sizeof(loaded));
  PS3::WriteBytes(0x01232711, loaded, sizeof(loaded));
  PS3::WriteBytes(0x01232771, loaded, sizeof(loaded));
  PS3::WriteBytes(0x01232795, loaded, sizeof(loaded));
  PS3::WriteBytes(0x0123277d, loaded, sizeof(loaded));  
  PS3::WriteBytes(0x01232789, loaded, sizeof(loaded)); 
  PS3::WriteBytes(0x012327a1, loaded, sizeof(loaded)); 
  PS3::WriteBytes(0x012327ad, loaded, sizeof(loaded));
};