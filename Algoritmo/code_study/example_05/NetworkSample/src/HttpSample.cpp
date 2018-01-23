#include "HttpSample.h"

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Net::Http;

HttpSample::HttpSample()
: __pHttpTransaction(null), __pHttpSession(null)
{

}

HttpSample::~HttpSample()
{

}

result
HttpSample::SendHttpRequest()
{
	result r = E_SUCCESS;
	String hostAddr = L"http://www.tizen.org";

	__pHttpSession = new (std::nothrow) HttpSession();
	r = __pHttpSession->Construct(NET_HTTP_SESSION_MODE_NORMAL, null, hostAddr, null);

	__pHttpTransaction = __pHttpSession->OpenTransactionN();
	r = __pHttpTransaction->AddHttpTransactionListener(*this);

	HttpRequest* pHttpRequest = __pHttpTransaction->GetRequest();
	r = pHttpRequest->SetMethod(NET_HTTP_METHOD_POST);
	r = pHttpRequest->SetUri(L"http://www.tizen.org/sample");

	HttpHeader* pHttpHeader = pHttpRequest->GetHeader();
	r = pHttpHeader->AddField(L"Content-Length", L"1024");

	r = __pHttpTransaction->Submit();

	return r;
}

void
HttpSample::OnTransactionAborted(HttpSession& httpSession, HttpTransaction& httpTransaction, result r)
{

}

bool
HttpSample::OnTransactionCertVerificationRequestedN(HttpSession& httpSession, HttpTransaction& httpTransaction, IList* pCertList)
{
	return true;
}

void
HttpSample::OnTransactionCertVerificationRequiredN(HttpSession& httpSession, HttpTransaction& httpTransaction, String* pCert)
{

}

void
HttpSample::OnTransactionCompleted(HttpSession& httpSession, HttpTransaction& httpTransaction)
{

}

void
HttpSample::OnTransactionHeaderCompleleted(HttpSession& httpSession, HttpTransaction& httpTransaction, int headerLen, bool bAuthRequired)
{

}

void
HttpSample::OnTransactionReadyToRead(HttpSession& httpSession, HttpTransaction& httpTransaction, int availableBodyLen)
{
	HttpResponse* pHttpResponse = httpTransaction.GetResponse();
	if(pHttpResponse->GetHttpStatusCode() == HTTP_STATUS_OK)
	{
		HttpHeader* pHttpHeader = pHttpResponse->GetHeader();
		String* pRawHeader = pHttpHeader->GetRawHeaderN();
		ByteBuffer* pBody = pHttpResponse->ReadBodyN();
		//Handle the body
		delete pBody;
		delete pRawHeader;
	}

}

void
HttpSample::OnTransactionReadyToWrite(HttpSession& httpSession, HttpTransaction& httpTransaction, int recommendedChunkSize)
{

}

