# OAIEmailControllerApi

All URIs are relative to *https://api.mailslurp.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteAllEmails**](OAIEmailControllerApi.md#deleteallemails) | **DELETE** /emails | Delete all emails
[**deleteEmail**](OAIEmailControllerApi.md#deleteemail) | **DELETE** /emails/{emailId} | Delete Email
[**downloadAttachment**](OAIEmailControllerApi.md#downloadattachment) | **GET** /emails/{emailId}/attachments/{attachmentId} | Get email attachment
[**forwardEmail**](OAIEmailControllerApi.md#forwardemail) | **POST** /emails/{emailId}/forward | Forward Email
[**getAttachmentMetaData**](OAIEmailControllerApi.md#getattachmentmetadata) | **GET** /emails/{emailId}/attachments/{attachmentId}/metadata | Get email attachment metadata
[**getAttachments**](OAIEmailControllerApi.md#getattachments) | **GET** /emails/{emailId}/attachments | Get all email attachment metadata
[**getEmail**](OAIEmailControllerApi.md#getemail) | **GET** /emails/{emailId} | Get Email Content
[**getEmailsPaginated**](OAIEmailControllerApi.md#getemailspaginated) | **GET** /emails | Get all emails
[**getRawEmailContents**](OAIEmailControllerApi.md#getrawemailcontents) | **GET** /emails/{emailId}/raw | Get Raw Email Content
[**validateEmail**](OAIEmailControllerApi.md#validateemail) | **POST** /emails/{emailId}/validate | Validate email


# **deleteAllEmails**
```objc
-(NSURLSessionTask*) deleteAllEmailsWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Delete all emails

Deletes all emails

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];



OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Delete all emails
[apiInstance deleteAllEmailsWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->deleteAllEmails: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEmail**
```objc
-(NSURLSessionTask*) deleteEmailWithEmailId: (NSString*) emailId
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

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Delete Email
[apiInstance deleteEmailWithEmailId:emailId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->deleteEmail: %@", error);
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

# **downloadAttachment**
```objc
-(NSURLSessionTask*) downloadAttachmentWithAttachmentId: (NSString*) attachmentId
    emailId: (NSString*) emailId
    apiKey: (NSString*) apiKey
        completionHandler: (void (^)(NSData* output, NSError* error)) handler;
```

Get email attachment

Returns the specified attachment for a given email as a byte stream (file download). Get the attachmentId from the email response.

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

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Get email attachment
[apiInstance downloadAttachmentWithAttachmentId:attachmentId
              emailId:emailId
              apiKey:apiKey
          completionHandler: ^(NSData* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->downloadAttachment: %@", error);
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

**NSData***

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/octet-stream

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

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Forward Email
[apiInstance forwardEmailWithEmailId:emailId
              forwardEmailOptions:forwardEmailOptions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->forwardEmail: %@", error);
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

# **getAttachmentMetaData**
```objc
-(NSURLSessionTask*) getAttachmentMetaDataWithAttachmentId: (NSString*) attachmentId
    emailId: (NSString*) emailId
        completionHandler: (void (^)(OAIAttachmentMetaData* output, NSError* error)) handler;
```

Get email attachment metadata

Returns the metadata such as name and content-type for a given attachment and email.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* attachmentId = @"attachmentId_example"; // attachmentId
NSString* emailId = @"emailId_example"; // emailId

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Get email attachment metadata
[apiInstance getAttachmentMetaDataWithAttachmentId:attachmentId
              emailId:emailId
          completionHandler: ^(OAIAttachmentMetaData* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->getAttachmentMetaData: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **attachmentId** | **NSString***| attachmentId | 
 **emailId** | [**NSString***](.md)| emailId | 

### Return type

[**OAIAttachmentMetaData***](OAIAttachmentMetaData.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAttachments**
```objc
-(NSURLSessionTask*) getAttachmentsWithEmailId: (NSString*) emailId
        completionHandler: (void (^)(NSArray<OAIAttachmentMetaData>* output, NSError* error)) handler;
```

Get all email attachment metadata

Returns an array of attachment metadata such as name and content-type for a given email if present.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailId = @"emailId_example"; // emailId

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Get all email attachment metadata
[apiInstance getAttachmentsWithEmailId:emailId
          completionHandler: ^(NSArray<OAIAttachmentMetaData>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->getAttachments: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**NSString***](.md)| emailId | 

### Return type

[**NSArray<OAIAttachmentMetaData>***](OAIAttachmentMetaData.md)

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

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Get Email Content
[apiInstance getEmailWithEmailId:emailId
          completionHandler: ^(OAIEmail* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->getEmail: %@", error);
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

# **getEmailsPaginated**
```objc
-(NSURLSessionTask*) getEmailsPaginatedWithInboxId: (NSArray<NSString*>*) inboxId
    page: (NSNumber*) page
    size: (NSNumber*) size
    sort: (NSString*) sort
    unreadOnly: (NSNumber*) unreadOnly
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


NSArray<NSString*>* inboxId = @[@"inboxId_example"]; // Optional inbox ids to filter by. Can be repeated (optional)
NSNumber* page = @0; // Optional page index in email list pagination (optional) (default to @0)
NSNumber* size = @20; // Optional page size in email list pagination (optional) (default to @20)
NSString* sort = @"ASC"; // Optional createdAt sort direction ASC or DESC (optional) (default to @"ASC")
NSNumber* unreadOnly = @(NO); // Optional filter for unread emails only (optional) (default to @(NO))

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Get all emails
[apiInstance getEmailsPaginatedWithInboxId:inboxId
              page:page
              size:size
              sort:sort
              unreadOnly:unreadOnly
          completionHandler: ^(OAIPageEmailProjection* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->getEmailsPaginated: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSArray&lt;NSString*&gt;***](NSString*.md)| Optional inbox ids to filter by. Can be repeated | [optional] 
 **page** | **NSNumber***| Optional page index in email list pagination | [optional] [default to @0]
 **size** | **NSNumber***| Optional page size in email list pagination | [optional] [default to @20]
 **sort** | **NSString***| Optional createdAt sort direction ASC or DESC | [optional] [default to @&quot;ASC&quot;]
 **unreadOnly** | **NSNumber***| Optional filter for unread emails only | [optional] [default to @(NO)]

### Return type

[**OAIPageEmailProjection***](OAIPageEmailProjection.md)

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

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Get Raw Email Content
[apiInstance getRawEmailContentsWithEmailId:emailId
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->getRawEmailContents: %@", error);
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

# **validateEmail**
```objc
-(NSURLSessionTask*) validateEmailWithEmailId: (NSString*) emailId
        completionHandler: (void (^)(OAIValidationDto* output, NSError* error)) handler;
```

Validate email

Validate HTML content of email

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailId = @"emailId_example"; // emailId

OAIEmailControllerApi*apiInstance = [[OAIEmailControllerApi alloc] init];

// Validate email
[apiInstance validateEmailWithEmailId:emailId
          completionHandler: ^(OAIValidationDto* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEmailControllerApi->validateEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **emailId** | [**NSString***](.md)| emailId | 

### Return type

[**OAIValidationDto***](OAIValidationDto.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

