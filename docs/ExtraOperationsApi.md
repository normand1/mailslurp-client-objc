# ExtraOperationsApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**bulkCreateInboxes**](ExtraOperationsApi.md#bulkCreateInboxes) | **POST** /bulk/inboxes | Bulk create Inboxes (email addresses)
[**bulkDeleteInboxes**](ExtraOperationsApi.md#bulkDeleteInboxes) | **DELETE** /bulk/inboxes | Bulk Delete Inboxes
[**bulkSendEmails**](ExtraOperationsApi.md#bulkSendEmails) | **POST** /bulk/send | Bulk Send Emails
[**createInbox**](ExtraOperationsApi.md#createInbox) | **POST** /inboxes | Create an Inbox (email address)
[**createWebhook**](ExtraOperationsApi.md#createWebhook) | **POST** /inboxes/{inboxId}/webhooks | Attach a WebHook URL to an inbox
[**deleteEmail**](ExtraOperationsApi.md#deleteEmail) | **DELETE** /emails/{emailId} | Delete Email
[**deleteInbox**](ExtraOperationsApi.md#deleteInbox) | **DELETE** /inboxes/{inboxId} | Delete Inbox / Email Address
[**deleteWebhook**](ExtraOperationsApi.md#deleteWebhook) | **DELETE** /inboxes/{inboxId}/webhooks/{webhookId} | Delete and disable a WebHook for an Inbox
[**downloadAttachment**](ExtraOperationsApi.md#downloadAttachment) | **GET** /emails/{emailId}/attachments/{attachmentId} | Get email attachment
[**getEmail**](ExtraOperationsApi.md#getEmail) | **GET** /emails/{emailId} | Get Email Content
[**getEmails**](ExtraOperationsApi.md#getEmails) | **GET** /inboxes/{inboxId}/emails | List Emails in an Inbox / EmailAddress
[**getInbox**](ExtraOperationsApi.md#getInbox) | **GET** /inboxes/{inboxId} | Get Inbox / EmailAddress
[**getInboxes**](ExtraOperationsApi.md#getInboxes) | **GET** /inboxes | List Inboxes / Email Addresses
[**getRawEmailContents**](ExtraOperationsApi.md#getRawEmailContents) | **GET** /emails/{emailId}/raw | Get Raw Email Content
[**getWebhooks**](ExtraOperationsApi.md#getWebhooks) | **GET** /inboxes/{inboxId}/webhooks | Get all WebHooks for an Inbox
[**sendEmail**](ExtraOperationsApi.md#sendEmail) | **POST** /inboxes/{inboxId} | Send Email


## **bulkCreateInboxes**

Bulk create Inboxes (email addresses)

Enterprise Plan Required

### Example
```bash
 bulkCreateInboxes  count=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **count** | **integer** | Number of inboxes to be created in bulk | [default to null]

### Return type

[**array[Inbox]**](Inbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **bulkDeleteInboxes**

Bulk Delete Inboxes

Enterprise Plan Required

### Example
```bash
 bulkDeleteInboxes
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **requestBody** | [**array[string]**](array.md) | ids |

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **bulkSendEmails**

Bulk Send Emails

Enterprise Plan Required

### Example
```bash
 bulkSendEmails
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bulkSendEmailOptions** | [**BulkSendEmailOptions**](BulkSendEmailOptions.md) | bulkSendEmailOptions |

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **createInbox**

Create an Inbox (email address)

Create a new inbox and ephemeral email address to send and receive from. This is a necessary step before sending or receiving emails. The response contains the inbox's ID and its associated email address. It is recommended that you create a new inbox during each test method so that it is unique and empty

### Example
```bash
 createInbox
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

## **createWebhook**

Attach a WebHook URL to an inbox

Get notified whenever an inbox receives an email via a WebHook URL. An emailID will be posted to this URL every time an email is received for this inbox. The URL must be publicly reachable by the MailSlurp server. You can provide basicAuth values if you wish to secure this endpoint.

### Example
```bash
 createWebhook inboxId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**string**](.md) | inboxId | [default to null]
 **createWebhookOptions** | [**CreateWebhookOptions**](CreateWebhookOptions.md) | options |

### Return type

[**Webhook**](Webhook.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **deleteEmail**

Delete Email

Deletes an email and removes it from the inbox

### Example
```bash
 deleteEmail emailId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**string**](.md) | emailId | [default to null]

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **deleteInbox**

Delete Inbox / Email Address

Permanently delete an inbox and associated email address

### Example
```bash
 deleteInbox inboxId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**string**](.md) | inboxId | [default to null]

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **deleteWebhook**

Delete and disable a WebHook for an Inbox

### Example
```bash
 deleteWebhook inboxId=value webhookId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**string**](.md) | inboxId | [default to null]
 **webhookId** | [**string**](.md) | webhookId | [default to null]

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **downloadAttachment**

Get email attachment

Returns the specified attachment for a given email as a byte stream (file download). Get the attachmentId from the email response. Requires enterprise account.

### Example
```bash
 downloadAttachment attachmentId=value emailId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **attachmentId** | **string** | attachmentId | [default to null]
 **emailId** | [**string**](.md) | emailId | [default to null]

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **getEmail**

Get Email Content

Returns a email summary object with headers and content. To retrieve the raw unparsed email use the getRawMessage endpoint

### Example
```bash
 getEmail emailId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**string**](.md) | emailId | [default to null]

### Return type

[**Email**](Email.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **getEmails**

List Emails in an Inbox / EmailAddress

List emails that an inbox has received. Only emails that are sent to the inbox's email address will appear in the inbox. It may take several seconds for any email you send to an inbox's email address to appear in the inbox. To make this endpoint wait for a minimum number of emails use the 'minCount' parameter. The server will retry the inbox database until the 'minCount' is satisfied or the 'retryTimeout' is reached

### Example
```bash
 getEmails inboxId=value  limit=value  minCount=value  retryTimeout=value  since=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**string**](.md) | Id of inbox that emails belongs to | [default to null]
 **limit** | **integer** | Limit the result set, ordered by descending received date time | [optional] [default to null]
 **minCount** | **integer** | Minimum acceptable email count. Will cause request to hang (and retry) until minCount is satisfied or retryTimeout is reached. | [optional] [default to null]
 **retryTimeout** | **integer** | Maximum milliseconds to spend retrying inbox database until minCount emails are returned | [optional] [default to null]
 **since** | **string** | Exclude emails received before this ISO 8601 date time | [optional] [default to null]

### Return type

[**array[EmailPreview]**](EmailPreview.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **getInbox**

Get Inbox / EmailAddress

Returns an inbox's properties, including its email address and ID.

### Example
```bash
 getInbox inboxId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**string**](.md) | inboxId | [default to null]

### Return type

[**Inbox**](Inbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **getInboxes**

List Inboxes / Email Addresses

List the inboxes you have created

### Example
```bash
 getInboxes
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[Inbox]**](Inbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **getRawEmailContents**

Get Raw Email Content

Returns a raw, unparsed and unprocessed email

### Example
```bash
 getRawEmailContents emailId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**string**](.md) | emailId | [default to null]

### Return type

**string**

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **getWebhooks**

Get all WebHooks for an Inbox

### Example
```bash
 getWebhooks inboxId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**string**](.md) | inboxId | [default to null]

### Return type

[**array[Webhook]**](Webhook.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not Applicable
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

## **sendEmail**

Send Email

Send an email from the inbox's email address. Specify the email recipients and contents in the request body. See the 'SendEmailOptions' for more information. Note the 'inboxId' refers to the inbox's id NOT its email address

### Example
```bash
 sendEmail inboxId=value
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**string**](.md) | inboxId | [default to null]
 **sendEmailOptions** | [**SendEmailOptions**](SendEmailOptions.md) | sendEmailOptions |

### Return type

(empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not Applicable

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

