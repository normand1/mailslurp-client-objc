#import "OAISendEmailOptions.h"

@implementation OAISendEmailOptions

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"bcc": @"bcc", @"body": @"body", @"cc": @"cc", @"charset": @"charset", @"from": @"from", @"html": @"html", @"replyTo": @"replyTo", @"subject": @"subject", @"to": @"to" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"bcc", @"body", @"cc", @"charset", @"from", @"html", @"replyTo", @"subject", ];
  return [optionalProperties containsObject:propertyName];
}

@end
