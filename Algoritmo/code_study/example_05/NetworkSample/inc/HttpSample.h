#ifndef _HTTP_SAMPLE_H_
#define _HTTP_SAMPLE_H_

#include <FBase.h>
#include <FNet.h>

class HttpSample
	: public Tizen::Net::Http::IHttpTransactionEventListener
{
public:
	HttpSample();
	~HttpSample();

	result SendHttpRequest();

private:
	void OnTransactionAborted(Tizen::Net::Http::HttpSession& httpSession, Tizen::Net::Http::HttpTransaction& httpTransaction, result r);
	bool OnTransactionCertVerificationRequestedN(Tizen::Net::Http::HttpSession& httpSession, Tizen::Net::Http::HttpTransaction& httpTransaction, Tizen::Base::Collection::IList* pCertList);
	void OnTransactionCertVerificationRequiredN(Tizen::Net::Http::HttpSession& httpSession, Tizen::Net::Http::HttpTransaction& httpTransaction, Tizen::Base::String* pCert);
	void OnTransactionCompleted(Tizen::Net::Http::HttpSession& httpSession, Tizen::Net::Http::HttpTransaction& httpTransaction);
	void OnTransactionHeaderCompleleted(Tizen::Net::Http::HttpSession& httpSession, Tizen::Net::Http::HttpTransaction& httpTransaction, int headerLen, bool bAuthRequired);
	void OnTransactionReadyToRead(Tizen::Net::Http::HttpSession& httpSession, Tizen::Net::Http::HttpTransaction& httpTransaction, int availableBodyLen);
	void OnTransactionReadyToWrite(Tizen::Net::Http::HttpSession& httpSession, Tizen::Net::Http::HttpTransaction& httpTransaction, int recommendedChunkSize);

private:
	Tizen::Net::Http::HttpTransaction* __pHttpTransaction;
	Tizen::Net::Http::HttpSession* __pHttpSession;
};

#endif // _HTTP_SAMPLE_H_
