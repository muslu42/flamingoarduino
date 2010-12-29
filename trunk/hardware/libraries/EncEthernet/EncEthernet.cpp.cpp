/*
  Ethernet library for Arduino ethernet shield/module

  Copyright (c) 2008 Flamingo EDA.  All right reserved.
  http://www.flamingoeda.com
  flamingoeda@gmail.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

extern "C" {
	#include "enc28j60.h"
	#include "ip_arp_udp_tcp.h"
 
}
#include "EncEthernet.h"

//constructor
EncEthernet::EncEthernet(){
}

uint16_t EncEthernet::E_fill_tcp_data_p(uint8_t *buf,uint16_t pos, const prog_char *progmem_s){
	return fill_tcp_data_p(buf, pos, progmem_s);
}

uint16_t EncEthernet::E_fill_tcp_data(uint8_t *buf,uint16_t pos, const char *s){
	return fill_tcp_data(buf,pos, s);
}


void EncEthernet::E_enc28j60Init(uint8_t* macaddr){
	enc28j60Init(macaddr);

}
void EncEthernet::E_enc28j60clkout(uint8_t clk){
	enc28j60clkout(clk);
}

void EncEthernet::E_enc28j60PhyWrite(uint8_t address, uint16_t data){
	enc28j60PhyWrite(address,  data);
}

uint16_t EncEthernet::E_enc28j60PacketReceive(uint16_t len, uint8_t* packet){
	return enc28j60PacketReceive(len, packet);
}


void EncEthernet::E_init_ip_arp_udp_tcp(uint8_t *mymac,uint8_t *myip,uint8_t wwwp){
	init_ip_arp_udp_tcp(mymac,myip,wwwp);
}

uint8_t EncEthernet::E_eth_type_is_arp_and_my_ip(uint8_t *buf,uint16_t len){
	return eth_type_is_arp_and_my_ip(buf,len);
}

void EncEthernet::E_make_arp_answer_from_request(uint8_t *buf){
	make_arp_answer_from_request(buf);
}

uint8_t EncEthernet::E_eth_type_is_ip_and_my_ip(uint8_t *buf,uint16_t len){
	return eth_type_is_ip_and_my_ip(buf, len);
}


void EncEthernet::E_make_echo_reply_from_request(uint8_t *buf,uint16_t len){
	make_echo_reply_from_request(buf,len);
}

void EncEthernet::E_make_tcp_synack_from_syn(uint8_t *buf){
	make_tcp_synack_from_syn(buf);
}	

void EncEthernet::E_init_len_info(uint8_t *buf){
	init_len_info(buf);
}

uint16_t EncEthernet::E_get_tcp_data_pointer(void){
	return get_tcp_data_pointer();
}

void EncEthernet::E_make_tcp_ack_from_any(uint8_t *buf){
	make_tcp_ack_from_any(buf);
}

void EncEthernet::E_make_tcp_ack_with_data(uint8_t *buf,uint16_t dlen){
	make_tcp_ack_with_data(buf,dlen);
}













