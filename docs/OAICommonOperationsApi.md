# OAICommonOperationsApi

All URIs are relative to *https://api.mailslurp.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createNewEmailAddress**](OAICommonOperationsApi.md#createnewemailaddress) | **POST** /newEmailAddress | Create new email address
[**sendEmailSimple**](OAICommonOperationsApi.md#sendemailsimple) | **POST** /sendEmail | Send an email from a random email address
[**waitForLatestEmail**](OAICommonOperationsApi.md#waitforlatestemail) | **GET** /fetchLatestEmail | Fetch inbox&#39;s latest email or if empty wait for email to arrive


# **createNewEmailAddress**
```objc
-(NSURLSessionTask*) createNewEmailAddressWithCompletionHandler: 
        (void (^)(OAIInbox* output, NSError* error)) handler;
```

Create new email address

Returns an Inbox with an `id` and an `emailAddress`

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];



OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Create new email address
[apiInstance createNewEmailAddressWithCompletionHandler: 
          ^(OAIInbox* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->createNewEmailAddress: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**OAIInbox***](OAIInbox.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendEmailSimple**
```objc
-(NSURLSessionTask*) sendEmailSimpleWithSendEmailOptions: (OAISendEmailOptions*) sendEmailOptions
        completionHandler: (void (^)(NSError* error)) handler;
```

Send an email from a random email address

To specify an email address first create an inbox and use that with the other send email methods

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


OAISendEmailOptions* sendEmailOptions = [[OAISendEmailOptions alloc] init]; // sendEmailOptions

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Send an email from a random email address
[apiInstance sendEmailSimpleWithSendEmailOptions:sendEmailOptions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->sendEmailSimple: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendEmailOptions** | [**OAISendEmailOptions***](OAISendEmailOptions.md)| sendEmailOptions | 

### Return type

void (empty response body)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **waitForLatestEmail**
```objc
-(NSURLSessionTask*) waitForLatestEmailWithInboxEmailAddress: (NSString*) inboxEmailAddress
    inboxId: (NSString*) inboxId
        completionHandler: (void (^)(OAIEmail* output, NSError* error)) handler;
```

Fetch inbox's latest email or if empty wait for email to arrive

Will return either the last received email or wait for an email to arrive and return that. If you need to wait for an email for a non-empty inbox see the other receive methods.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxEmailAddress = @"inboxEmailAddress_example"; // Email address of the inbox we are fetching emails from (optional)
NSString* inboxId = @"inboxId_example"; // Id of the inbox we are fetching emails from (optional)

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Fetch inbox's latest email or if empty wait for email to arrive
[apiInstance waitForLatestEmailWithInboxEmailAddress:inboxEmailAddress
              inboxId:inboxId
          completionHandler: ^(OAIEmail* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->waitForLatestEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxEmailAddress** | **NSString***| Email address of the inbox we are fetching emails from | [optional] 
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 

### Return type

[**OAIEmail***](OAIEmail.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

