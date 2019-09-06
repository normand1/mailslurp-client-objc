# OAICommonOperationsApi

All URIs are relative to *https://api.mailslurp.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createNewEmailAddress**](OAICommonOperationsApi.md#createnewemailaddress) | **POST** /newEmailAddress | Create new email address
[**deleteEmail**](OAICommonOperationsApi.md#deleteemail) | **DELETE** /deleteEmail | Delete an email
[**deleteEmailAddress**](OAICommonOperationsApi.md#deleteemailaddress) | **DELETE** /deleteEmailAddress | Delete email address and its emails
[**emptyInbox**](OAICommonOperationsApi.md#emptyinbox) | **DELETE** /emptyInbox | Delete all emails in an inbox
[**sendEmailSimple**](OAICommonOperationsApi.md#sendemailsimple) | **POST** /sendEmail | Send an email from a random email address
[**waitForEmailCount**](OAICommonOperationsApi.md#waitforemailcount) | **GET** /waitForEmailCount | Wait for and return count number of emails 
[**waitForLatestEmail**](OAICommonOperationsApi.md#waitforlatestemail) | **GET** /waitForLatestEmail | Fetch inbox&#39;s latest email or if empty wait for email to arrive
[**waitForMatchingEmail**](OAICommonOperationsApi.md#waitformatchingemail) | **POST** /waitForMatchingEmails | Wait or return list of emails that match simple matching patterns
[**waitForNthEmail**](OAICommonOperationsApi.md#waitfornthemail) | **GET** /waitForNthEmail | Wait for or fetch the email with a given index in the inbox specified


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

# **deleteEmail**
```objc
-(NSURLSessionTask*) deleteEmailWithEmailId: (NSString*) emailId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an email

Deletes an email

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* emailId = @"emailId_example"; // emailId

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Delete an email
[apiInstance deleteEmailWithEmailId:emailId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->deleteEmail: %@", error);
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

# **deleteEmailAddress**
```objc
-(NSURLSessionTask*) deleteEmailAddressWithInboxId: (NSString*) inboxId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete email address and its emails

Deletes an inbox

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: API_KEY)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* inboxId = @"inboxId_example"; // inboxId

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Delete email address and its emails
[apiInstance deleteEmailAddressWithInboxId:inboxId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->deleteEmailAddress: %@", error);
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

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Delete all emails in an inbox
[apiInstance emptyInboxWithInboxId:inboxId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->emptyInbox: %@", error);
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

# **waitForEmailCount**
```objc
-(NSURLSessionTask*) waitForEmailCountWithCount: (NSNumber*) count
    inboxId: (NSString*) inboxId
    timeout: (NSNumber*) timeout
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

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Wait for and return count number of emails 
[apiInstance waitForEmailCountWithCount:count
              inboxId:inboxId
              timeout:timeout
          completionHandler: ^(NSArray<OAIEmailPreview>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->waitForEmailCount: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **count** | **NSNumber***| Number of emails to wait for. Must be greater that 1 | [optional] 
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 
 **timeout** | **NSNumber***| Max milliseconds to wait | [optional] 

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

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Fetch inbox's latest email or if empty wait for email to arrive
[apiInstance waitForLatestEmailWithInboxId:inboxId
              timeout:timeout
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
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 
 **timeout** | **NSNumber***| Max milliseconds to wait | [optional] 

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

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Wait or return list of emails that match simple matching patterns
[apiInstance waitForMatchingEmailWithMatchOptions:matchOptions
              count:count
              inboxId:inboxId
              timeout:timeout
          completionHandler: ^(NSArray<OAIEmailPreview>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->waitForMatchingEmail: %@", error);
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

OAICommonOperationsApi*apiInstance = [[OAICommonOperationsApi alloc] init];

// Wait for or fetch the email with a given index in the inbox specified
[apiInstance waitForNthEmailWithInboxId:inboxId
              index:index
              timeout:timeout
          completionHandler: ^(OAIEmail* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAICommonOperationsApi->waitForNthEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inboxId** | [**NSString***](.md)| Id of the inbox we are fetching emails from | [optional] 
 **index** | **NSNumber***| Zero based index of the email to wait for | [optional] 
 **timeout** | **NSNumber***| Max milliseconds to wait | [optional] 

### Return type

[**OAIEmail***](OAIEmail.md)

### Authorization

[API_KEY](../README.md#API_KEY)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

