# CommonOperationsApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**createNewEmailAddress**](CommonOperationsApi.md#createNewEmailAddress) | **POST** /newEmailAddress | Create new email address
[**sendEmailSimple**](CommonOperationsApi.md#sendEmailSimple) | **POST** /sendEmail | Send an email from a random email address
[**waitForLatestEmail**](CommonOperationsApi.md#waitForLatestEmail) | **GET** /fetchLatestEmail | Fetch inbox&#39;s latest email or if empty wait for email to arrive


## **createNewEmailAddress**

Create new email address

Returns an Inbox with an 'id' and an 'emailAddress'

### Example
```bash
 createNewEmailAddress
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Inbox**](Inbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **sendEmailSimple**

Send an email from a random email address

To specify an email address first create an inbox and use that with the other send email methods

### Example
```bash
 sendEmailSimple
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendEmailOptions** | [**SendEmailOptions**](SendEmailOptions.md) | sendEmailOptions |

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **waitForLatestEmail**

Fetch inbox's latest email or if empty wait for email to arrive

Will return either the last received email or wait for an email to arrive and return that. If you need to wait for an email for a non-empty inbox see the other receive methods.

### Example
```bash
 waitForLatestEmail  inboxEmailAddress=value  inboxId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxEmailAddress** | **string** | Email address of the inbox we are fetching emails from | [optional] [default to null]
 **inboxId** | [**string**](.md) | Id of the inbox we are fetching emails from | [optional] [default to null]

### Return type

[**Email**](Email.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

