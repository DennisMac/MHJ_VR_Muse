// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from muse_file.djinni

#import <Foundation/Foundation.h>

/**
 * Data struct corresponds to a DSP message in the .muse file format.
 * This message is very generic and allows you to save custom messages.
 * For more information on the file format see: http://developer.choosemuse.com/file-formats/muse
 */
@interface IXNDspData : NSObject
- (nonnull instancetype)initWithType:(nonnull NSString *)type
                          floatArray:(nonnull NSArray<NSNumber *> *)floatArray
                            intArray:(nonnull NSArray<NSNumber *> *)intArray
                             version:(nonnull NSString *)version;
+ (nonnull instancetype)dspDataWithType:(nonnull NSString *)type
                             floatArray:(nonnull NSArray<NSNumber *> *)floatArray
                               intArray:(nonnull NSArray<NSNumber *> *)intArray
                                version:(nonnull NSString *)version;

/** Type of your message */
@property (nonatomic, readonly, nonnull) NSString * type;

/** array of floating point data */
@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> * floatArray;

/** array of integer data */
@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> * intArray;

/** version of your message format */
@property (nonatomic, readonly, nonnull) NSString * version;

@end
