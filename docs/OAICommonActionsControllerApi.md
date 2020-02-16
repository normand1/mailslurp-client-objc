# OAICommonActionsControllerApi

All URIs are relative to *https://api.mailslurp.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createNewEmailAddress**](OAICommonActionsControllerApi.md#createnewemailaddress) | **POST** /newEmailAddress | Create new random inbox
[**emptyInbox**](OAICommonActionsControllerApi.md#emptyinbox) | **DELETE** /emptyInbox | Delete all emails in an inbox
[**sendEmailSimple**](OAICommonActionsControllerApi.md#sendemailsimple) | **POST** /sendEmail | Send an email from a random email address
[**waitForEmailCount**](OAICommonActionsControllerApi.md#waitforemailcount) | **GET** /waitForEmailCount | Wait for and return count number of emails 
[**waitForLatestEmail**](OAICommonActionsControllerApi.md#waitforlatestemail) | **GET** /waitForLatestEmail | Fetch inbox&#39;s latest email or if empty wait for email to arrive
[**waitForMatchingEmail**](OAICommonActionsControllerApi.md#waitformatchingemail) | **POST** /waitForMatchingEmails | Wait or return list of emails that match simple matching patterns
[**waitForNthEmail**](OAICommonActionsControllerApi.md#waitfornthemail) | **GET** /waitForNthEmail | Wait for or fetch the email with a given index in the inbox specified


# **createNewEmailAddress**
```objc
-(NSURLSessionTask*) createNewEmailAddressWithCompletionHandler: 
        (void (^)(OAIInbox* output, NSError* error)) handler;
```

Create new random inbox

Returns an Inbox with an `id` and an `emailAddress`

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];



OAICommonActionsControllerApi*apiInstance = [[OAICommonActionsControllerApi alloc] init];

// Create new random inbox
[apiInstance createNewEmailAddressWithCompletionHandler: 
          ^(OAIInbox* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonActionsControllerApi->createNewEmailAddress: %@", error);
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

# **emptyInbox**
```objc
-(NSURLSessionTask*) emptyInboxWithInboxId: (NSString*) inboxId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all emails in an inbox

Deletes all emails

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId

OAICommonActionsControllerApi*apiInstance = [[OAICommonActionsControllerApi alloc] init];

// Delete all emails in an inbox
[apiInstance emptyInboxWithInboxId:inboxId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAICommonActionsControllerApi->emptyInbox: %@", error);
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

OAICommonActionsControllerApi*apiInstance = [[OAICommonActionsControllerApi alloc] init];

// Send an email from a random email address
[apiInstance sendEmailSimpleWithSendEmailOptions:sendEmailOptions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAICommonActionsControllerApi->sendEmailSimple: %@", error);
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

# **waitForEmailCount**
```objc
-(NSURLSessionTask*) waitForEmailCountWithCount: (NSNumber*) count
    inboxId: (NSString*) inboxId
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
        completionHandler: (void (^)(NSArray<OAIEmailPreview>* output, NSError* error)) handler;
```

Wait for and return count number of emails 

Will only wait if count is greater that the found emails in given inbox.If you need to wait for an email for a non-empty inbox see the other receive methods.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSNumber* count = @56; // Number of emails to wait for. Must be greater that 1 (optional)
NSString* inboxId = @"inboxId_example"; // Id of the inbox we are fetching emails from (optional)
NSNumber* timeout = @56; // Max milliseconds to wait (optional)
NSNumber* unreadOnly = @(NO); // Optional filter for unread only (optional) (default to @(NO))

OAICommonActionsControllerApi*apiInstance = [[OAICommonActionsControllerApi alloc] init];

// Wait for and return count number of emails 
[apiInstance waitForEmailCountWithCount:count
              inboxId:inboxId
              timeout:timeout
              unreadOnly:unreadOnly
          completionHandler: ^(NSArray<OAIEmailPreview>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonActionsControllerApi->waitForEmailCount: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **count** | **NSNumber***| Number of emails to wait for. Must be greater that 1 | [optional] 
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 
 **timeout** | **NSNumber***| Max milliseconds to wait | [optional] 
 **unreadOnly** | **NSNumber***| Optional filter for unread only | [optional] [default to @(NO)]

### Return type

[**NSArray<OAIEmailPreview>***](OAIEmailPreview.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **waitForLatestEmail**
```objc
-(NSURLSessionTask*) waitForLatestEmailWithInboxId: (NSString*) inboxId
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
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


NSString* inboxId = @"inboxId_example"; // Id of the inbox we are fetching emails from (optional)
NSNumber* timeout = @56; // Max milliseconds to wait (optional)
NSNumber* unreadOnly = @(NO); // Optional filter for unread only (optional) (default to @(NO))

OAICommonActionsControllerApi*apiInstance = [[OAICommonActionsControllerApi alloc] init];

// Fetch inbox's latest email or if empty wait for email to arrive
[apiInstance waitForLatestEmailWithInboxId:inboxId
              timeout:timeout
              unreadOnly:unreadOnly
          completionHandler: ^(OAIEmail* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonActionsControllerApi->waitForLatestEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 
 **timeout** | **NSNumber***| Max milliseconds to wait | [optional] 
 **unreadOnly** | **NSNumber***| Optional filter for unread only | [optional] [default to @(NO)]

### Return type

[**OAIEmail***](OAIEmail.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **waitForMatchingEmail**
```objc
-(NSURLSessionTask*) waitForMatchingEmailWithMatchOptions: (OAIMatchOptions*) matchOptions
    count: (NSNumber*) count
    inboxId: (NSString*) inboxId
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
        completionHandler: (void (^)(NSArray<OAIEmailPreview>* output, NSError* error)) handler;
```

Wait or return list of emails that match simple matching patterns

Results must also meet provided count. Match options allow simple CONTAINS or EQUALS filtering on SUBJECT, TO, BCC, CC, and FROM.

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


OAIMatchOptions* matchOptions = [[OAIMatchOptions alloc] init]; // matchOptions
NSNumber* count = @56; // Number of emails to wait for. Must be greater that 1 (optional)
NSString* inboxId = @"inboxId_example"; // Id of the inbox we are fetching emails from (optional)
NSNumber* timeout = @56; // Max milliseconds to wait (optional)
NSNumber* unreadOnly = @(NO); // Optional filter for unread only (optional) (default to @(NO))

OAICommonActionsControllerApi*apiInstance = [[OAICommonActionsControllerApi alloc] init];

// Wait or return list of emails that match simple matching patterns
[apiInstance waitForMatchingEmailWithMatchOptions:matchOptions
              count:count
              inboxId:inboxId
              timeout:timeout
              unreadOnly:unreadOnly
          completionHandler: ^(NSArray<OAIEmailPreview>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonActionsControllerApi->waitForMatchingEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **matchOptions** | [**OAIMatchOptions***](OAIMatchOptions.md)| matchOptions | 
 **count** | **NSNumber***| Number of emails to wait for. Must be greater that 1 | [optional] 
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 
 **timeout** | **NSNumber***| Max milliseconds to wait | [optional] 
 **unreadOnly** | **NSNumber***| Optional filter for unread only | [optional] [default to @(NO)]

### Return type

[**NSArray<OAIEmailPreview>***](OAIEmailPreview.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **waitForNthEmail**
```objc
-(NSURLSessionTask*) waitForNthEmailWithInboxId: (NSString*) inboxId
    index: (NSNumber*) index
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
        completionHandler: (void (^)(OAIEmail* output, NSError* error)) handler;
```

Wait for or fetch the email with a given index in the inbox specified

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // Id of the inbox we are fetching emails from (optional)
NSNumber* index = @56; // Zero based index of the email to wait for (optional)
NSNumber* timeout = @56; // Max milliseconds to wait (optional)
NSNumber* unreadOnly = @(NO); // Optional filter for unread only (optional) (default to @(NO))

OAICommonActionsControllerApi*apiInstance = [[OAICommonActionsControllerApi alloc] init];

// Wait for or fetch the email with a given index in the inbox specified
[apiInstance waitForNthEmailWithInboxId:inboxId
              index:index
              timeout:timeout
              unreadOnly:unreadOnly
          completionHandler: ^(OAIEmail* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonActionsControllerApi->waitForNthEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 
 **index** | **NSNumber***| Zero based index of the email to wait for | [optional] 
 **timeout** | **NSNumber***| Max milliseconds to wait | [optional] 
 **unreadOnly** | **NSNumber***| Optional filter for unread only | [optional] [default to @(NO)]

### Return type

[**OAIEmail***](OAIEmail.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

