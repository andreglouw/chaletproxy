/*
 * Proxies.h
 *
 *  Created on: 11 Jul 2018
 *      Author: andre.louw
 */

#ifndef LIBRARIES_CHALET_PROXIES_H_
#define LIBRARIES_CHALET_PROXIES_H_

class Proxy {
public:
	virtual ~Proxy();
	virtual Proxy *marshall(void *) = 0;
	virtual bool unmarshall(uint8_t *buffer, size_t bufSize) = 0;
	virtual size_t bufferSize() = 0;
	virtual uint8_t *buffer(uint8_t method) = 0;
};

#endif /* LIBRARIES_CHALET_PROXIES_H_ */
