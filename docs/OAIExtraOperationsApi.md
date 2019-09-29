# OAIExtraOperationsApi

All URIs are relative to *https://api.mailslurp.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**bulkCreateInboxes**](OAIExtraOperationsApi.md#bulkcreateinboxes) | **POST** /bulk/inboxes | Bulk create Inboxes (email addresses)
[**bulkDeleteInboxes**](OAIExtraOperationsApi.md#bulkdeleteinboxes) | **DELETE** /bulk/inboxes | Bulk Delete Inboxes
[**bulkSendEmails**](OAIExtraOperationsApi.md#bulksendemails) | **POST** /bulk/send | Bulk Send Emails
[**createDomain**](OAIExtraOperationsApi.md#createdomain) | **POST** /domains | Create Domain
[**createInbox**](OAIExtraOperationsApi.md#createinbox) | **POST** /inboxes | Create an Inbox (email address)
[**createWebhook**](OAIExtraOperationsApi.md#createwebhook) | **POST** /inboxes/{inboxId}/webhooks | Attach a WebHook URL to an inbox
[**deleteDomain**](OAIExtraOperationsApi.md#deletedomain) | **DELETE** /domains/{id} | Delete a domain
[**deleteEmail1**](OAIExtraOperationsApi.md#deleteemail1) | **DELETE** /emails/{emailId} | Delete Email
[**deleteInbox**](OAIExtraOperationsApi.md#deleteinbox) | **DELETE** /inboxes/{inboxId} | Delete Inbox / Email Address
[**deleteWebhook**](OAIExtraOperationsApi.md#deletewebhook) | **DELETE** /inboxes/{inboxId}/webhooks/{webhookId} | Delete and disable a WebHook for an Inbox
[**downloadAttachment**](OAIExtraOperationsApi.md#downloadattachment) | **GET** /emails/{emailId}/attachments/{attachmentId} | Get email attachment
[**forwardEmail**](OAIExtraOperationsApi.md#forwardemail) | **POST** /emails/{emailId}/forward | Forward Email
[**getDomain**](OAIExtraOperationsApi.md#getdomain) | **GET** /domains/{id} | Get a domain
[**getDomains**](OAIExtraOperationsApi.md#getdomains) | **GET** /domains | Get domains
[**getEmail**](OAIExtraOperationsApi.md#getemail) | **GET** /emails/{emailId} | Get Email Content
[**getEmails**](OAIExtraOperationsApi.md#getemails) | **GET** /inboxes/{inboxId}/emails | List Emails in an Inbox / EmailAddress
[**getEmailsPaginated**](OAIExtraOperationsApi.md#getemailspaginated) | **GET** /emails | Get all emails
[**getInbox**](OAIExtraOperationsApi.md#getinbox) | **GET** /inboxes/{inboxId} | Get Inbox / EmailAddress
[**getInboxes**](OAIExtraOperationsApi.md#getinboxes) | **GET** /inboxes | List Inboxes / Email Addresses
[**getRawEmailContents**](OAIExtraOperationsApi.md#getrawemailcontents) | **GET** /emails/{emailId}/raw | Get Raw Email Content
[**getWebhooks**](OAIExtraOperationsApi.md#getwebhooks) | **GET** /inboxes/{inboxId}/webhooks | Get all WebHooks for an Inbox
[**sendEmail**](OAIExtraOperationsApi.md#sendemail) | **POST** /inboxes/{inboxId} | Send Email
[**uploadAttachment**](OAIExtraOperationsApi.md#uploadattachment) | **POST** /attachments | Upload an attachment for sending
[**uploadMultipartForm**](OAIExtraOperationsApi.md#uploadmultipartform) | **POST** /attachments/multipart | Upload an attachment for sending using Multipart Form


# **bulkCreateInboxes**
```objc
-(NSURLSessionTask*) bulkCreateInboxesWithCount: (NSNumber*) count
        completionHandler: (void (^)(NSArray<OAIInbox>* output, NSError* error)) handler;
```

Bulk create Inboxes (email addresses)

Enterprise Plan Required

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSNumber* count = @56; // Number of inboxes to be created in bulk

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Bulk create Inboxes (email addresses)
[apiInstance bulkCreateInboxesWithCount:count
          completionHandler: ^(NSArray<OAIInbox>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->bulkCreateInboxes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **count** | **NSNumber***| Number of inboxes to be created in bulk | 

### Return type

[**NSArray<OAIInbox>***](OAIInbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **bulkDeleteInboxes**
```objc
-(NSURLSessionTask*) bulkDeleteInboxesWithRequestBody: (NSArray<NSString*>*) requestBody
        completionHandler: (void (^)(NSError* error)) handler;
```

Bulk Delete Inboxes

Enterprise Plan Required

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSArray<NSString*>* requestBody = @[[[NSArray alloc] init]]; // ids

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Bulk Delete Inboxes
[apiInstance bulkDeleteInboxesWithRequestBody:requestBody
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->bulkDeleteInboxes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **requestBody** | [**NSArray&lt;NSString*&gt;***](NSArray.md)| ids | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **bulkSendEmails**
```objc
-(NSURLSessionTask*) bulkSendEmailsWithBulkSendEmailOptions: (OAIBulkSendEmailOptions*) bulkSendEmailOptions
        completionHandler: (void (^)(NSError* error)) handler;
```

Bulk Send Emails

Enterprise Plan Required

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


OAIBulkSendEmailOptions* bulkSendEmailOptions = [[OAIBulkSendEmailOptions alloc] init]; // bulkSendEmailOptions

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Bulk Send Emails
[apiInstance bulkSendEmailsWithBulkSendEmailOptions:bulkSendEmailOptions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->bulkSendEmails: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bulkSendEmailOptions** | [**OAIBulkSendEmailOptions***](OAIBulkSendEmailOptions.md)| bulkSendEmailOptions | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createDomain**
```objc
-(NSURLSessionTask*) createDomainWithCreateDomainOptions: (OAICreateDomainOptions*) createDomainOptions
        completionHandler: (void (^)(OAIDomainPlusVerificationRecordsAndStatus* output, NSError* error)) handler;
```

Create Domain

Link a domain that you own with MailSlurp so you can create inboxes with it. Returns DNS records used for validation. You must add these verification records to your host provider's DNS setup to verify the domain.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


OAICreateDomainOptions* createDomainOptions = [[OAICreateDomainOptions alloc] init]; // domainOptions

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Create Domain
[apiInstance createDomainWithCreateDomainOptions:createDomainOptions
          completionHandler: ^(OAIDomainPlusVerificationRecordsAndStatus* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->createDomain: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createDomainOptions** | [**OAICreateDomainOptions***](OAICreateDomainOptions.md)| domainOptions | 

### Return type

[**OAIDomainPlusVerificationRecordsAndStatus***](OAIDomainPlusVerificationRecordsAndStatus.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createInbox**
```objc
-(NSURLSessionTask*) createInboxWithEmailAddress: (NSString*) emailAddress
        completionHandler: (void (^)(OAIInbox* output, NSError* error)) handler;
```

Create an Inbox (email address)

Create a new inbox and with a ranmdomized email address to send and receive from. Pass emailAddress parameter if you wish to use a specific email address. Creating an inbox is required before sending or receiving emails. If writing tests it is recommended that you create a new inbox during each test method so that it is unique and empty. 

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailAddress = @"emailAddress_example"; // Optional email address including domain you wish inbox to use (eg: test123@mydomain.com). Only supports domains that you have registered and verified with MailSlurp using dashboard or `createDomain` method. (optional)

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Create an Inbox (email address)
[apiInstance createInboxWithEmailAddress:emailAddress
          completionHandler: ^(OAIInbox* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->createInbox: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailAddress** | **NSString***| Optional email address including domain you wish inbox to use (eg: test123@mydomain.com). Only supports domains that you have registered and verified with MailSlurp using dashboard or &#x60;createDomain&#x60; method. | [optional] 

### Return type

[**OAIInbox***](OAIInbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createWebhook**
```objc
-(NSURLSessionTask*) createWebhookWithInboxId: (NSString*) inboxId
    createWebhookOptions: (OAICreateWebhookOptions*) createWebhookOptions
        completionHandler: (void (^)(OAIWebhook* output, NSError* error)) handler;
```

Attach a WebHook URL to an inbox

Get notified whenever an inbox receives an email via a WebHook URL. An emailID will be posted to this URL every time an email is received for this inbox. The URL must be publicly reachable by the MailSlurp server. You can provide basicAuth values if you wish to secure this endpoint.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId
OAICreateWebhookOptions* createWebhookOptions = [[OAICreateWebhookOptions alloc] init]; // webhookOptions

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Attach a WebHook URL to an inbox
[apiInstance createWebhookWithInboxId:inboxId
              createWebhookOptions:createWebhookOptions
          completionHandler: ^(OAIWebhook* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->createWebhook: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| inboxId | 
 **createWebhookOptions** | [**OAICreateWebhookOptions***](OAICreateWebhookOptions.md)| webhookOptions | 

### Return type

[**OAIWebhook***](OAIWebhook.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDomain**
```objc
-(NSURLSessionTask*) deleteDomainWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a domain

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* _id = @"_id_example"; // id

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Delete a domain
[apiInstance deleteDomainWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->deleteDomain: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | [**NSString***](.md)| id | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEmail1**
```objc
-(NSURLSessionTask*) deleteEmail1WithEmailId: (NSString*) emailId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete Email

Deletes an email and removes it from the inbox

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailId = @"emailId_example"; // emailId

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Delete Email
[apiInstance deleteEmail1WithEmailId:emailId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->deleteEmail1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**NSString***](.md)| emailId | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteInbox**
```objc
-(NSURLSessionTask*) deleteInboxWithInboxId: (NSString*) inboxId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete Inbox / Email Address

Permanently delete an inbox and associated email address

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Delete Inbox / Email Address
[apiInstance deleteInboxWithInboxId:inboxId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->deleteInbox: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| inboxId | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteWebhook**
```objc
-(NSURLSessionTask*) deleteWebhookWithInboxId: (NSString*) inboxId
    webhookId: (NSString*) webhookId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete and disable a WebHook for an Inbox

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId
NSString* webhookId = @"webhookId_example"; // webhookId

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Delete and disable a WebHook for an Inbox
[apiInstance deleteWebhookWithInboxId:inboxId
              webhookId:webhookId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->deleteWebhook: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| inboxId | 
 **webhookId** | [**NSString***](.md)| webhookId | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **downloadAttachment**
```objc
-(NSURLSessionTask*) downloadAttachmentWithAttachmentId: (NSString*) attachmentId
    emailId: (NSString*) emailId
    apiKey: (NSString*) apiKey
        completionHandler: (void (^)(NSError* error)) handler;
```

Get email attachment

Returns the specified attachment for a given email as a byte stream (file download). Get the attachmentId from the email response. Requires enterprise account.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* attachmentId = @"attachmentId_example"; // attachmentId
NSString* emailId = @"emailId_example"; // emailId
NSString* apiKey = @"apiKey_example"; // Can pass apiKey in url for this request if you wish to download the file in a browser (optional)

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get email attachment
[apiInstance downloadAttachmentWithAttachmentId:attachmentId
              emailId:emailId
              apiKey:apiKey
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->downloadAttachment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **attachmentId** | **NSString***| attachmentId | 
 **emailId** | [**NSString***](.md)| emailId | 
 **apiKey** | **NSString***| Can pass apiKey in url for this request if you wish to download the file in a browser | [optional] 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **forwardEmail**
```objc
-(NSURLSessionTask*) forwardEmailWithEmailId: (NSString*) emailId
    forwardEmailOptions: (OAIForwardEmailOptions*) forwardEmailOptions
        completionHandler: (void (^)(NSError* error)) handler;
```

Forward Email

Forward email content to given recipients

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailId = @"emailId_example"; // emailId
OAIForwardEmailOptions* forwardEmailOptions = [[OAIForwardEmailOptions alloc] init]; // forwardEmailOptions

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Forward Email
[apiInstance forwardEmailWithEmailId:emailId
              forwardEmailOptions:forwardEmailOptions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->forwardEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**NSString***](.md)| emailId | 
 **forwardEmailOptions** | [**OAIForwardEmailOptions***](OAIForwardEmailOptions.md)| forwardEmailOptions | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomain**
```objc
-(NSURLSessionTask*) getDomainWithId: (NSString*) _id
        completionHandler: (void (^)(OAIDomainPlusVerificationRecordsAndStatus* output, NSError* error)) handler;
```

Get a domain

Returns domain verification status and tokens

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* _id = @"_id_example"; // id

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get a domain
[apiInstance getDomainWithId:_id
          completionHandler: ^(OAIDomainPlusVerificationRecordsAndStatus* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getDomain: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | [**NSString***](.md)| id | 

### Return type

[**OAIDomainPlusVerificationRecordsAndStatus***](OAIDomainPlusVerificationRecordsAndStatus.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDomains**
```objc
-(NSURLSessionTask*) getDomainsWithCompletionHandler: 
        (void (^)(NSArray<OAIDomainPreview>* output, NSError* error)) handler;
```

Get domains

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];



OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get domains
[apiInstance getDomainsWithCompletionHandler: 
          ^(NSArray<OAIDomainPreview>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getDomains: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<OAIDomainPreview>***](OAIDomainPreview.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEmail**
```objc
-(NSURLSessionTask*) getEmailWithEmailId: (NSString*) emailId
        completionHandler: (void (^)(OAIEmail* output, NSError* error)) handler;
```

Get Email Content

Returns a email summary object with headers and content. To retrieve the raw unparsed email use the getRawMessage endpoint

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailId = @"emailId_example"; // emailId

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get Email Content
[apiInstance getEmailWithEmailId:emailId
          completionHandler: ^(OAIEmail* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**NSString***](.md)| emailId | 

### Return type

[**OAIEmail***](OAIEmail.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEmails**
```objc
-(NSURLSessionTask*) getEmailsWithInboxId: (NSString*) inboxId
    limit: (NSNumber*) limit
    minCount: (NSNumber*) minCount
    retryTimeout: (NSNumber*) retryTimeout
    since: (NSDate*) since
        completionHandler: (void (^)(NSArray<OAIEmailPreview>* output, NSError* error)) handler;
```

List Emails in an Inbox / EmailAddress

List emails that an inbox has received. Only emails that are sent to the inbox's email address will appear in the inbox. It may take several seconds for any email you send to an inbox's email address to appear in the inbox. To make this endpoint wait for a minimum number of emails use the `minCount` parameter. The server will retry the inbox database until the `minCount` is satisfied or the `retryTimeout` is reached

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // Id of inbox that emails belongs to
NSNumber* limit = @56; // Limit the result set, ordered by descending received date time (optional)
NSNumber* minCount = @56; // Minimum acceptable email count. Will cause request to hang (and retry) until minCount is satisfied or retryTimeout is reached. (optional)
NSNumber* retryTimeout = @56; // Maximum milliseconds to spend retrying inbox database until minCount emails are returned (optional)
NSDate* since = @"2013-10-20T19:20:30+01:00"; // Exclude emails received before this ISO 8601 date time (optional)

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// List Emails in an Inbox / EmailAddress
[apiInstance getEmailsWithInboxId:inboxId
              limit:limit
              minCount:minCount
              retryTimeout:retryTimeout
              since:since
          completionHandler: ^(NSArray<OAIEmailPreview>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getEmails: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| Id of inbox that emails belongs to | 
 **limit** | **NSNumber***| Limit the result set, ordered by descending received date time | [optional] 
 **minCount** | **NSNumber***| Minimum acceptable email count. Will cause request to hang (and retry) until minCount is satisfied or retryTimeout is reached. | [optional] 
 **retryTimeout** | **NSNumber***| Maximum milliseconds to spend retrying inbox database until minCount emails are returned | [optional] 
 **since** | **NSDate***| Exclude emails received before this ISO 8601 date time | [optional] 

### Return type

[**NSArray<OAIEmailPreview>***](OAIEmailPreview.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEmailsPaginated**
```objc
-(NSURLSessionTask*) getEmailsPaginatedWithPage: (NSNumber*) page
    size: (NSNumber*) size
        completionHandler: (void (^)(OAIPageEmailProjection* output, NSError* error)) handler;
```

Get all emails

Responses are paginated

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSNumber* page = @0; // Optional page index in email list pagination (optional) (default to @0)
NSNumber* size = @20; // Optional page size in email list pagination (optional) (default to @20)

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get all emails
[apiInstance getEmailsPaginatedWithPage:page
              size:size
          completionHandler: ^(OAIPageEmailProjection* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getEmailsPaginated: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **NSNumber***| Optional page index in email list pagination | [optional] [default to @0]
 **size** | **NSNumber***| Optional page size in email list pagination | [optional] [default to @20]

### Return type

[**OAIPageEmailProjection***](OAIPageEmailProjection.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInbox**
```objc
-(NSURLSessionTask*) getInboxWithInboxId: (NSString*) inboxId
        completionHandler: (void (^)(OAIInbox* output, NSError* error)) handler;
```

Get Inbox / EmailAddress

Returns an inbox's properties, including its email address and ID.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get Inbox / EmailAddress
[apiInstance getInboxWithInboxId:inboxId
          completionHandler: ^(OAIInbox* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getInbox: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| inboxId | 

### Return type

[**OAIInbox***](OAIInbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInboxes**
```objc
-(NSURLSessionTask*) getInboxesWithCompletionHandler: 
        (void (^)(NSArray<OAIInbox>* output, NSError* error)) handler;
```

List Inboxes / Email Addresses

List the inboxes you have created

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];



OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// List Inboxes / Email Addresses
[apiInstance getInboxesWithCompletionHandler: 
          ^(NSArray<OAIInbox>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getInboxes: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<OAIInbox>***](OAIInbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRawEmailContents**
```objc
-(NSURLSessionTask*) getRawEmailContentsWithEmailId: (NSString*) emailId
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get Raw Email Content

Returns a raw, unparsed and unprocessed email

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailId = @"emailId_example"; // emailId

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get Raw Email Content
[apiInstance getRawEmailContentsWithEmailId:emailId
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getRawEmailContents: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**NSString***](.md)| emailId | 

### Return type

**NSString***

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWebhooks**
```objc
-(NSURLSessionTask*) getWebhooksWithInboxId: (NSString*) inboxId
        completionHandler: (void (^)(NSArray<OAIWebhook>* output, NSError* error)) handler;
```

Get all WebHooks for an Inbox

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Get all WebHooks for an Inbox
[apiInstance getWebhooksWithInboxId:inboxId
          completionHandler: ^(NSArray<OAIWebhook>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->getWebhooks: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| inboxId | 

### Return type

[**NSArray<OAIWebhook>***](OAIWebhook.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendEmail**
```objc
-(NSURLSessionTask*) sendEmailWithInboxId: (NSString*) inboxId
    sendEmailOptions: (OAISendEmailOptions*) sendEmailOptions
        completionHandler: (void (^)(NSError* error)) handler;
```

Send Email

Send an email from the inbox's email address. Specify the email recipients and contents in the request body. See the `SendEmailOptions` for more information. Note the `inboxId` refers to the inbox's id NOT its email address

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId
OAISendEmailOptions* sendEmailOptions = [[OAISendEmailOptions alloc] init]; // sendEmailOptions

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Send Email
[apiInstance sendEmailWithInboxId:inboxId
              sendEmailOptions:sendEmailOptions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->sendEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| inboxId | 
 **sendEmailOptions** | [**OAISendEmailOptions***](OAISendEmailOptions.md)| sendEmailOptions | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **uploadAttachment**
```objc
-(NSURLSessionTask*) uploadAttachmentWithUploadAttachmentOptions: (OAIUploadAttachmentOptions*) uploadAttachmentOptions
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Upload an attachment for sending

When sending emails with attachments first upload each attachment with this endpoint. Record the returned attachment IDs. Then use these attachment IDs in the SendEmailOptions when sending an email. This means that attachments can easily be reused.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


OAIUploadAttachmentOptions* uploadAttachmentOptions = [[OAIUploadAttachmentOptions alloc] init]; // uploadOptions

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Upload an attachment for sending
[apiInstance uploadAttachmentWithUploadAttachmentOptions:uploadAttachmentOptions
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->uploadAttachment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uploadAttachmentOptions** | [**OAIUploadAttachmentOptions***](OAIUploadAttachmentOptions.md)| uploadOptions | 

### Return type

**NSArray<NSString*>***

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **uploadMultipartForm**
```objc
-(NSURLSessionTask*) uploadMultipartFormWithFile: (NSURL*) file
    contentType: (NSString*) contentType
    filename: (NSString*) filename
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Upload an attachment for sending using Multipart Form

When sending emails with attachments first upload each attachment with this endpoint. Record the returned attachment IDs. Then use these attachment IDs in the SendEmailOptions when sending an email. This means that attachments can easily be reused.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSURL* file = [NSURL fileURLWithPath:@"/path/to/file"]; // file
NSString* contentType = @"contentType_example"; // contentType (optional)
NSString* filename = @"filename_example"; // filename (optional)

OAIExtraOperationsApi*apiInstance = [[OAIExtraOperationsApi alloc] init];

// Upload an attachment for sending using Multipart Form
[apiInstance uploadMultipartFormWithFile:file
              contentType:contentType
              filename:filename
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIExtraOperationsApi->uploadMultipartForm: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **NSURL*****NSURL***| file | 
 **contentType** | **NSString***| contentType | [optional] 
 **filename** | **NSString***| filename | [optional] 

### Return type

**NSArray<NSString*>***

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

