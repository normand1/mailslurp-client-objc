#import "OAIJsonNode.h"

@implementation OAIJsonNode

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"array": @"array", @"bigDecimal": @"bigDecimal", @"bigInteger": @"bigInteger", @"binary": @"binary", @"boolean": @"boolean", @"containerNode": @"containerNode", @"_double": @"double", @"empty": @"empty", @"_float": @"float", @"floatingPointNumber": @"floatingPointNumber", @"_int": @"int", @"integralNumber": @"integralNumber", @"_long": @"long", @"missingNode": @"missingNode", @"nodeType": @"nodeType", @"null": @"null", @"number": @"number", @"object": @"object", @"pojo": @"pojo", @"_short": @"short", @"textual": @"textual", @"valueNode": @"valueNode" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"array", @"bigDecimal", @"bigInteger", @"binary", @"boolean", @"containerNode", @"_double", @"empty", @"_float", @"floatingPointNumber", @"_int", @"integralNumber", @"_long", @"missingNode", @"nodeType", @"null", @"number", @"object", @"pojo", @"_short", @"textual", @"valueNode"];
  return [optionalProperties containsObject:propertyName];
}

@end
